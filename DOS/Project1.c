#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PROCESSES 50
#define PID_LENGTH 10

struct Process {
    char pid[PID_LENGTH];
    int arrivalTime;
    int burstTime;
    int startTime;
    int finishTime;
    int waitingTime;
    int turnaroundTime;
};

void FCFS();
void RR();

int main() {
    int choice;
    do {
        printf("\nChoose a scheduling algorithm:\n");
        printf("1. First Come First Served (FCFS)\n");
        printf("2. Round Robin (RR)\n");
        printf("3. Exit from program\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                FCFS();
                break;
            case 2:
                RR();
                break;
            case 3:
                printf("Exiting from the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
                break;
        }
    } while (choice != 3);

    return 0;
}

void FCFS() {
    int n, i;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    struct Process *processes = (struct Process *)malloc(n * sizeof(struct Process));

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Process %d:\n", i + 1);
        printf("PID: ");
        scanf("%s", processes[i].pid);
        printf("Arrival Time: ");
        scanf("%d", &processes[i].arrivalTime);
        printf("Burst Time: ");
        scanf("%d", &processes[i].burstTime);
    }

    // Perform FCFS scheduling
    int currentTime = 0;
    for (i = 0; i < n; i++) {
        processes[i].startTime = (currentTime > processes[i].arrivalTime) ? currentTime : processes[i].arrivalTime;
        processes[i].finishTime = processes[i].startTime + processes[i].burstTime;
        processes[i].waitingTime = processes[i].startTime - processes[i].arrivalTime;
        processes[i].turnaroundTime = processes[i].finishTime - processes[i].arrivalTime;
        currentTime = processes[i].finishTime;
    }

    // Display Gantt Chart for FCFS
    printf("\nFCFS Gantt Chart:\n");
    printf("---------------------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("|  %s  ", processes[i].pid);
    }
    printf("|\n---------------------------------------------------\n");

    // Calculate and display average waiting time and average turnaround time
    double totalWaitingTime = 0;
    double totalTurnaroundTime = 0;
    for (i = 0; i < n; i++) {
        totalWaitingTime += processes[i].waitingTime;
        totalTurnaroundTime += processes[i].turnaroundTime;
    }
    double avgWaitingTime = totalWaitingTime / n;
    double avgTurnaroundTime = totalTurnaroundTime / n;

    printf("\nAverage Waiting Time for FCFS: %.2lf\n", avgWaitingTime);
    printf("Average Turnaround Time for FCFS: %.2lf\n", avgTurnaroundTime);

    free(processes);
}

void RR() {
    int n, i;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    struct Process *processes = (struct Process *)malloc(n * sizeof(struct Process));

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Process %d:\n", i + 1);
        printf("PID: ");
        scanf("%s", processes[i].pid);
        printf("Arrival Time: ");
        scanf("%d", &processes[i].arrivalTime);
        printf("Burst Time: ");
        scanf("%d", &processes[i].burstTime);
    }

    int quantum;
    printf("Enter time quantum for Round Robin: ");
    scanf("%d", &quantum);

    // Perform Round Robin scheduling
    int currentTime = 0;
    int *completed = (int *)calloc(n, sizeof(int));
    while (!allProcessesCompleted(completed, n)) {
        for (i = 0; i < n; i++) {
            if (!completed[i] && processes[i].arrivalTime <= currentTime) {
                int remainingTime = processes[i].burstTime - processes[i].startTime;
                int executionTime = (quantum < remainingTime) ? quantum : remainingTime;
                currentTime += executionTime;
                processes[i].startTime += executionTime;

                if (processes[i].startTime >= processes[i].burstTime) {
                    completed[i] = 1;
                    processes[i].finishTime = currentTime;
                    processes[i].turnaroundTime = processes[i].finishTime - processes[i].arrivalTime;
                    processes[i].waitingTime = processes[i].turnaroundTime - processes[i].burstTime;
                }
            }
        }
    }

    // Display Gantt Chart for RR
    printf("\nRR Gantt Chart:\n");
    printf("---------------------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("|  %s  ", processes[i].pid);
    }
    printf("|\n---------------------------------------------------\n");


    // Calculate and display average waiting time and average turnaround time for RR
    double totalWaitingTime = 0;
    double totalTurnaroundTime = 0;
    for (i = 0; i < n; i++) {
        totalWaitingTime += processes[i].waitingTime;
        totalTurnaroundTime += processes[i].turnaroundTime;
    }
    double avgWaitingTime = totalWaitingTime / n;
    double avgTurnaroundTime = totalTurnaroundTime / n;

    printf("\nAverage Waiting Time for RR: %.2lf\n", avgWaitingTime);
    printf("Average Turnaround Time for RR: %.2lf\n", avgTurnaroundTime);

    free(processes);
    free(completed);
}

int allProcessesCompleted(int *completed, int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (!completed[i]) {
            return 0;
        }
    }
    return 1;
}

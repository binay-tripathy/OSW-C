#include <stdio.h>
int main() {
    int a[10][10], b[10][10], mul[10][10], r1, c1, r2, c2;
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2) {
        printf("Error! Column of first matrix is not equal to row of second.\n");
        return 1;
    }
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c1; ++j)
            scanf("%d", &a[i][j]);
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; ++i)
        for (int j = 0; j < c2; ++j)
            scanf("%d", &b[i][j]);
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j)
            mul[i][j] = 0;
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j)
            for (int k = 0; k < c1; ++k)
                mul[i][j] += a[i][k] * b[k][j];
    printf("Product of the matrices:\n");
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j)
            printf("%d ", mul[i][j]);
        printf("\n");
    }
    return 0;
}

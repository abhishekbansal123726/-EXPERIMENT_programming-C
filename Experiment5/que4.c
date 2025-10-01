#include <stdio.h>

int main() {
    int m, n, p, q;
    int i, j, k;

    // Input order of matrix A
    printf("Enter rows and columns of Matrix A (m n): ");
    scanf("%d %d", &m, &n);

    // Input order of matrix B
    printf("Enter rows and columns of Matrix B (p q): ");
    scanf("%d %d", &p, &q);

    // Check compatibility: (columns of A == rows of B)
    if (n != p) {
        printf("\nMatrix multiplication not possible!\n");
        printf("Condition failed: Columns of A (%d) != Rows of B (%d)\n", n, p);
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];

    // Input Matrix A
    printf("\nEnter elements of Matrix A (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input Matrix B
    printf("\nEnter elements of Matrix B (%d x %d):\n", p, q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize Result Matrix C with 0
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix Multiplication
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print Matrix A
    printf("\nMatrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    // Print Matrix B
    printf("\nMatrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }

    // Print Result Matrix C
    printf("\nResultant Matrix (A x B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

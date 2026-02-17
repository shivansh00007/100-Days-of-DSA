#include <stdio.h>

int main() {
    int m, n;
    int matrix[100][100];
    int sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter matrix elements:\n");

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);

            if(i == j) {
                sum += matrix[i][j];
            }
        }
    }

    printf("Sum of primary diagonal = %d", sum);

    return 0;
}

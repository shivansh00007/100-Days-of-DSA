#include <stdio.h>

int main(){
    int m, n, i, j;
    int mat1[100][100], mat2[100][100], sum[100][100];
    
    scanf("%d %d", &m, &n);
    
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &mat1[i][j]);
        }
    }
    
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
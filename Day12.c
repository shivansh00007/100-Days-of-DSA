#include <stdio.h>

int main(){
    int m, n, i, j, flag = 1;
    int mat[100][100];
    
    scanf("%d %d", &m, &n);
    
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    
    if(m != n){
        flag = 0;
    }
    else{
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                if(mat[i][j] != mat[j][i]){
                    flag = 0;
                    break;
                }
            }
            if(flag == 0){
                break;
            }
        }
    }
    
    if(flag == 1){
        printf("Symmetric Matrix\n");
    }
    else{
        printf("Not a Symmetric Matrix\n");
    }
    
    return 0;
}
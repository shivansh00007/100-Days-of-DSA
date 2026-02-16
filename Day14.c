#include <stdio.h>

int main(){
    int n, i, j, flag = 1;
    int mat[100][100];
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i == j){
                if(mat[i][j] != 1){
                    flag = 0;
                    break;
                }
            }
            else{
                if(mat[i][j] != 0){
                    flag = 0;
                    break;
                }
            }
        }
        if(flag == 0){
            break;
        }
    }
    
    if(flag == 1){
        printf("Identity Matrix\n");
    }
    else{
        printf("Not an Identity Matrix\n");
    }
    
    return 0;
}
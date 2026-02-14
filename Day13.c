#include <stdio.h>

int main(){
    int r, c, i, j;
    int mat[100][100];
    int top, bottom, left, right;
    
    scanf("%d %d", &r, &c);
    
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    
    top = 0;
    bottom = r - 1;
    left = 0;
    right = c - 1;
    
    while(top <= bottom && left <= right){
        for(i = left; i <= right; i++){
            printf("%d ", mat[top][i]);
        }
        top++;
        
        for(i = top; i <= bottom; i++){
            printf("%d ", mat[i][right]);
        }
        right--;
        
        if(top <= bottom){
            for(i = right; i >= left; i--){
                printf("%d ", mat[bottom][i]);
            }
            bottom--;
        }
        
        if(left <= right){
            for(i = bottom; i >= top; i--){
                printf("%d ", mat[i][left]);
            }
            left++;
        }
    }
    
    return 0;
}
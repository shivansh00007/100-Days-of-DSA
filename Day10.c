#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int i, j, flag = 1;
    
    scanf("%s", str);
    
    i=0;
    j=strlen(str)-1;
    
    while(i < j){
        if(str[i]!=str[j]){
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    
    if(flag==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    
    return 0;
}
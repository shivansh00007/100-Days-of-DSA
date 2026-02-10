#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end){
    char temp;
    
    if(start >= end){
        return;
    }
    
    temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    
    reverse(str, start + 1, end - 1);
}

int main(){
    char str[100];
    int len;
    
    scanf("%s", str);
    
    len = strlen(str);
    
    reverse(str, 0, len - 1);
    
    printf("%s\n", str);
    
    return 0;
}
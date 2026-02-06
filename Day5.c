#include <stdio.h>

int main(){
    int p,q,i,j,k;
    int arr1[100],arr2[100],merged[200];
    
    scanf("%d", &p);
    for(i=0;i<p;i++){
        scanf("%d", &arr1[i]);
    }
    
    scanf("%d", &q);
    for(i=0;i<q;i++){
        scanf("%d", &arr2[i]);
    }
    
    i=0;
    j=0;
    k=0;
    
    while(i<p && j<q){
        if(arr1[i]<arr2[j]){
            merged[k]=arr1[i];
            i++;
        }
        else{
            merged[k]=arr2[j];
            j++;
        }
        k++;
    }
    
    while(i<p){
        merged[k]=arr1[i];
        i++;
        k++;
    }
    
    while(j<q){
        merged[k]=arr2[j];
        j++;
        k++;
    }
    
    for(i=0;i<k;i++){
        printf("%d ",merged[i]);
    }
    
    return 0;
}
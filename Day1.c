#include <stdio.h>

int main(){
            int n,i,a[100],num,pos;
            printf("Enter the Size:\n");
            scanf("%d",&n);
            if (n >= 100) {
            printf("Overflow! Array is full.\n");
            return 0;
            }
            printf("Enter the Elements:\n");
            for(i=0;i<n;i++){
                        scanf("%d",&a[i]);
            }
            printf("Enter the number want to insert:\n");
            scanf("%d",&num);
            printf("Enter the Position:\n");
            scanf("%d",&pos);

            if (pos < 1 || pos > n + 1) {
            printf("Invalid position\n");
            return 0;
            }
            for(i=n-1;i>=pos-1;i--){
                        a[i+1]=a[i];
                        
            }
            a[pos-1]=num;
            n++;
            for(i=0;i<n;i++){
                        printf("%d",a[i]);
            }
            return 0;
}
 #include <stdio.h>
 
 int main(){
 
            int a[100],i,n,pos;
            printf("Enter the Size:\n");
            scanf("%d",&n);
            printf("Enter the Elements:\n");
            for(i=0;i<n;i++){
                        scanf("%d",&a[i]);
            }
            printf("Enter the Position from which you have Delete the Element:\n");
            scanf("%d",&pos);
            for(i=pos-1;i<n-1;i++){
                        a[i]=a[i+1];
            }
            n--;
            for(i=0;i<n;i++){
                        printf("%d",a[i]);
            }
            return 0;
 }
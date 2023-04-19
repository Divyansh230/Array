#include <stdio.h>

int main(){
    int n;
    printf("Enter Size of the Array: ");
    scanf("%d",&n);
    printf("Enter elemnts into the Array: ");
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Original Array: ");
    for(int i=0;i<n;i++)
    printf("%d,",a[i]);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n-i-1;j++){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("Sorted Array: ");
    for(int i=0;i<n;i++)
    printf("%d,",a[i]);
    return 0;
}
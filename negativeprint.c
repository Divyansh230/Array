#include <stdio.h>

int main(){
    int n;
    printf("Enter Size of the Array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        printf("%d,",a[i]);
    }
    return 0;
}
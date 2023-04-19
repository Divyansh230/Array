#include <stdio.h>

int main(){
    int n,count=0;
    printf("Enter Size: ");
    scanf("%d",&n);
    printf("Enter elements in Array: ");
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    if(a[i]<0)
    count++;
    printf("No of negative elements is%d",count);
    return 0;
}
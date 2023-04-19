#include <stdio.h>

int main(){
    int n,s=0;
    printf("Enter size of the Array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in Array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    s+=a[i];
    printf("Sum is %d",s);
    return 0;
}
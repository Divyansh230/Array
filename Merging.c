#include <stdio.h>

int main(){
    int n;
    printf("Enter size of the Array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=n-1;i>=0;i--)
    printf("%d,",a[i]);
    return 0;
}
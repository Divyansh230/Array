#include <stdio.h>

int main(){
    int n;
    printf("Enter Size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in an array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    printf("%d,",a[i]);
    return 0;
}
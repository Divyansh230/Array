#include <stdio.h>

int main(){
    int n;
    printf("Enter size of the Array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in an array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int arr[n];
    for(int i=0;i<n;i++)
    arr[i]=a[i];
    for(int i=0;i<n;i++)
    printf("%d\t%d\n",a[i],arr[i]);
    return 0;
}
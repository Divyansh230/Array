#include <stdio.h>

int main(){
    int n,m;
    printf("Enter elements in an array: ");
    scanf("%d%d",&n,&m);
    int a[n],b[m];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<m;i++)
    scanf("%d",&b[i]);
    int arr[m+n];
    for(int i=0;i<n;i++)
    {
        arr[i]=a[i];
    }
    for(int i=0;i<m;i++)
    arr[n+i]=b[i];
    for(int i=0;i<m+n;i++)
    printf("%d,",arr[i]);
    return 0;
}

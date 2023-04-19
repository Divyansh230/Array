#include <stdio.h>

int main(){
    int n,m;
    printf("Enter Size of the Array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    m=a[0];
    for(int i=0;i<n;i++){
        if(m<a[i])
        m=a[i];
    }
    m++;
    int b[m];
    for(int i=0;i<m;i++)
    b[i]=0;
    for(int i=0;i<n;i++)
    b[a[i]]++;
    for(int i=0;i<=m;i++){
        if(b[i])
         printf("Frequency of %d is %d\n",i,b[i]);
    }
    return 0;
}
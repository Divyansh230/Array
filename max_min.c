#include <stdio.h>

int main(){
    int n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int  t=0;
    for(int i=0;i<n;i++){
        if(a[t]>a[i])
        t=i;
    }
    int p=0;
    for(int i=0;i<n;i++){
        if(a[p]<a[i])
        p=i;
    }
    printf("Max=%d\nMin=%d",a[p],a[t]);
    return 0;
}
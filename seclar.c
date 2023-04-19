#include <stdio.h>

int main(){
    int n;
    printf("Enter size of the Array: ");
    scanf("%d",&n);
    printf("Enter elements in the array: ");
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int t=0;
    for(int i=0;i<n;i++)
    {
        if(a[t]<a[i])
        
        t=a[i];;
    }
    
    t=0;
    for(int i=0;i<n;i++)
    {
        if(t==a[i])
        continue;
    if(a[t]<a[i])
    t=i;}
    printf("Second largest element is %d",a[t]);
    return 0;
}
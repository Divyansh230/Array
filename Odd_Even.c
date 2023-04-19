#include <stdio.h>

int main(){
    int n,e=0,o=0;
    printf("Enter Size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        if(a[i]%2==0)
        e++;
        else
        o++;
    }
    printf("Even=%d\nOdd=%d",e,o);
    return 0;
}
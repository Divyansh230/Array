#include <stdio.h>

int main(){
    int n,o=0,e=0;
    printf("Enter Size of the Array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in Array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        if(a[i]%2==0)
        e++;
        else
        o++;
    }
    int od[o],eve[e];
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        eve[x++]=a[i];
        else
        od[y++]=a[i];
    }
    printf("Odd Elements Are:\n");
    for(int i=0;i<o;i++)
    printf("%d,",od[i]);
    printf("\nEven elements Are:\n");
    for(int i=0;i<e;i++)
    printf("%d,",eve[i]);
    return 0;
}
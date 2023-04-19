#include <stdio.h>

int main(){
    int n,ele,pos,m;
    printf("Enter Size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements and Position and initialm No. of elements:");
    scanf("%d%d%d",&ele,&pos,&m);
    if(m<n){
        printf("Enter elements in Array: ");
        for(int i=0;i<m;i++)
        scanf("%d",&a[i]);
        for(int i=m-1;i>=pos;i--)
        a[i+1]=a[i];
        a[pos]=ele;
        m+=1;
        for(int i=0;i<m;i++)
        printf("%d",a[i]);
    }
    else
    printf("Insertion isn't possible");
    return 0;
}
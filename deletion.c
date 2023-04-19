#include <stdio.h>

int main(){
    int n,m;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter no. of elements in Array:");
    scanf("%d",&m);
    if(m){
        printf("Enter elements in Array: ");
        for(int i=0;i<m;i++)
        scanf("%d",&a[i]);
        printf("Enter position: ");
        int pos;
        scanf("%d",&pos);
        for(int i=pos;i<m-1;i++)
        a[i]=a[i+1];
        m-=1;
        for(int i=0;i<m;i++)
        printf("%d,",a[i]);
    }
    else
    printf("Deletion is not possible");
    return 0;
}
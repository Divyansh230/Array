#include <stdio.h>

int main(){
    int n,s;
    printf("Enter Size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter element in Array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        int f=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            f++;
        }
        if(f==1)
        s++;
    }
    int ar[s];int y=0;
    for(int i=0;i<n;i++)
    {
        int f=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j])
            f++;
        }
        if(f==1)
        ar[y++]=a[i];
    }
    for(int i=0;i<s;i++)
    printf("%d,",ar[i]);
    return 0;
}
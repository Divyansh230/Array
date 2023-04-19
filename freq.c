#include <stdio.h>

int main(){
    int n;
    printf("Enter size of the Array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        int freq=0;int x;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            freq++;
            x=i;
        }
        if(freq)
        printf("Freq of %d is %d\n ",a[i],freq);
        for(int j=x;j<n;j++)
        a[j]=a[j+1];
        n--;
    }
    return 0;
}
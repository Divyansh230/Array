#include <stdio.h>

int main(){
    int n,low=0,high;
    printf("Enter Size :");
    scanf("%d",&n);
    printf("Enter elements in the sorted manner: ");
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    high=n-1;
    int mid;
    int f=0;
    printf("Enter element to be Search: \n");
    int ele;
    scanf("%d",&ele);
    while(high>=low){
        mid=(low+high)/2;
        if(ele==a[mid])
        {
            f+=1;
            break;
        }
        else if(ele<mid)
        high=mid-1;
        else
        low=mid+1;
    }
    if(f){
        printf("Search Success ");
    }
    else
    printf("Failed");
    return 0;
}
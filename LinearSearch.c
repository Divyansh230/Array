#include <stdio.h>

int main(){
    int n,el,f=0;
    printf("Enter size of the Array: ");
    scanf("%d",&n);
    printf("Enter elements in Array: ");
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the element to be searched: ");
    scanf("%d",&el);
    for(int i=0;i<n;i++){
        if(el==a[i]){
            f+=1;
            break;
        }
    }
    if(f)
    printf("Search Successful");
    else
    printf("Searching Failed");
    return 0;
}
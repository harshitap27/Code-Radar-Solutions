#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n],arr1[n];
    for(i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    k=k%n;
    for(int i=0;i<=n-1;i++){
        arr1[(i+k)%n]=arr[i];
    }
    for(int i=0;i<=n-1;i++){
        printf("%d\n",arr1[i]);
    }
    return 0;
}
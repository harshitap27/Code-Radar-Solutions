// Your code here...
#include<stdio.h>
int main(){
    int p,b,h,a;
    scanf("%d%d%d",&p,&b,&h);
    a=p*p+b*b;
    if(h*h==a){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}
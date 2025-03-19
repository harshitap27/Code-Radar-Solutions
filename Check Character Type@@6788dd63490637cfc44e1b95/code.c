#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if (ch>='a' && ch<='z'){
        if(ch=='a'||ch=='i'||ch=='o'||ch=='e'||ch=='u'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
}
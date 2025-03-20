#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if (ch>='a' && ch<='z'||ch>='A'&&ch<=='Z'){
        if(ch=='a'||ch=='i'||ch=='o'||ch=='e'||ch=='u'||ch=='O'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else if(ch>='0'&& ch<='9'){
        printf("Digit");
            }
    else{
        printf("Special Character");
                   }
}
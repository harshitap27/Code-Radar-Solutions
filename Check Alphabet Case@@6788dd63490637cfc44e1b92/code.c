#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch - 32;  
        printf("Lowercase", ch);
    } 
    else {
        printf("Uppercase", ch);
    } 

    return 0;
}
#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    // Convert using ASCII difference
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase");
    } 
    else{
        printf("Lowercase");
    }
    } 
    else {
        printf("Not an alphabet character!\n");
    }

    return 0;
}
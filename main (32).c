#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    if(isalpha(ch)) {
        // Convert to lowercase for easier checking
        char lower = tolower(ch);
        char upper= toupper((ch));
        if((lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
        &&(upper =='A' || upper =='E' || upper =='I')) {
            printf("%c is a VOWEL\n", ch);
        } else {
            printf("%c is a CONSONANT\n", ch);
        }
    } else if(isdigit(ch)) {
        printf("%c is a DIGIT\n", ch);
    } else {
        printf("%c is a SPECIAL SYMBOL\n", ch);
    }
    
    return 0;
}
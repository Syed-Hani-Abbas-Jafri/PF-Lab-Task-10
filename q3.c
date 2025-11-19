#include <stdio.h>

int main() {
    char text[200];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, total = 0;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++) {
        char c = text[i];

        if (c != '\0')
            total++;

        if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||
            c=='a'||c=='e'||c=='i'||c=='o'||c=='u') {
            vowels++;
        }
        else if (c >= '0' && c <= '9') {
            digits++;
        }
        else if (c == ' ') {
            spaces++;
        }
        else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            consonants++;
        }
    }
    printf("Statistics:\n");
    printf("\nVowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Total Characters: %d\n", total - 1); 

    return 0;
}

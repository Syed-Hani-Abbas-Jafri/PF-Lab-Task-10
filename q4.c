#include <stdio.h>

int main() {
    char text[200], enc[200], dec[200];
    printf("Enter a message: ");
    fgets(text, 200, stdin);

    char *p=text, *e=enc, *d=dec;

    while(*p) {
        char c = *p;
        if(c >= 'a' && c <= 'z') {
            c += 3;
            if(c > 'z') c -= 26;
        } else if(c >= 'A' && c <= 'Z') {
            c += 3;
            if(c > 'Z') c -= 26;
        }
        *e = c;
        p++; e++;
    }
    *e = '\0';

    p = enc;
    while(*p) {
        char c = *p;
        if(c >= 'a' && c <= 'z') {
            c -= 3;
            if(c < 'a') c += 26;
        } else if(c >= 'A' && c <= 'Z') {
            c -= 3;
            if(c < 'A') c += 26;
        }
        *d = c;
        p++; d++;
    }
    *d = '\0';

    printf("\nOriginal : %sEncrypted: %sDecrypted: %s", text, enc, dec);
    return 0;
}

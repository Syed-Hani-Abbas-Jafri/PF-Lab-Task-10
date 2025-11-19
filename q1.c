#include <stdio.h>
#include <string.h>

int main() {
    char password[100];
    int length_ok = 0, has_upper = 0, has_digit = 0, has_special = 0;

    printf("Enter your password: ");
    scanf("%s", password);

    int len = strlen(password);
    if (len >= 8) length_ok = 1;

    for (int i = 0; i < len; i++) {
        char c = password[i];

        if (c >= 'A' && c <= 'Z')
            has_upper = 1;

        if (c >= '0' && c <= '9')
            has_digit = 1;

        if (c == '!' || c == '@' || c == '#' || c == '$' || c == '%')
            has_special = 1;
    }

    if (length_ok && has_upper && has_digit && has_special) {
        printf("Password is strong.\n");
    } else {
        printf("Password is weak.\n");
    }

    return 0;
}

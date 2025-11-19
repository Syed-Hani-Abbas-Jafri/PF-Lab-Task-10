#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    char domain[100];
    int at_index = -1;

    printf("Enter an email address: ");
    scanf("%s", email);

    int len = strlen(email);

    for (int i = 0; i < len; i++) {
        if (email[i] == '@') {
            at_index = i;
            break;
        }
    }

    if (at_index == -1) {
        printf("Email: %s  --> Domain: INVALID (no '@' found)\n", email);
        return 0;
    }

    int j = 0;
    for (int i = at_index + 1; i < len; i++) {
        domain[j++] = email[i];
    }
    domain[j] = '\0';

    printf("Email: %s  --> Domain: %s\n", email, domain);

    return 0;
}

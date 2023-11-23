#include <stdio.h>

int matchS(char *str);

int matchS(char *str) {
    if (*str == '0') {
        str++;
        if (matchS(str)) {
            if (*str == '1') {
                str++;
                return 1;
            }
        }
    } else if (*str == '\0') {
        // Empty string is also accepted
        return 1;
    }

    return 0;
}

int main() {
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    if (matchS(input)) {
        printf("String belongs to the language!\n");
    } else {
        printf("String does not belong to the language!\n");
    }

    return 0;
}


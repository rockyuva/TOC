#include <stdio.h>

int matchS(char *str);

int matchA(char *str) {
    if (*str == '0') {
        str++;
        return matchA(str);
    } else if (*str == '1') {
        str++;
        return matchA(str);
    } else {
        return 1;
    }
}

int matchS(char *str) {
    if (*str == '0') {
        str++;
        if (matchA(str)) {
            if (*str == '1') {
                str++;
                return 1;
            }
        }
    } else {
        return 0;
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


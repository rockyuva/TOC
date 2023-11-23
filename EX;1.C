#include <stdio.h>
int dfa_transition(int state, char input) {
    switch (state) {
        case 0:
            if (input == 'a') return 1;
            else return -1; 
        case 1:
            if (input == 'a') return 2;
            else return -1; 
        case 2:
            return -1; 
        default:
            return -1; 
    }
}
int simulate_dfa(const char* input) {
    int state = 0; 
    for (int i = 0; input[i] != '\0'; ++i) {
        state = dfa_transition(state, input[i]);
        if (state == -1) {
            return 0;
        }
    }
    return (state == 2);
}
int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);
    if (simulate_dfa(input)) {
        printf("String accepted!\n");
    } else {
        printf("String not accepted!\n");
    }
    return 0;
}


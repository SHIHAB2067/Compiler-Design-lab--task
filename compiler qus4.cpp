#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, valid = 1;

    printf("Enter identifier: ");
    scanf("%s", str);

    // First character check
    if(!(isalpha(str[0]) || str[0] == '_')) {
        valid = 0;
    }

    // Remaining character check
    for(i = 1; str[i] != '\0'; i++) {
        if(!(isalnum(str[i]) || str[i] == '_')) {
            valid = 0;
            break;
        }
    }

    if(valid)
        printf("Valid Identifier\n");
    else
        printf("Invalid Identifier\n");

    return 0;
}

#include <stdio.h>
#include <string.h>

int isValidIdentifier( char*  identifier) {
    if (!((identifier[0] >= 'a' && identifier[0] <= 'z') ||
          (identifier[0] >= 'A' && identifier[0] <= 'Z') ||
          identifier[0] == '_')) {
        return 0;
    }


    for (int i = 1; i < strlen(identifier); i++) {
        if (!((identifier[i] >= 'a' && identifier[i] <= 'z') ||
              (identifier[i] >= 'A' && identifier[i] <= 'Z') ||
              (identifier[i] >= '0' && identifier[i] <= '9') ||
              identifier[i] == '_')) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char identifier[50];
    printf("Enter an identifier: ");
    scanf("%s", identifier);

    if (isValidIdentifier(identifier)) {
        printf("%s is a valid identifier.\n", identifier);
    } else {
        printf("%s is not a valid identifier.\n", identifier);
    }

    return 0;
}


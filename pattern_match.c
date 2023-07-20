#include <stdio.h>
#include <string.h>

// Function to find a pattern in a string
int findPattern( char  *str,  char  *pattern) {
    int len = strlen(str);
    int patLen = strlen(pattern);

    for (int i = 0; i <= len - patLen; i++) {
        int j;
        for (j = 0; j < patLen; j++) {
            if (str[i + j] != pattern[j])
                break;
        }
        if (j == patLen)
            return i;  // Pattern found at index i
    }

    return -1;  // Pattern not found
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove trailing newline character

    int numPatterns;
    printf("Enter the number of patterns to search for: ");
    scanf("%d", &numPatterns);

    char patterns[numPatterns][100];
    getchar();  // Clear the newline character from the input buffer

    printf("Enter the patterns:\n");
    for (int i = 0; i < numPatterns; i++) {
        printf("Pattern %d: ", i + 1);
        fgets(patterns[i], sizeof(patterns[i]), stdin);
        patterns[i][strcspn(patterns[i], "\n")] = '\0';  // Remove trailing newline character
    }

    printf("Patterns found:\n");
    for (int i = 0; i < numPatterns; i++) {
        int index = findPattern(str, patterns[i]);
        if (index != -1) {
            printf("'%s' found at index %d\n", patterns[i], index);
        }
    }

    return 0;
}

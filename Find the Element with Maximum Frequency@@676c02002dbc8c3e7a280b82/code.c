#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    char str1[100], str2[100];

    do {
        printf("\n--- String Function Menu ---\n");
        printf("1. Find Length (strlen)\n");
        printf("2. Concatenate Strings (strcat)\n");
        printf("3. Copy String (strcpy)\n");
        printf("4. Compare Strings (strcmp)\n");
        printf("5. Reverse String (strrev)\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // to consume newline

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                gets(str1);
                printf("Length = %lu\n", strlen(str1));
                break;

            case 2:
                printf("Enter first string: ");
                gets(str1);
                printf("Enter second string: ");
                gets(str2);
                strcat(str1, str2);
                printf("Concatenated String = %s\n", str1);
                break;

            case 3:
                printf("Enter source string: ");
                gets(str1);
                strcpy(str2, str1);
                printf("Copied String = %s\n", str2);
                break;

            case 4:
                printf("Enter first string: ");
                gets(str1);
                printf("Enter second string: ");
                gets(str2);
                if (strcmp(str1, str2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 5:
                printf("Enter a string: ");
                gets(str1);
                printf("Reversed String = %s\n", strrev(str1)); // May not work in all compilers
                break;

            case 6:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}

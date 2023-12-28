#include <stdio.h>

int main() {
    int i, j, rows;

    // Get the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Nested loop to print the pattern
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

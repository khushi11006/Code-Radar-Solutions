#include <stdio.h>

int main() {
    int n;

    // Ask user for the size of the square
    printf("Enter the size of the square: ");
    scanf("%d", &n);

    // Loop through rows
    for (int i = 0; i < n; i++) {
        // Loop through columns
        for (int j = 0; j < n; j++) {
            // Print '*' at the border or empty spaces inside
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

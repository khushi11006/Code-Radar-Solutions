#include <stdio.h>
#include <stdbool.h>

bool isNonDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;  // Found a descending pair
        }
    }
    return true;  // All pairs are non-descending
}

int main() {
    int arr[] = {1, 2, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isNonDescending(arr, n)) {
        printf("%d\n");
    } else {
        printf("%d\n");
    }

    return 0;
}

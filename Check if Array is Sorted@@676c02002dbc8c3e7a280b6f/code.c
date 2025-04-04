#include <stdbool.h>

bool isNonDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    return isNonDescending(arr, n);  // returns 1 if sorted, 0 if not
}

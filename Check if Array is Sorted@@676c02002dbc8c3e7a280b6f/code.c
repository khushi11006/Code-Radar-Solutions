#include <stdio.h>
#include <stdbool.h>

bool isSortedAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSortedAscending(arr, n)) 
    {
        printf("%d");
    }
    else {
        printf("%d");
    }
    return 0;
}

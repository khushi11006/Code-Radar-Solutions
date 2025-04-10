#include <stdio.h>
int findFirstPeak(int arr[], int n) {
    if (n == 0) return -1;
    if (n == 1 || arr[0] >= arr[1]) return 0;

    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return i;
        }
    }

    if (arr[n - 1] >= arr[n - 2]) return n - 1;

    return -1;
}

int main() {
    int arr[] = {1, 3, 20, 4, 1, 0, 2 ,5, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int peakIndex = findFirstPeak(arr, n);
    if (peakIndex != -1) {
        printf("%d", arr[peakIndex]);
    }

    return 0;
}

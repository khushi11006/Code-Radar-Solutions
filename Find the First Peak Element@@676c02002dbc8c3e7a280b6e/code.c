#include <stdio.h>

int main() {
    int arr[] = {1, 3, 20, 4, 1, 0, 2, 5, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int peakIndex = -1;

    if (n == 1) {
        peakIndex = 0;
    } else if (arr[0] >= arr[1]) {
        peakIndex = 0;
    } else {
        for (int i = 1; i < n - 1; i++) {
            if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
                peakIndex = i;
                break;
            }
        }
        if (peakIndex == -1 && arr[n - 1] >= arr[n - 2]) {
            peakIndex = n - 1;
        }
    }

    if (peakIndex != -1) {
        printf("%d\n", arr[peakIndex]);

#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    if (n == 0) return -1;
    if (n == 1) return 0;
    if (arr[0] >= arr[1]) return 0;

    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return i;
        }
    }

    if (arr[n - 1] >= arr[n - 2]) return n - 1;

    return -1;
}

int main() {
    int arr[1000], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int peakIndex = findFirstPeak(arr, n);
    if (peakIndex != -1) {
        printf("%d\n", arr[peakIndex]);  // Or just peakIndex if required
    }

    return 0;
}

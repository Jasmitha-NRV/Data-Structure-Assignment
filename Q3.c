#include <stdio.h>

void nextGreaterElement(int arr[], int n) {
    int stack[n], top = -1;
    int result[n];

    // Initialize all to -1
    for (int i = 0; i < n; i++) result[i] = -1;

    for (int i = 0; i < n; i++) {
        while (top != -1 && arr[i] > arr[stack[top]]) {
            result[stack[top--]] = arr[i];
        }
        stack[++top] = i;
    }

    for (int i = 0; i < n; i++) {
        printf("%d -> %d\n", arr[i], result[i]);
    }
}

int main() {
    int arr[] = {4, 5, 2, 10,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    nextGreaterElement(arr, n);
    return 0;
}
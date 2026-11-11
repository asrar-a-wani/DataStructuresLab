#include <stdio.h>

int main() {
    int a[100], b[100], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Copy elements of array a into array b
    for (i = 0; i < n; i++) {
        b[i] = a[i];
    }

    printf("Copied array elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}

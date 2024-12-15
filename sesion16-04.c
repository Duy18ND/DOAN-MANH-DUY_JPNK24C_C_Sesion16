#include <stdio.h>
void result(int *arr, int size);

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    result(arr, size);

    return 0;
}
void result(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu arr[%d] = %d\n", i, *(arr + i));
    }
}

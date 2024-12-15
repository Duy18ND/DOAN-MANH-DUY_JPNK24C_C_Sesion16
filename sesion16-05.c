#include <stdio.h>
void result(int *arr, int value, int index) {
    arr[index] = value;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Mang ban dau la : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int index = 2; 
    int value = 100;     

    result(arr, value, index);

    printf("Mang sau khi cap nhap la: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


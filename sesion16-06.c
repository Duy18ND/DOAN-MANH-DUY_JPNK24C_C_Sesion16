#include <stdio.h>
int searchElement(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1; 
}

int main() {
    int arr[] = {1, 2, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int valueToFind = 7;

    int result = searchElement(arr, size, valueToFind);
    
    if (result != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d\n", valueToFind, result);
    } else {
        printf("Phan tu %d khong duoc tim thay trong mang\n", valueToFind);
    }

    return 0;
}


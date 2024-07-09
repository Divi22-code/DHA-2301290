#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};   
    int *ptr = arr;                   

    printf("Addresses of array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("Address of arr[%d]: %p\n", i, ptr + i);
    }

    return 0;
}

#include <stdio.h>

void read_arr(int arr[], int size) {
    for (int i = 0; i < size; i++)
        scanf("%d", & arr[i]);
}
void print_arr(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}
void print_odd(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 1)
            printf("%d ", arr[i]);
    }
}
int main() {
    // array declaration
    int arr[10], arr_size;
    printf("Enter the number of elements\n");
    scanf("%d", & arr_size);
    printf("Enter the array elements: ");
    read_arr(arr, arr_size);
    printf("\nThe array elements are \n");
    print_arr(arr, arr_size);
    printf("\nThe odd elements are\n");
    print_odd(arr, arr_size);
}
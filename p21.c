#include <stdio.h>

void read_arr(int arr[], int size) {
    for (int i = 0; i < size; i++)
        scanf("%d", & arr[i]);
}
void search(int arr[], int size) {
    int flag1 = 0, key;
    int f, l;
    printf("Enter key: ");
    scanf("%d", & key);
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            if (flag1 == 0) {
                flag1++;
                f = i;
                l = i;
            } else {
                l = i;
            }
        }
    }
    if (flag1 == 1) {
        printf("Search successful\n");
        printf("The first occurenece of the key at %d\n", f);
        printf("The last occurence of key at %d\n", l);
    } else
        printf("Search failure\n");
}
void main() {
    int arr[20], size;
    printf("Enter the size of array: ");
    scanf("%d", & size);
    printf("Enter elements: ");
    read_arr(arr, size);
    search(arr, size);
}
#include <stdio.h>
// ham hoan doi gia tri
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
// ham sap xep chon (selection sort)
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx =i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
       // hoan doi phan tu nho nhat voi phan tu dau tien chua duoc sap xep
        if (min_idx != i) {
            swap(&arr[min_idx], &arr[i]);
        }
    }
}
// ham in mang
void printArray(int arr[], int size) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n;
    int arr[1000];
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    if (n <= 0 || n >= 1000) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }
    printf("Nhap %d phan tu cua mang:\n ", n);
    for (int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    printf("before:");
    printArray(arr, n);
    selectionSort(arr, n);
    printf("after:");
    printArray(arr, n);
    return 0;
}
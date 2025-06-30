#include<stdio.h>
// ham sap xep chen
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        // di chuyen cac phan tu lon hon key ve sau
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j-- ;
        }
        arr[j + 1] = key;
    }
}
// ham in mang
void printArray(int arr[], int n) {
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
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("before:");
    printArray(arr, n);
    insertionSort(arr, n);
    printf("after:");
    printArray(arr, n);
    return 0;
}
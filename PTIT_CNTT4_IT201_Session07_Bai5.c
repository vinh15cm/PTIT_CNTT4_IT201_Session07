#include <stdio.h>
// ham hoan doi 2 phan tu
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
// ham chia mang va tra ve chi so pivot
int partition(int arr[], int left, int right) {
    int pivot = arr[right]; // chon phan tu cuoi lam pivot
    int i = left -1;
    for (int j = left; j< right;j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1],&arr[right]);
    return i+1;
}
// ham quicksrt dequy
void quickSort(int arr[], int left, int right) {
    if (left<right) {
        int pi = partition(arr,left,right);
        quickSort(arr, left, pi-1);
        quickSort(arr, pi+1, right);
    }
}
// ham in mang
void inMang(int arr[],int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d",arr[i]);
        if (i< n-1) printf(",");
    }
    printf("]\n");
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
    inMang(arr, n);
    quickSort(arr, 0, n-1);
    printf("after:");
    inMang(arr, n);
    return 0;
}
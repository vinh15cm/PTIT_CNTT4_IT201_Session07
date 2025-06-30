#include <stdio.h>
void merge(int arr[],int left, int mid, int right) {
    int n1 = mid -left +1;
    int n2 = right - mid;
    // mang tam
    int L[n1], R[n2];
    // sao chep du lieu
    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }
    // tron 2 mang
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }
    // sao chep phan con lai
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}
// ham in mang
void inMang(int arr[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(",");
    }
    printf("]\n");
}
int main() {
    int n;
    int arr[1000];
    printf("nhap so luong phan tu:");
    scanf("%d",&n);
    // kiem tra dau vao
    if (n <= 0 || n >= 1000) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }
    printf("nhap %d phan tu cua mang:\n",n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("before:");
    inMang(arr, n);
    mergeSort(arr, 0, n - 1);
    printf("after:");
    inMang(arr, n);
    return 0;
}
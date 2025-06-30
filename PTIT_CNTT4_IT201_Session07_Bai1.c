#include<stdio.h>
void bubbleSort(int arr[], int n){
for(int i = 0; i < n-1; i++){
int swapped =0;
for(int j = 0; j < n-1-i; j++){
if(arr[j] > arr[j+1]){
// hoan doi
int temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;
swapped = 1;
}
}
if(!swapped) break;
}
}
void printArray(int arr[], int n){
for(int i = 0; i < n; i++){
printf("%d ", arr[i]);
}
printf("\n");
}
int main(){
int n;
printf("Nhap so phan tu: ");
scanf("%d", &n);
if(n <=0 || n >= 1000){
printf("So phan tu khong hop le.\n");
return 1;
}
int arr[1000];
printf("Nhap %d phan tu cua mang:\n ",n);
for(int i = 0; i < n; i++){
scanf("%d", &arr[i]);
}
printf("before:");
printArray(arr, n);
bubbleSort(arr, n);
printf("after:");
printArray(arr, n);
return 0;
}
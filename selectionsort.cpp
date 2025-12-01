#include<stdio.h>

void selectionsort(int *, int);
void printarray(int *, int);

int main(){
    int array[] = {5, 15, 56, 78, 89, 45, 56};
    int len = sizeof(array) / sizeof(array[0]);
    selectionsort(array, len);
    printarray(array, len);
    return 0;
}

void selectionsort(int *arr, int len){
    for(int i = 0; i < len - 1; i++){
        int min_index = i;
        for(int j = i + 1; j < len; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

void printarray(int *arr, int len){
    for(int i = 0; i < len; i++){
        printf("%d ", arr[i]);
    }
}
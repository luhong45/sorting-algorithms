#include<stdio.h>

void bubblesort(int *, int);
void printarray(int *, int);

int main(){
    int array[] = {3, 5, 8, 10, 2, 15, 1};
    int len = sizeof(array) / sizeof(array[0]);
    bubblesort(array, len);
    printarray(array, len);
    return 0;
}

void bubblesort(int *arr, int len){
    for(int i = 0; i < len - 1; i++){
        for(int j = 0; j < len - 1 - i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printarray(int *arr, int len){
    for(int i = 0; i < len; i++){
        printf("%d ", arr[i]);
    }
}
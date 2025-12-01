#include<stdio.h>

void insertionsort(int *, int);
void printarray(int *, int);

int main(){
    int array[] = {2, 15, 9, 8, 25, 86, 78};
    int len = sizeof(array) / sizeof(array[0]);
    insertionsort(array, len);
    printarray(array, len);
    return 0;
}

void insertionsort(int *arr, int len){
    int i, j, key;
    for(int i = 1; i < len; i++){
        key = arr[i];
        j = i - 1;
        while(j >=0 && key < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void printarray(int *arr, int len){
    for(int i = 0; i < len; i++){
        printf("%d ", arr[i]);
    }
}
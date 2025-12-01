#include<stdio.h>

void quicksort(int *, int, int);
int partition(int *, int, int);
void swap(int *, int *);
void printarray(int *, int);

int main(){
    int array[] = {5, 8, 97, 88, 20, 56};
    int len = sizeof(array) / sizeof(array[0]);
    quicksort(array, 0, len - 1);
    printarray(array, len);
    return 0;
}

void quicksort(int *arr, int left, int right){
    if(left < right){
        int p;
        p = partition(arr, left, right);
        quicksort(arr, left, p - 1);
        quicksort(arr, p + 1, right);
    }
}

int partition(int *arr, int left, int right){
    int i, j, p;
    i = left;
    j = right;
    p = arr[right];
    while(i < j){
        while(i < right && arr[i] < p){
            i++;
        }
        while(j > left && arr[j] > p){
            j--;
        }
        if(i < j){
            swap(&arr[i], &arr[j]);
        }
    }
    if(arr[i] > p){ //i是交換完後第一個可能 >pivot 的位置
        swap(&arr[i], &arr[right]);
    }
    return i;
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void printarray(int *arr, int len){
    for(int i = 0; i < len; i++){
        printf("%d ", arr[i]);
    }
}
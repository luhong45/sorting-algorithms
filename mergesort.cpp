#include<stdio.h>

void mergesort(int *, int *, int, int);
void printarray(int *, int);

int main(){
    int array[] = {5, 8, 9, 12, 45, 15, 23};
    int len = sizeof(array) / sizeof(array[0]);
    int reg[len] = {0};
    mergesort(array, reg, 0, len - 1);
    printarray(array, len);
    return 0;
}

void mergesort(int *arr, int *reg, int front, int end){
    int mid;
    if(front < end){
        mid = front + (end - front) / 2; //prevent overflow
        //divide
        mergesort(arr, reg, front, mid);
        mergesort(arr, reg, mid + 1, end);

        //merge
        int left = front;
        int right = mid + 1;
        for(int i = front; i <= end; i++){
            if(left == mid + 1){
                reg[i] = arr[right++];
            }else if(right == end + 1){
                reg[i] = arr[left++];

            }else if(arr[left] < arr[right]){
                reg[i] = arr[left++];
            }else{
                reg[i] = arr[right++];
            }
        }
        for(int i = front; i <=end; i++){
            arr[i] = reg[i];
        }
    }
}

void printarray(int *arr, int len){
    for(int i = 0; i < len; i++){
        printf("%d ", arr[i]);
    }
}
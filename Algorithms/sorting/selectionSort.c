#include <stdio.h>
int selectionSort(int arr[], int n){
    int min, temp = 0;
    for(int i = 0; i < n - 1; i++){
        min = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min]){
                j = min;
            }
        }
        //Swap
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    //Prinitng Array
    for (int i = 0; i <= n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int A[] = {64, 25, 12, 22, 11};
    selectionSort(A, 5);
}
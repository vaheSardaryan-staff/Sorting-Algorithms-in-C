#include <stdio.h>
#include <stdlib.h>
#include "header.h"

// Swap function
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Print function for array
void print(int *arr, int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// InsertionSort
void InsertionSort(int *arr, int n){
    for (int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

// Recursive InsertionSort
void InsertionSortRecursive(int *arr, int n){
    if (n <= 1) return;

    InsertionSortRecursive(arr, n - 1);
    int temp = arr[n-1];
    int j = n - 2;
    while (j >= 0 && arr[j] > temp){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = temp;
}

// BubbleSort
void BubbleSort(int *arr, int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - 1 - i; j++){
            if (arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

// Recursive BubbleSort
void BubbleSortRecursive(int *arr, int n){
    if (n <= 1) return;

    int count = 0;
    for (int i = 0; i < n - 1; i++){
        if (arr[i] > arr[i+1]){
            swap (&arr[i], &arr[i+1]);
            count++;
        }
    }

    if (count == 0) return;

    BubbleSortRecursive(arr, n - 1);
}

// SelectionSort
void SelectionSort(int *arr, int n){
    for (int i = 0; i < n - 1; i++){
        int min = i;
        for (int j = i + 1; j < n; j++){
            if (arr[j] < arr[min]) min = j;
        }
        swap (&arr[i], &arr[min]);
    }
}

// Recursive SelectionSort
void SelectionSortRecursive(int *arr, int n){
    if (n <= 1) return;

    int min = 0;
    for (int i = 1; i < n; i++){
        if (arr[i] < arr[min]) {
            min = i;
        }
    }

    swap(&arr[0], &arr[min]);

    SelectionSortRecursive(arr + 1, n - 1);
}

// QuickSort
int split(int *arr, int from, int to){
    int pivot = arr[to];
    int index = from - 1;

    for (int i = from; i < to; i++){
        if (arr[i] < pivot){
            index++;
            swap(&arr[i], &arr[index]);
        }
    }

    swap(&arr[index+1], &arr[to]);
    return index + 1;
}

void QuickSort(int *arr, int from, int to){
    if (from < to){
        int index = split (arr, from, to);

        QuickSort(arr, from, index-1);
        QuickSort(arr, index+1, to);
    }
}

//HeapSort
void make_heap(int *arr, int n, int i){
    while(1){
        int max = i;
        int child1 = i * 2 + 1;
        int child2 = i * 2 + 2;

        if (child1 < n && arr[child1] > arr[max]) max = child1;
        if (child2 < n && arr[child2] > arr[max]) max = child2;

        if (max == i) break;

        swap(&arr[max], &arr[i]);

        i = max;
    }
}

void HeapSort(int *arr, int n){
    for (int i = n / 2 - 1; i >= 0; i--) make_heap(arr, n, i);

    for (int i = n - 1; i > 0; i--){
        swap(&arr[0], &arr[i]);

        make_heap(arr, i, 0);
    }
}

// ShakerSort
void ShakerSort(int *arr, int n){
    int left = 0, right = n-1;
    int swapped = 1;

    while (left < right && swapped){
        swapped = 0;
        for (int i = left; i < right; i++){
            if (arr[i] > arr[i+1]){
                swap(&arr[i], &arr[i+1]);
                swapped = 1;
            }
        }
        right--;

        for (int i = right; i > left; i--){
            if (arr[i] < arr[i-1]){
                swap(&arr[i], &arr[i-1]);
                swapped = 1;
            }
        }
        left++;
    }
}

// ShellSort
void ShellSort(int *arr, int n){
    for (int gap = n / 2; gap > 0; gap /= 2){
        for (int i = gap; i < n; i++){
            int temp = arr[i];
            int j = i;
            
            while (j >= gap && arr[j-gap] > temp){
                arr[j] = arr[j-gap];
                j -= gap;
            }
            arr[j] = temp;
        }
    }
}

// MergeSort
void merge(int *arr, int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    int *arrL = (int *)malloc(n1 * sizeof(int));
    int *arrR = (int *)malloc(n2 * sizeof(int));

    if (arrL == NULL || arrR == NULL) {
        printf("Allocation failure");
        exit(1);
    }

    for (int i = 0; i < n1; i++) arrL[i] = arr[left + i];
    for (int j = 0; j < n2; j++) arrR[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2){
        if (arrL[i] <= arrR[j]){
            arr[k] = arrL[i];
            i++;
        }
        else{
            arr[k] = arrR[j];
            j++;
        }
        k++;
    }
    
    while (i < n1){
        arr[k] = arrL[i];
        i++;
        k++;
    }
    while (j < n2){
        arr[k] = arrR[j];
        j++;
        k++;
    }

    free(arrL);
    free(arrR);
}

void MergeSort(int *arr, int left, int right){
    if (left < right){
        int mid = left + (right-left) / 2;

        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}
#include <stdio.h>
#include "header.h"

void quick_sort_wrapper(int *arr, int len) {
    QuickSort(arr, 0, len - 1);
}
void merge_sort_wrapper(int *arr, int len) {
    MergeSort(arr, 0, len - 1);
}

void printAlgorithm(void (*sort)(int[], int), const char* name) {
    printf("%s:\n", name);

    int testArray[] = {5, -1, 3, 0, 5, -10, 100, 0};
    int length = sizeof(testArray) / sizeof(testArray[0]);

    printf("Before Sorting: ");
    print(testArray, length);

    sort(testArray, length);

    printf("After Sorting: ");
    print(testArray, length);

    printf("\n");
}

int main() {

    printAlgorithm(InsertionSort, "Insertion Sort");
    printAlgorithm(InsertionSortRecursive, "Insertion Sort - Recursive");
    printAlgorithm(BubbleSort, "Bubble Sort");
    printAlgorithm(BubbleSortRecursive, "Bubble Sort - Recursive");
    printAlgorithm(SelectionSort, "Selection Sort");
    printAlgorithm(SelectionSortRecursive, "Selection Sort - Recursive");
    printAlgorithm(quick_sort_wrapper, "Quick Sort");
    printAlgorithm(HeapSort, "Heap Sort");
    printAlgorithm(ShakerSort, "Shaker Sort");
    printAlgorithm(ShellSort, "Shell Sort");
    printAlgorithm(merge_sort_wrapper, "Merge Sort");
    
    return 0;
}

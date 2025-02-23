#ifndef HEADER_H
#define HEADER_H

void swap(int *x, int *y);
void print(int *arr, int n);

void InsertionSort(int *arr, int n);
void InsertionSortRecursive(int *arr, int n);
void BubbleSort(int *arr, int n);
void BubbleSortRecursive(int *arr, int n);
void SelectionSort(int *arr, int n);
void SelectionSortRecursive(int *arr, int n);
int split(int *arr, int from, int to);
void QuickSort(int *arr, int from, int to);
void make_heap(int *arr, int n, int i);
void HeapSort(int *arr, int n);
void ShakerSort(int *arr, int n);
void ShellSort(int *arr, int n);
void merge(int *arr, int left, int mid, int right);
void MergeSort(int *arr, int left, int right);

#endif
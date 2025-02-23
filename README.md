# Sorting Algorithms in C

This repository contains implementations of various **sorting algorithms** written in **C**. 
Each algorithm is implemented efficiently and follows standard sorting techniques.

## 🔹 Implemented Sorting Algorithms

### **Insertion Sort**
- **Best Case:** O(n) | **Average Case:** O(n²) | **Worst Case:** O(n²)
- **Space Complexity:** O(1)
- Builds the sorted list one element at a time by comparing and inserting.

### **Bubble Sort**
- **Best Case:** O(n) | **Average Case:** O(n²) | **Worst Case:** O(n²)
- **Space Complexity:** O(1)
- Repeatedly swaps adjacent elements if they are in the wrong order.

### **Selection Sort**
- **Best Case:** O(n²) | **Average Case:** O(n²) | **Worst Case:** O(n²)
- **Space Complexity:** O(1)
- Finds the minimum element and places it at the beginning.

### **Quick Sort**
- **Best Case:** O(n log n) | **Average Case:** O(n log n) | **Worst Case:** O(n²)
- **Space Complexity:** O(log n) (recursive calls)
- Uses a pivot to partition the array into two halves and recursively sorts them.

### **Merge Sort**
- **Best Case:** O(n log n) | **Average Case:** O(n log n) | **Worst Case:** O(n log n)
- **Space Complexity:** O(n)
- Divides the array into halves, sorts them recursively, and merges them.

### **Heap Sort**
- **Best Case:** O(n log n) | **Average Case:** O(n log n) | **Worst Case:** O(n log n)
- **Space Complexity:** O(1)
- Converts the array into a heap and repeatedly extracts the maximum element.

### **Shell Sort**
- **Best Case:** O(n log n) | **Average Case:** O(n log² n) | **Worst Case:** O(n²)
- **Space Complexity:** O(1)
- Improves insertion sort by comparing elements far apart.

### **Shaker Sort (Cocktail Sort)**
- **Best Case:** O(n) | **Average Case:** O(n²) | **Worst Case:** O(n²)
- **Space Complexity:** O(1)
- A bidirectional version of Bubble Sort.

## 🚀 Compilation and Running the Program

### **1️⃣ Compile the Code**

Use **GCC** to compile the source files:

```sh
gcc main.c sorts.c -o sorting
```

### **2️⃣ Run the Program**

```sh
./sorting
```

## 📌 Expected Output
When you run the program, you should see output similar to this:

```
Original Array: 5 -1 3 0 5 -10 100 0

Insertion Sort:
Before Sorting: 5 -1 3 0 5 -10 100 0
After Sorting: -10 -1 0 0 3 5 5 100

Insertion Sort - Recursive:
Before Sorting: 5 -1 3 0 5 -10 100 0
After Sorting: -10 -1 0 0 3 5 5 100

Bubble Sort:
Before Sorting: 5 -1 3 0 5 -10 100 0
After Sorting: -10 -1 0 0 3 5 5 100

Bubble Sort - Recursive:
Before Sorting: 5 -1 3 0 5 -10 100 0
After Sorting: -10 -1 0 0 3 5 5 100

Selection Sort:
Before Sorting: 5 -1 3 0 5 -10 100 0
After Sorting: -10 -1 0 0 3 5 5 100

Selection Sort - Recursive:
Before Sorting: 5 -1 3 0 5 -10 100 0
After Sorting: -10 -1 0 0 3 5 5 100

Quick Sort:
Before Sorting: 5 -1 3 0 5 -10 100 0
After Sorting: -10 -1 0 0 3 5 5 100

Heap Sort:
Before Sorting: 5 -1 3 0 5 -10 100 0
After Sorting: -10 -1 0 0 3 5 5 100

Shaker Sort:
Before Sorting: 5 -1 3 0 5 -10 100 0
After Sorting: -10 -1 0 0 3 5 5 100

Shell Sort:
Before Sorting: 5 -1 3 0 5 -10 100 0
After Sorting: -10 -1 0 0 3 5 5 100

Merge Sort:
Before Sorting: 5 -1 3 0 5 -10 100 0
After Sorting: -10 -1 0 0 3 5 5 100
```


#ifndef __SORTING_H
#define __SORTING_H

// Function to sort integers a and b
// called by reference to see changes
void swap_int(int *a, int *b);

// Function to print the array given its length
void print_intarray(int * array, int length);


// Function to swap using quick sort
void sort_quick(int *array, int size);

// Function to sort using merge sort
void sort_merge(int *array, int size);

// Function to sort using insertion sort
void sort_insertion(int *array, int size);

// Function to sort using selection sort
void sort_selection(int *array, int size);

// Function to sort using bubble sort
void sort_bubble(int *array, int size);


void swap(int *xp, int *yp);
  
void selectionSort(int arr[], int n);
/* Function to print an array */
void printArray(int arr[], int size);

#endif // __SORTING_H
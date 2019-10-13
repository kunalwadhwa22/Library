#include "sorting.h"
#include "stdio.h"

static void quick_sort_algo(int *array, int left, int right);
static void merge_sort_algo(int *array, int start, int end);
static void merge(int *array, int start, int mid, int end);

// replace swap with swap_int here
#define swap swap_int

void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void print_intarray(int * array, int length)
{
    for(int i = 0; i<length; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}

void sort_quick(int *array, int size)
{
    quick_sort_algo(array, 0, size - 1);
}

static void quick_sort_algo(int *array, int left, int right)
{
    int i = left;
    int j = right;
    int pivot = array[(left+right)/2];
    while(i<=j)
    {
        while(array[i] < pivot) i++;
        while(array[j] > pivot) j--;
        if(i <= j)
        {
            swap_int(&array[i], &array[j]);
            i++; j--;
        }
        if(left < j)
            quick_sort_algo(array,left,j);
        if(i < right)
            quick_sort_algo(array,i,right);
    }
}

void sort_merge(int *array, int size)
{
    merge_sort_algo(array, 0, size - 1);
}

static void merge_sort_algo(int *array, int start, int end)
{
    if(start < end)
    {
        int mid = (start + end)/2;
        merge_sort_algo(array, start, mid);
        merge_sort_algo(array, mid+1, end);
        merge(array, start, mid, end);
    }
}

static void merge(int *array, int start, int mid, int end)
{
    int temp[end - start + 1];
    int i = start;
    int j = mid + 1;
    int k = 0;
    while(i <= mid && j <= end)
    {
        if(array[i] <= array[j])
        {
            temp[k] = array[i];
            k++; i++;
        }
        else
        {
            temp[k] = array[j];
            k++; j++;
        }
    }

    while(i <= mid)
    {
        temp[k] = array[i];
        k++; i++;
    }
    while (j <=end)
    {
        temp[k] = array[j];
        k++; j++;
    }

    for(i = start; i<=end; i++)
    {
        array[i] = temp[i - start];
    }
}

void sort_insertion(int *array, int size)
{
    int i,j;
    for(i = 1; i < size; i++)
    {
        j = i;
        while(j > 0 && (array[j-1] > array[j]))
        {
            swap_int(&array[j], &array[j-1]);
            j--;
        }
    }
}

void sort_selection(int *array, int size)
{
    int i,j,min;
    print_intarray(array,size);
    for(i = 0; i < size - 1 ; i++)
    {
        min = i;
        for(j = i + 1; j < size; j++)
        {
            if(array[j] < array[min])
            {
                min = j;
            }
        } 
        swap_int(&array[i], &array[min]);
        printf("****\n");
    }
    print_intarray(array,size);
}

void sort_bubble(int *array, int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = i+1; j< size; j++)
        {
            if(array[i] > array[j])
            {
                swap_int(&array[i], &array[j]);
            }
        }
    }
}

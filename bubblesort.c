#include <stdio.h> 

typedef unsigned bool;
#define TRUE 1
#define FALSE 0
  
void swap(int *xp, int *yp) 
{ 
  printf("Swapping %d and %d\n", *xp, *yp);
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{
  int i = 0;
  bool unsorted = TRUE;

  while (unsorted)
  {
    unsorted = FALSE;
    
    for (i = 0; i < n - 1; i++)
    {
      if (arr[i] > arr[i+1])
      {
        swap(&arr[i], &arr[i+1]);
        unsorted = TRUE;
      }
    }
  }
}
  
/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  
// Driver program to test above functions 
int main() 
{ 
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    bubbleSort(arr, n); 
    printf("Sorted array: \n"); 
    printArray(arr, n); 
    return 0; 
} 

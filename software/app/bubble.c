// C program for implementation of Bubble sort
#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)

        // Last i elements are already in place
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int arr[] = {64, 34, 25, 12, 22, 11, 90};

char teste[5] = {'a','e','i','o','u'};


// Driver program to test above functions
int main()
{
    printf("teste: %s \n", teste);
    printf("bubbleSort: %d \n", &bubbleSort - 1033742184);

    int endereco = random() % 68;
    printf("arr: %d \n", arr);
    int * ptr = arr;
    *ptr = 65;
    printf("ptr: %d \n", ptr);
    printf("&(*ptr): %d \n", &(*ptr));

    int * ptr6 = &arr[6];
    *ptr6 = 65;
    printf("ptr6: %d \n", ptr6);
    printf("*ptr6: %d \n", *ptr6);


    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
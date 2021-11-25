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

int arr_size = 20;
int arr[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};


void sabotador(int *aux, int depth){
    int i;
    int random_depth = random() % depth; // Seleciona um valor entre 0 a N
    int random_bit = random() % 32;
    int random_adress = (int)(aux)+random_depth*4;

    printf("RandomAdress(%d): %08x, RandomBit:%d\n", random_depth, random_adress, random_bit);
    printf("FirstAddress: %08x, depth:%d\n", aux, depth);

    for(i=0;i<depth;i++){
        if(i==random_depth){
            printf("i:%2d *adr:%08x: %08x \tdec(%d){Original}\n", i, aux, *aux, *aux);
            *aux ^= 1UL << random_bit;
        }
        printf("i:%2d *adr:%08x: %08x \tdec(%d)\n", i, aux, *aux, *aux); 
        aux++;
    }

}


// bist_check_s1()
//      print(falha detectada em s1)

// bist_check_s2()
//      print(falha detectada em s2)

// bist_check_s3()
//      print(falha detectada em s3)

// bist_check_s4()
//      print(falha detectada em s4)


int main()
{
    // bist_check_s1()
    // bubbleSort()

    // bist_check_s1()
    // random() % 1? sabotador(&bubbleSort): sabotador(Arr);
    // bubbleSort()

    // bist_check_s1()
    // random() % 1? sabotador(&bubbleSort): sabotador(Arr);
    // bist_check_s2()
    // bubbleSort()

    // bist_check_s1()
    // random() % 1? sabotador(&bubbleSort): sabotador(Arr);
    // bist_check_s2()
    // bist_check_s3()
    // bubbleSort()

    // bist_check_s1()
    // random() % 1? sabotador(&bubbleSort): sabotador(Arr);
    // bist_check_s2()
    // bist_check_s3()
    // bist_check_s4()
    // bubbleSort()

    // return 0

    // Set random seed
    srand(42); //srand(time(NULL)); 

    printf("\nbubbleSort adress: %08x \n", &bubbleSort);
    printf("arr adress: %08x \n", arr);
    //sabotador(&bubbleSort, (int)((0x400002cc-(int)&bubbleSort)/4));
    sabotador(arr, arr_size);
    

    bubbleSort(arr, arr_size);
    printf("\nSorted array: \n");
    printArray(arr, arr_size);
    return 0;
}
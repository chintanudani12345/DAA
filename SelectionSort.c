
#include <stdio.h>
#include <conio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int step, i;
void selectionSort(int array[], int size)
{
    for (step = 0; step < size - 1; step++)
    {
        int min_idx = step;
        for (i = step + 1; i < size; i++)
        {

            if (array[i] < array[min_idx])
                min_idx = i;
        }

        swap(&array[min_idx], &array[step]);
    }
}

void printArray(int array[], int size)
{
    for (i = 0; i < size; ++i)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}


int main()
{

    int no, i;
    printf("Enter the desired array length\n");
    scanf("%d", &no);
    int data[no];
    for (i = 0; i < no; i++)
    {
        scanf("%d", &data[i]);
    }

    int size = sizeof(data) / sizeof(data[0]);
    selectionSort(data, size);
    printf("Sorted array in Acsending Order:\n");
    printArray(data, size);
    return 0;
}
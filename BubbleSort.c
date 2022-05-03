// Bubble sort in C

#include <stdio.h>
#include <conio.h>

int i, step;
void bubbleSort(int array[], int size)
{

    for (step = 0; step < size - 1; ++step)
    {

        for (i = 0; i < size - step - 1; ++i)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

// print array
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

    bubbleSort(data, size);

    printf("Sorted Array in Ascending Order:\n");
    printArray(data, size);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int i;
void printArray(int array[], int n)
{
    for (i = 0; i < n; i++)
    {
        printf("%d, ", array[i]);
    }
}

void insertion(int array[], int n)
{
    int i, j;
    int key;
    for (j = 1; j <= n; j++)
    {
        key = array[j];
        i = j - 1;
        while (i >= 0 && array[i] > key)
        {
            array[i + 1] = array[i];
            i = i - 1;
            array[i + 1] = key;
        }
    }
    printArray(array, n);
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

    insertion(data, no);
    return 0;
}
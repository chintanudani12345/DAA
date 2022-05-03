#include <stdio.h>
#include <conio.h>
int binarySearch(int array[], int x, int low, int high)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == x)
            return mid;

        if (array[mid] > x)
            return binarySearch(array, x, low, mid - 1);

        return binarySearch(array, x, mid + 1, high);
    }

    return -1;
}

int main(void)
{
    int no, i, x;
    printf("Enter the desired array length\n");
    scanf("%d", &no);
    int data[no];

    for (i = 0; i < no; i++)
    {
        scanf("%d", &data[i]);
    }
    int n = sizeof(data) / sizeof(data[0]);
    printf("Enter the desired no \n");
    scanf("%d", &x);
    int result = binarySearch(data, x, 0, n - 1);
    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);
}
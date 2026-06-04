



#include <stdio.h>

void cubeElements(int *ptr, int size)
{
    int i;

    printf("\nCubes of all elements:\n");

    for (i = 0; i < size * size; i++)
    {
        printf("%d ", (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i)));

        if ((i + 1) % size == 0)
        {
            printf("\n");
        }
    }
}

int main()
{
    int size;
    
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size][size];

    printf("\nEnter array elements:\n");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    cubeElements(&arr[0][0], size);

    return 0;
}
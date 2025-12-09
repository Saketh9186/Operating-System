#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i;

    printf("Array elements and their memory addresses:\n\n");

    for(i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d \t Address = %p\n", i, arr[i], (void*)&arr[i]);
    }

    system("pause");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int *ptr, n, i, sum = 0;

    printf("Enter number of Elements: \n");
    scanf("\n%d", &n);

    /*allocating memory dynamically*/

    ptr=(int*)malloc(n*sizeof(int));

    if (ptr == NULL)
    {
        printf("Error!\n");
        return 0;
    }

    printf("Enter array values: \n");

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", ptr+i);
        sum = sum + *(ptr + i);
    }

    //int length = sizeof(ptr)/sizeof(ptr[0]);

    printf("\nRepeated elements : \n");
    for (int i = 0; i < n; ++i)
    {
        for (int j = i+1; j < n; ++j)
        {
            if (ptr[i] == ptr[j])
            {
                printf("%d\n", ptr[j]);
            }
        }
    }
    free(ptr);

    return 0;
}
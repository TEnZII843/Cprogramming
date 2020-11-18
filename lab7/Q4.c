#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a [8] = {1,2,3,4,5,6,7,8};
	printf("Before swap: \n");
	for (int i = 0; i < 8 ;++i){
		printf("%d", a[i]);
	}
	int n = 8;
	printf("\nAfter swap: \n");
	for(int i = 0; i < n; i++) 
    {
        for(int j = i + 1; j < n; j++) 
        {
            // If current element is even
            // then swap it with odd
            if (a[i] >= 0 && a[j] >= 0 && a[i] % 2 == 0 && a[j] % 2 != 0){
                // Perform Swap
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
                // Change the sign
                a[j] = -a[j];
                break;
            }
            // If current element is odd
            // then swap it with even
            else if (a[i] >= 0 && a[j] >= 0 && a[i] % 2 != 0 && a[j] % 2 == 0){
                // Perform Swap
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
                // Change the sign
                a[j] = -a[j];
                break;
            }
        }
    }
    // Marked element positive
    for(int i = 0; i < n; i++){
        a[i] = abs(a[i]);
    }
 
    // Print final array
    for(int i = 0; i < n; i++){
         printf("%d",a[i]);
    }  
}       

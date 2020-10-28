#include <stdio.h> 

int largest(int arr[3][5][5],int n) 
{ 
    int i,j,k; 
     
    // Initialize maximum element 
    int max = arr[0][0][0]; 
  
    // Traverse array elements from second and 
    // compare every element with current max   
    for (i = 0; i < 3; i++){
        for(j = 0; j < 5; j++ ){ 
            for (k = 0; k < 5; ++k){
                if (arr[i][j][k] > max) 
                max = arr[i][j][k];
              //  printf("arr[%d][%d][%d] = %d \n",i,j,k,arr[i][j][k] );
            } 
        }
    }
  
    return max; 
} 
  
int main() 
{ 
    int arr[3][5][5] = {
                {102, 34, 75, 0, 88,
                110, 24, 5, 9, 8,
                150, 32, 5, 0, 10088,
                106, 3, 4, 9, 968,
                107, 2, 5, 0, 98},
                
                {102, 34, 75, 0, 88,
                110, 24, 5, 9, 8,
                150, 32, 5, 0, 10088,
                106, 3, 4, 9, 968,
                107, 2, 5, 0, 98},
                

                {102, 34, 75, 0, 88,
                110, 24, 5, 9, 8,
                150, 32, 5, 0, 100000,
                106, 3, 4, 9, 968,
                107, 2, 5, 0, 98}
                };

    //largest(arr);           
    int n = sizeof(arr)/sizeof(arr[0][0][0]); 
    printf("Largest in given array is %d", largest(arr, n)); 
    return 0; 
} 
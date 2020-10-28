#include<stdio.h> 
//<---------Insertion------------>
int insertion(){
   int array[100], position, c, n, value;
   printf("Enter number of elements in array: ");
   scanf("%d", &n);
 
   printf("Enter %d elements :\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
 
   printf("Enter the location where you wish to insert an element :");
   scanf("%d", &position);
 
   printf("Enter the value to insert : ");
   scanf("%d", &value);
 
   for (c = n - 1; c >= position - 1; c--)
      array[c+1] = array[c];
 
   array[position-1] = value;
 
   printf("Resultant array is\n");
 
   for (c = 0; c <= n; c++)
      printf("%d\n", array[c]);
 
   return 0;
}
//<---------Deletion------------>
int Deletion(){
   int array[100], position, c, n;

   printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);

   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

   printf("Enter the location where you wish to delete element\n");
   scanf("%d", &position);

   if (position >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (c = position - 1; c < n - 1; c++)
         array[c] = array[c+1];

      printf("Resultant array:\n");

      for (c = 0; c < n - 1; c++)
         printf("%d\n", array[c]);
   }

   return 0;
}
//<---------Sum of even and odd number------->
int sum(){
	int array[100], i, num, even_sum, odd_sum;
        printf("Enter the size of an array : ");
 
        scanf("%d", &num);
        printf("Enter the elements of the array : ");
 
        for (i = 0; i < num; i++) 
        {
            scanf("%d", &array[i]);
        }
        for (i = 0; i < num; i++) 
        {
            if (array[i] % 2 == 0) 
            {
                even_sum = even_sum + array[i];
            }
        }
 		printf("The even sum is %d .", even_sum );

        for (i = 0; i < num; i++) 
        {
            if (array[i] % 2 != 0) 
            {
                odd_sum = odd_sum + array[i];
            }
        }
        printf("The odd sum is %d .", odd_sum );
}

//<-----------Concat---------->
int concat(){
	int aSize, bSize, mSize, i, j;
	int a[10], b[10], Merged[20];
  
 	printf("\nPlease Enter the First Array Size  :  ");
 	scanf("%d", &aSize);
 
 	printf("\nPlease Enter the First Array Elements :  ");
 	for(i = 0; i < aSize; i++)
  	{
      	scanf("%d", &a[i]);
  	}
  	printf("\nPlease Enter the Second Array Size  :  ");
 	scanf("%d", &bSize);
   
 	printf("\nPlease Enter the Second Array Elements  :  ");
 	for(i = 0; i < bSize; i++)
  	{
      	scanf("%d", &b[i]);
  	}
  	
  	for(i = 0; i < aSize; i++)
  	{
      	Merged[i] = a[i];
  	}
  	
	mSize = aSize + bSize;
 
 	for(i = 0, j = aSize; j < mSize && i < bSize; i++, j++)
  	{
  		Merged[j] = b[i];
  	}
 
 	printf("\n a[%d] Array Elements After Merging : ", mSize); 
 	for(i = 0; i < mSize; i++)
  	{
    	printf("%d ",Merged[i]);
  	}
 
  	return 0;


}

int main()
{
   int option;
   printf("Enter the option: \n 1.Insertion. \n 2.Deletion \n 3.Sum. \n 4.Concatenate ");
   scanf("%d", &option);
   if (option ==1)
   {
   		insertion();
   }
   else if (option == 2)
   {
   		Deletion();
   }
   else if (option == 3)
   {
  		sum();
   }
   else if (option == 4)
   {
  		concat();
   }
   else{
   	printf("Invalid option.");
   }
   
}
//Write a C program to sort array using pointers.

#include <stdio.h>  
  
void sort(int n,int *ptr)  
{  
    int i, j, t;  
  
    // Sort the numbers using pointers  
    for (i = 0; i < n; i++)
	 {  
  
        for (j = i + 1; j < n; j++) 
		{  
  
            if (*(ptr + j) < *(ptr + i)) {  
  
                t = *(ptr + i);  
                *(ptr + i) = *(ptr + j);  
                *(ptr + j) = t;  
            }  
        }  
    }  
  
    // print the numbers  
    for (i = 0; i < n; i++)  
        printf("%d ", *(ptr + i));  
}  
  
// Driver code  
int main()  
{  
    int n = 5;  
    int arr[] = { 12,4,22,16,8 };
    
   
	
    sort(n, arr);  
  
    return 0;  
}  

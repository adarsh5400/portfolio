//Write a program to create an array of n elements using dynamic memory allocation. Calculate sum of
//all the prime elements of the array using function and de-allocate the memory of the array after its use.
#include<stdio.h>
#include<stdlib.h>
	int isPrime(int num) 
	{
	if (num <= 1) 
	{
        return 0;
	}
	for (int i = 2; i * i <= num; i++) 
	{
        if (num % i == 0) 
        {
        return 0;
        }
        }
        return 1;
        }
        int sumOfPrimeElements(int *arr, int size) 
        {
        int sum = 0;
        for (int i = 0; i < size; i++) 
        {
        if (isPrime(arr[i])) 
        {
        sum += arr[i];
        }
        }
        return sum;
	}
	int main() 
	{
        int n;
        printf("Enter the number of elements: ");
        scanf("%d", &n);
        int *arr = (int *)malloc(n * sizeof(int));
        if (arr == NULL) 
        {
        printf("Memory allocation failed.");
        return 1;
        }
        printf("Enter the elements of the array:\n");
        for (int i = 0; i < n; i++) 
        {
        scanf("%d", &arr[i]);
        }
        int sum = sumOfPrimeElements(arr, n);
        printf("Sum of prime elements: %d\n", sum);
        free(arr);
        return 0;
}

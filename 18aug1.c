//WAP to create a 1-D array of n elements and perform the following menu based operations using
//function.
#include <stdio.h>
	void insertElement(int arr[], int *n, int element, int position) 
	{
	for (int i = *n - 1; i >= position; i--) 
	{
        arr[i + 1] = arr[i];
        }
        arr[position] = element;
        (*n)++;
    	}
	void deleteElement(int arr[], int *n, int position) 
	{
        for (int i = position; i < *n - 1; i++) 
        {
        arr[i] = arr[i + 1];
        }
        (*n)--;
        }
	int linearSearch(int arr[], int n, int element) 
	{
        for (int i = 0; i < n; i++) 
        {
        if (arr[i] == element) 
        {
        return i;
        }
        }
        return -1; 
	}
	void traverseArray(int arr[], int n) 
	{
        printf("Array elements: ");
        for (int i = 0; i < n; i++) 
        {
        printf("%d ", arr[i]);
        }
        printf("\n");
 	}
        int main() 
        {
        int arr[100], n, choice, element, position, result;
        printf("Enter the number of elements in the array: ");
        scanf("%d", &n);
        printf("Enter the array elements:\n");
        for (int i = 0; i < n; i++) 
        {
        scanf("%d", &arr[i]);
        }
        do 
        {
        printf("\nMenu:\n");
        printf("1. Insert an element at a specific position\n");
        printf("2. Delete an element from a specific position\n");
        printf("3. Linear search to search an element\n");
        printf("4. Traverse the array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) 
        {
        case 1:
        printf("Enter the element to insert: ");
        scanf("%d", &element);
        printf("Enter the position to insert the element: ");
        scanf("%d", &position);
        insertElement(arr, &n, element, position);
        for(int i=0;i<n;i++)
        {
        	printf("%d\n",arr[i]);
        } 
        break;
        case 2:
    	printf("Enter the position to delete the element: ");
        scanf("%d", &position);
        deleteElement(arr, &n, position);
        break;
        case 3:
        printf("Enter the element to search: ");
        scanf("%d", &element);
        result = linearSearch(arr, n, element);
        if (result == -1) 
        {
        printf("Element not found in the array.\n");
        } 
        else 
        {
        printf("Element found at position %d.\n", result);
        }
        break;
        case 4:
        traverseArray(arr, n);
        break;
        case 5:
        printf("Exiting...\n");
        break;
        default:
        printf("Invalid choice. Please try again.\n");
        }
        } 
        while (choice != 5);
        return 0;
}

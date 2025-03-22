#include <stdio.h>
//Write a menu driven program to create a structure to represent complex number and perform the
//following operation using function :
	struct Complex 
	{
    	float real;
    	float imaginary;
	};
	struct Complex addComplex(struct Complex num1, struct Complex num2) 
	{
    	struct Complex result;
    	result.real = num1.real + num2.real;
    	result.imaginary = num1.imaginary + num2.imaginary;
    	return result;
	}
	void multiplyComplex(struct Complex *num1, struct Complex *num2, struct Complex *result) 
	{
        result->real = num1->real * num2->real - num1->imaginary * num2->imaginary;
        result->imaginary = num1->real * num2->imaginary + num1->imaginary * num2->real;
	}
 	int main() 
 	{
        struct Complex num1, num2, result;
        int choice;
        printf("Enter real and imaginary parts of Complex Number 1:\n");
        printf("Real part: ");
        scanf("%f", &num1.real);
        printf("Imaginary part: ");
        scanf("%f", &num1.imaginary);
        printf("\nEnter real and imaginary parts of Complex Number 2:\n");
        printf("Real part: ");
        scanf("%f", &num2.real);
        printf("Imaginary part: ");
        scanf("%f", &num2.imaginary);
        printf("\nMenu:\n");
        printf("1. Addition (Call by Value)\n");
        printf("2. Multiplication (Call by Address)\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) 
        {
        case 1:
        result = addComplex(num1, num2);
        printf("Result of addition: %.2f + %.2fi\n", result.real, result.imaginary);
        break;
        case 2:
        multiplyComplex(&num1, &num2, &result);
        printf("Result of multiplication: %.2f + %.2fi\n", result.real, result.imaginary);
        break;
        default:
        printf("Invalid choice\n");
        }
}

//Write a program to represent the polynomial equation of single variable using single linked list and
//perform the addition of two polynomial equations.
#include <stdio.h>
#include <stdlib.h>

// Structure to represent a term in a polynomial equation
struct Node {
    int coeff;
    int exp;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int coeff, int exp) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->coeff = coeff;
    newNode->exp = exp;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a term into a polynomial linked list
void insertTerm(struct Node** poly, int coeff, int exp) {
    struct Node* temp = *poly;
    struct Node* newNode = createNode(coeff, exp);

    if (*poly == NULL) {
        *poly = newNode;
        return;
    }

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// Function to add two polynomial equations
struct Node* addPolynomials(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL;
    struct Node* temp1 = poly1;
    struct Node* temp2 = poly2;

    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->exp > temp2->exp) {
            insertTerm(&result, temp1->coeff, temp1->exp);
            temp1 = temp1->next;
        } else if (temp1->exp < temp2->exp) {
            insertTerm(&result, temp2->coeff, temp2->exp);
            temp2 = temp2->next;
        } else {
            insertTerm(&result, temp1->coeff + temp2->coeff, temp1->exp);
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }

    while (temp1 != NULL) {
        insertTerm(&result, temp1->coeff, temp1->exp);
        temp1 = temp1->next;
    }

    while (temp2 != NULL) {
        insertTerm(&result, temp2->coeff, temp2->exp);
        temp2 = temp2->next;
    }

    return result;
}

// Function to display a polynomial equation
void displayPolynomial(struct Node* poly) {
    if (poly == NULL) {
        printf("0\n");
        return;
    }

    while (poly != NULL) {
        printf("%dx^%d", poly->coeff, poly->exp);
        poly = poly->next;
        if (poly != NULL)
            printf(" + ");
    }
    printf("\n");
}

// Function to free memory allocated for polynomial equation
void freePolynomial(struct Node* poly) {
    struct Node* temp;
    while (poly != NULL) {
        temp = poly;
        poly = poly->next;
        free(temp);
    }
}

int main() {
    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;
    struct Node* result = NULL;

    // Insert terms into polynomial 1
    insertTerm(&poly1, 4, 2);
    insertTerm(&poly1, 3, 1);
    insertTerm(&poly1, 2, 0);

    // Insert terms into polynomial 2
    insertTerm(&poly2, 5, 3);
    insertTerm(&poly2, 4, 2);
    insertTerm(&poly2, 6, 1);
    insertTerm(&poly2, 10,0);

    printf("Polynomial 1: ");
    displayPolynomial(poly1);

    printf("Polynomial 2: ");
    displayPolynomial(poly2);

    result = addPolynomials(poly1, poly2);

    printf("Result of addition: ");
    displayPolynomial(result);

    // Free allocated memory
    freePolynomial(poly1);
    freePolynomial(poly2);
    freePolynomial(result);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

// Node structure to represent non-zero elements of the matrix
struct Node {
    int row, col, value;
    struct Node* nextInRow;
    struct Node* nextInCol;
};

// Function to create a new node
struct Node* createNode(int row, int col, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->row = row;
    newNode->col = col;
    newNode->value = value;
    newNode->nextInRow = NULL;
    newNode->nextInCol = NULL;
    return newNode;
}

// Function to display the sparse matrix
void displaySparseMatrix(struct Node* rowHeaders[], int rows, int cols) {
    printf("Sparse Matrix:\n");
    for (int i = 0; i < rows; ++i) {
        struct Node* temp = rowHeaders[i]->nextInRow;
        for (int j = 0; j < cols; ++j) {
            if (temp != NULL && temp->col == j) {
                printf("%d ", temp->value);
                temp = temp->nextInRow;
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    printf("Enter number of rows in the matrix: ");
    scanf("%d", &rows);
    printf("Enter number of columns in the matrix: ");
    scanf("%d", &cols);

    // Create row header nodes
    struct Node* rowHeaders[rows];
    for (int i = 0; i < rows; ++i) {
        rowHeaders[i] = createNode(-1, -1, -1); // Initialize with dummy values
    }

    int numNonZero;
    printf("Enter number of non-zero elements in the matrix: ");
    scanf("%d", &numNonZero);

    // Populate the sparse matrix
    for (int i = 0; i < numNonZero; ++i) {
        int row, col, value;
        printf("Enter row, column, and value for element %d: ", i + 1);
        scanf("%d %d %d", &row, &col, &value);

        if (row >= rows || col >= cols || row < 0 || col < 0) {
            printf("Invalid position! Matrix indices out of range.\n");
            continue;
        }

        struct Node* newNode = createNode(row, col, value);
        struct Node* temp = rowHeaders[row];
        while (temp->nextInRow != NULL && temp->nextInRow->col < col) {
            temp = temp->nextInRow;
        }
        newNode->nextInRow = temp->nextInRow;
        temp->nextInRow = newNode;

        temp = rowHeaders[col];
        while (temp->nextInCol != NULL && temp->nextInCol->row < row) {
            temp = temp->nextInCol;
        }
        newNode->nextInCol = temp->nextInCol;
        temp->nextInCol = newNode;
    }

    // Display the sparse matrix
    displaySparseMatrix(rowHeaders, rows, cols);

    // Free allocated memory
    for (int i = 0; i < rows; ++i) {
        struct Node* temp = rowHeaders[i];
        while (temp != NULL) {
            struct Node* prev = temp;
            temp = temp->nextInRow;
            free(prev);
        }
    }

    return 0;
}

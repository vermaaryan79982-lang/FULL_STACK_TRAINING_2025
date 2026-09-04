#include <stdio.h>

int main() {
    int rows, cols;

    // User se rows aur columns lena
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // 2D array banate hain
    char alphabets[rows][cols];

    // User se input lena
    printf("Enter alphabets (%d x %d):\n", rows, cols);
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf(" %c", &alphabets[i][j]); // space before %c to ignore whitespace
        }
    }

    // Output print karna
    printf("\nMatrix of Alphabets:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%c ", alphabets[i][j]);
        }
        printf("\n");
    }

    return 0;
}

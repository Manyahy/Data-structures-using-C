#include <stdio.h>
#include <stdlib.h>

int main() {

    int num;
    printf("Enter total number of students: ");
    scanf("%d", &num);
    
    // Memory allocation for num number of floats
    float* ptr = (float*)malloc(num * sizeof(float));
    
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory allocation fails
    }
    
    printf("Enter GPA of students.\n");
    for (int i = 0; i < num; ++i) {
        printf("Student %d: ", i + 1);
        scanf("%f", (ptr + i));  // Using pointer to store GPA
    }
    
    printf("\nDisplaying GPA of students.\n");
    for (int i = 0; i < num; ++i) {
        printf("Student %d: %.2f\n", i + 1, *(ptr + i));  // Dereferencing to display GPA
    }
    
    // Free the allocated memory
    free(ptr);
    ptr = NULL;
    
    return 0;
}

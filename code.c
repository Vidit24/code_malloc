#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int *ptr;
    int n = 10;

    // Allocate memory using malloc
    ptr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize memory with values
    for (i = 0; i < n; i++) {
        ptr[i] = i;
    }

    // Print the values in the allocated memory
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Deallocate memory using free
    free(ptr);

    // Print a message to indicate that the memory has been deallocated
    printf("Memory deallocated\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main() {
    int *arr;
    int size, i;
    size = 5;

    arr = (int*) malloc(size * sizeof(int));
    
    printf("Enter %d elements:\n", size);
    
    for(i = 0; i < size; i++) {
        arr[i] = i;
    }
    
    printf("The elements of the array are:\n");
    
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    free(arr);
    
    return 0;
}
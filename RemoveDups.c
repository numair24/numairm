/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include <stdbool.h>



void removeDups(int arr[], int size) {
    int i, j, found;
    for (i = 0; i < size; ++i) {
        found = 0;
        for (j = 0; j < i; ++j) {
            if (arr[i] == arr[j])
                found = 1;
        }
        if (found && arr[i] != 0) {
            for (j = i; j < size - 1; ++j) {
                arr[j] = arr[j + 1];
            }
            arr[size - 1] = 0;
            i--;
        }
    }
}

int main() {
    int i;
    int arr[] = {1, 2, 2, 2, 3, 3, 4, 2, 4, 5, 6, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    for (i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    removeDups(arr, size);
    printf("Modified array: ");
    for (i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

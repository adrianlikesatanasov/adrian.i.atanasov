#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j];
    arr[j] = arr[j + 1];
    arr[j + 1] = temp;
}
}
}
}
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
void sortArray(int arr[], int size) {
#ifdef _WIN32
  bubbleSort(arr, size);
#else
 qsort(arr, size, sizeof(int), compare);
#endif
}
int main() {
int arr[] = {7, 3, 9, 1, 6, 2, 8, 4, 5};
int size = sizeof(arr) / sizeof(arr[0]);
sortArray(arr, size);
printf("sortiran masiv: ");
}
return 0;

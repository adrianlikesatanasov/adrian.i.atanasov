#include <stdio.h>
#include <stdlib.h>

#define DEBUG 
int compare(const void *a, const void *b) {
return (*(int*)a - *(int*)b);
}

void sortAndSumDivisibleByThree(int arr[], int size) {
qsort(arr, size, sizeof(int), compare);

#ifdef DEBUG
printf("sortinran masiv: ");
for (int i = 0; i < size; i++) {
printf("%d ", arr[i]);
}
#endif
int sum = 0;
#ifdef DEBUG
printf("elementi kratni na 3: ");
#endif
for (int i = 0; i < size; i++) {
if (i % 3 == 0) {
sum += arr[i];
#ifdef DEBUG
printf("%d ", arr[i]);
}
 }
#ifdef DEBUG
#endif
printf("sumata na elementite kratni na 3: %d\n", sum);
}

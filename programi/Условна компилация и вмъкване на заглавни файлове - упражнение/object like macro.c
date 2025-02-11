#include <stdio.h>

#define ARRAY_SIZE 5
#define DEFINE_ARRAY(name, size) int name[size] = {0}
#define PRINT_ARRAY(arr, size)               \
    do {                                     
        for (int i = 0; i < size; i++) {     \
            printf("%d ", arr[i]);           \
        }                                    
        printf("\n");                        \
    } while(0)
int main() {
   DEFINE_ARRAY(myArray, ARRAY_SIZE);
for (int i = 0; i < ARRAY_SIZE; i++) {
myArray[i] = i * 2;
}
PRINT_ARRAY(myArray, ARRAY_SIZE);
return 0;
}

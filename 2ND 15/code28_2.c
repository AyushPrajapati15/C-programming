// Wap to find reverse of array
#include <stdio.h>

int main() {
    int arr[10]={10,20,30,40,50,60,70,80,90,99};
    int i, j, temp;
    j = 10-1;
    for(i=0; i<j; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }


    printf("\nArray in reverse order: ");
    for(i=0; i<10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

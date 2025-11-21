//202510303229
//2689462020@qq.com
//郭昊天
#include <stdio.h>
void bubbleSort(int *ptr, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (*(ptr + j) > *(ptr + j + 1)) {
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[10];
    int i;
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, 10);
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

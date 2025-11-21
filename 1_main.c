//202510303229
//2689462020@qq.com
//郭昊天
int main() {
    int arr[5];
    int i;
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }#include <stdio.h>

    int *p = arr;
    for (i = 0; i < 5; i++) {
        *(p + i) *= 2; 
    }
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}


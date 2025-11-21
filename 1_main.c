//202510303229
//2689462020@qq.com
//郭昊天
#include <stdio.h>
// 自定义函数：参数1为数组指针，参数2为数组长度（固定为5）
void shiftRight(int *ptr_arr, int len) {
    int i;
    for (i = len - 1; i > 0; i--) {
        *(ptr_arr + i) = *(ptr_arr + i - 1);
    }
    *ptr_arr = 0;
}

int main() {
    int arr[5];
    int i;
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    shiftRight(arr, 5);

    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

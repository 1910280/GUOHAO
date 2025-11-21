//202510303229
//2689462020@qq.com
//郭昊天
#include <stdio.h>
// 自定义函数：参数1为数组指针，参数2为数组长度
void incrementArr(int *ptr, int len) {
    int i;
    // 指针遍历数组，每个元素自增1
    for (i = 0; i < len; i++) {
        *(ptr + i) += 1;  
    }
}

int main() {
    int arr[5];
    int i;
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    incrementArr(arr, 5);
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

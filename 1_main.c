//202510303229
//2689462020@qq.com
//郭昊天
#include <stdio.h>
int main() {
    int arr[5]; 
    printf("请输入4个学号（空格分隔）：");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 4; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = 0;
    for (int i = 0; i < 5; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}

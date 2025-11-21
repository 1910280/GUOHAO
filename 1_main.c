//202510303229
//2689462020@qq.com
//郭昊天
#include <stdio.h>
// 自定义swap函数：参数为指针（接收两个变量的地址）
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    
    printf("%d %d\n", x, y);
    
    return 0;
}

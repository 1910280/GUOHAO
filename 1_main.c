//202510303229
//2689462020@qq.com
//郭昊天
#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int *p = &a;
    *p += 10;
    printf("%d,%d\n", a, *p);
    
    return 0;
}


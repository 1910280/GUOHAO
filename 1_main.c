//202510303229
//2689462020@qq.com
//郭昊天
#include <stdio.h>
int main() {
    int n, is_prime = 1, i = 2; 
    printf("请输入小于50的正整数：");
    scanf("%d", &n);
    if (n == 1) {
        is_prime = 0;
    } else {
        while (i < n) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
            i++; 
        }
    }
    if (is_prime == 1) {
        printf("密钥安全，密码设置成功\n");
    } else {
        printf("密钥不安全，请重新输入\n");
    }
    return 0;
}

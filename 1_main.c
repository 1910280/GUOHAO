//202510303229
//2689462020@qq.com
//郭昊天
#include <stdio.h>
int main() {
    int num = 100; 
    int digit1, digit2, digit3;
    int count = 0; 
    while (num <= 999) {
        digit1 = num / 100;
        digit2 = (num / 10) % 10;
        digit3 = num % 10;

        if (digit1*digit1*digit1 + digit2*digit2*digit2 + digit3*digit3*digit3 == num) {
            if (count > 0) {
                printf(" ");
            }
            printf("%d", num);
            count++;
        }
        num++; 
    }
    printf("\n");
    return 0;
}

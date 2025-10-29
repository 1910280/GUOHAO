//202510303229
//2689462020@qq.com
//郭昊天
#include <stdio.h>
int main() {
    int num, digit1, digit2, digit3; 
    int count = 0; 

    for (num = 100; num <= 999; num++) {
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
    }
    printf("\n");
    return 0;
}

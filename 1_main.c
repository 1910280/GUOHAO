//202510303229
//2689462020@qq.com
//郭昊天
#include <stdio.h>
int main() {
    int arr[5];
    int count = 0; 
    printf("请输入整数（奇数需重新输入，共需5个偶数）：\n");
    while (count < 5) {
        int num;
        scanf("%d", &num); 
        if (num % 2 == 0) { 
            arr[count] = num; 
            count++; 
        }
    }
    for (int i = 0; i < 5; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}

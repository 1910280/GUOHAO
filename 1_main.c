//202510303229
//2689462020@qq.com
//郭昊天
#include <stdio.h>
int main() {
    int score;
    scanf("%d", &score);
    if (score >= 90 && score <= 100) {
        printf("A\n");
    } else if (score >= 80 && score <= 89) {
        printf("B\n");
    } else if (score >= 70 && score <= 79) {
        printf("C\n");
    } else if (score >= 60 && score <= 69) {
        printf("D\n");
    } else if (score >= 0 && score < 60) {
        printf("E\n");
    } else {
        printf("输入成绩无效，请输入0-100的整数\n");
    }
    return 0;
}

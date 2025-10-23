//202510303229
//2689462020@qq.com
//郭昊天
int main() {
    float celsius, fahrenheit;
    printf("请输入摄氏温度：");
    scanf("%f", &celsius);
    fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    printf("转换后的华氏温度为：%.1f\n", fahrenheit);
    
    return 0;
}

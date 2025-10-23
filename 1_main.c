//202510303229
//2689462020@qq.com
//郭昊天
int main() {
    int a, b;
    char op;
    float result;
    printf("请按格式输入（a b 运算符）：");
    scanf("%d %d %c", &a, &b, &op);
    
    switch (op) {
        case '+':
            result = a + b;
            printf("计算结果：%.0f\n", result); 
            break;
        case '-':
            result = a - b;
            printf("计算结果：%.0f\n", result);
            break;
        case '*':
            result = a * b;
            printf("计算结果：%.0f\n", result);
            break;
        case '/':
            if (b == 0) {
                printf("错误：除数不能为0！\n");
            } else {
                result = (float)a / b; 
                printf("计算结果：%.2f\n", result); 
            }
            break;
        default:
            printf("错误：请输入正确的运算符（+、-、*、/）！\n");
    }
    
    return 0;
}

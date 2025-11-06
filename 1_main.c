//202510303229
//2689462020@qq.com
//郭昊天
#include <stdio.h>
int arraySum(int arr[], int len) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += arr[i];
    }
    return sum;
}
int arrayProduct(int arr[], int len) {
    int product = 1;
    for (int i = 0; i < len; i++) {
        product *= arr[i];
    }
    return product;
}

int main() {
    int arr[5];
    int len = 5;
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d %d\n", arraySum(arr, len), arrayProduct(arr, len));  
    return 0;
}

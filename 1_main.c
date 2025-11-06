//202510303229
//2689462020@qq.com
//郭昊天
#include <stdio.h>
void reverseArray(int arr[], int len) {
    for (int i = 0; i < len / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = temp;
    }
}
int main() {
    int arr[5];
    int len = 5;
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }
    reverseArray(arr, len);
    for (int i = 0; i < len; i++) {
        if (i == len - 1) {
            printf("%d", arr[i]);
        } else {
            printf("%d ", arr[i]);
        }
    }
    return 0;

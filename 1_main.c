//202510303229
//2689462020@qq.com
//郭昊天
#include <stdio.h>
int main() {
    int arr[3][3], trans[3][3];
    for (int i = 0; i < 3; i++) {
        scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            trans[j][i] = arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        printf("%d %d %d \n", trans[i][0], trans[i][1], trans[i][2]);
    }
    return 0;
}

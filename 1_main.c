//202510303229
//2689462020@qq.com
//郭昊天
#include <stdio.h>
int main() {
 int *p = (int *)malloc(5 * sizeof(int)); 
    int i;
    for (i = 0; i < 5; i++) {
        scanf("%d", p + i);  
    }
    
   
    for (i = 0; i < 5; i++) {
        printf("%d ", *(p + i));  
    }
    printf("\n");
    free(p);
    p = NULL;  // 指针置空，避免野指针
    
    return 0;
}

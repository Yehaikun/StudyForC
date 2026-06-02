#include <stdio.h>

int main() {
    int arr1[][3]={
        {1,2,3},
        {4},
        {7,8}
    };
    printf("%p\n", &arr1);
    printf("遍历二维数组打印地址和值\n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("%p(%d) ", &arr1[i][j], arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    


    return 0;
}
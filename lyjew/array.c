#include <stdio.h>

int main() {
    int arr1[3][3]={
        {1,2,3},
        {4},
        {7,8}
    };
    printf("%d\n", arr1);
    printf("0x%x\n", arr1);
    printf("0x%X\n", arr1);

    return 0;
}
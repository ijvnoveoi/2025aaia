///week12-2.cpp
///fibonacci 費氏數列是甚麼
///規則:前兩項相加
#include<stdio.h>
int main()
{
    int a[30] = {0, 1};
    printf("1 ");
    for(int i=2; i<30; i++){
        a[i] = a[i-1] + a[i-2];
        printf("%d ", a[i] );
    }
}

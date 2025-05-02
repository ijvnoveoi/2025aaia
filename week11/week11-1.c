///week11-1.cpp
///函式/函數function
#include <stdio.h>
///前面 定義 函式
///送出int整數
///送進去整數a整數b
int addnum(int a, int b)
{
    printf("在函式addnum()裡，得到參數a:%d b:%d\n", a, b);
    int ans = a + b;
    printf("算出來的答案 %d 要 return 出去\n", ans);
    return ans;///把送出來的結果傳出去
}
int main()
{///主要的函式，主程式
    printf("在main()呼叫使用 addnum() \n");
    int ans = addnum(2, 3);
    printf("得到的答案:%d\n", ans);
}


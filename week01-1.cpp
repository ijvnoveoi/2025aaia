///week01-1.cpp要自己打好全部的檔名，後面要打.cpp
///在瘋狂程設(練習模式)寫好的程式碼，全選，Ctrl-C
///CodeBlocks File-New-Empty空白檔案，Ctrl-S存檔
#include <stdio.h>///使用standard標準的input/output

int main()
{
	int a,b;///整數a, b
	scanf( "%d%d", &a, &b );///讀出資料(小心"%d%d" 後面逗號)
    ///兩個%d%d  &  &
	printf("%d" , a + b );///應出資料
}

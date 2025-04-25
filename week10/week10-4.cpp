//week10-4.cpp
//leetcode 1399. Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
        int a[100] = {};//這裡要放total出現幾次
        int largest = 0;
        for(int i=1; i<=n; i++){//1...n人類的迴圈
            int now = i;//現在要剝皮的次數
            int total = 0;//迴圈前面total次數是0
            while(now>0){
                //迴圈哩，把total一直加起來
                total += now % 10;
                now = now / 10;//剝皮後，n變小
            }
            a[total]++;//迴圈後面， 要統計total出現次數
            if( a[total] > largest) largest = a[total];
        }
        int ans = 0;
        for(int i = 0; i<100; i++){
            if(a[i]==largest) ans++;
        }
        return ans;
    }
};

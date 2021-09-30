// 第二题：买卖股票的最佳时机;依然是贪心算法
// 改进版，用一个变量来标记递增序列的开始,但是没完成
#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

class Solution{
    public:
        int maxProfit(vector<int> &price){
            size_t sum = 0;
            auto L = price[0];  // L is used to record the begin of the increasing sequence.
            for(auto R  = price.begin(); R != price.end()-1;++R){
                if(*R > *(R+1)){
                   sum += *R - L; 
                   L = *(R+1);
                }
            }
            return sum;
        }
};

int main(int argc,char *argv[])
{

    vector<int> prices = {7,1,5,3,6,4};

    Solution a;
    cout << a.maxProfit(prices) << endl;

    for(auto i:prices){
        cout << i << endl;
    }
    return 0;
}

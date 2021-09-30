// 第二题：买卖股票的最佳时机;
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
            for(auto it  = price.begin(); it != price.end()-1;++it){
                if(*it  < *(it+1)){
                    sum += *(it+1) - *it;
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

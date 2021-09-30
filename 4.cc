// 第4题：判断是否有重复元素
#include<iostream>
#include<vector>
#include<set>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::set;
class Solution{
    public:
        bool containsDuplicate(vector<int> &nums){
            set<int>s;
            for(auto i:nums){
                auto pr = s.insert(i);
                if(!pr.second){
                   return true; 
                }
            }
            return false;
        }
};
int main(int argc,char *argv[])
{

    vector<int> prices = {2,2,7,1,5,3,6,4};

    Solution a;
    cout << a.containsDuplicate(prices) << endl;
    return 0;
}

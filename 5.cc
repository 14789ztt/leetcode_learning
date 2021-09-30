// 第5题：只出现一次的数字,only one number occur once when others twice.
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include"myFun.h"
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::set;
using std::sort;



class Solution{
    public:
        int singleNumber(vector<int> &nums){

            sort(nums.begin(),nums.end());

            int R_sum = 0;
            for(auto i = nums.begin();i != nums.end();++i){
                R_sum += *i;
            }

            auto end_unique = unique(nums.begin(),nums.end());

            int L_sum = 0;
            for(auto i = nums.begin();i != end_unique;++i){
               L_sum += 2*(*i);     // caculate the double sum of each element with no repeat.
            }

            //cout << L_sum << endl;

            return L_sum-R_sum;

        }
};

int main(int argc,char *argv[])
{

    vector<int> p = {4,4,1,1,2,2,3,3,6};

    /*sort(p.begin(),p.end());
    my_cout(p);
    cout << endl;
    unique(p.begin(),p.end());
    my_cout(p);

*/
    Solution a;
    cout << a.singleNumber(p) << endl;
    
    return 0;

}

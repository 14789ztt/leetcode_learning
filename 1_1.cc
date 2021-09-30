// 删除排序数组中的重复项：双指针做法
#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int removeDuplicates(vector<int>& nums){
    if(nums.empty()){
        return 0;
    }
    auto L = nums.begin();  // left iterator

    for(auto R = L+1;R != nums.end();++R)   // right iterator
    {
        if(*L != *R){   // if the value of the left not equal to the right, make the L = R
            ++L;
            *L = *R;
        }
    }
    nums.erase(++L,nums.end());

    return nums.size();
}


int main(int argc,char *argv[])
{

    vector<int> a = {1,1,2,2,2,3,4,5};

    int b = 0;
    b = removeDuplicates(a);

    cout << b << endl;

    for(auto i:a){
        cout << i << endl;
    }

    return 0;
}

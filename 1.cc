// 删除排序数组中的重复项
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
    auto it = nums.begin();

    while(it != nums.end()-1){
        if(*it == *(it+1)){
            it = nums.erase(it);
        }
        else{
            ++it;
        }
    }
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

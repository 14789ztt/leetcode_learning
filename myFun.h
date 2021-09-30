#include<iostream>
#include<vector>

using std::vector;
using std::endl;
using std::cout;


template <typename T>
void my_cout(vector<T> &a){
    for(auto i:a){
        cout << i << endl;
    }
}

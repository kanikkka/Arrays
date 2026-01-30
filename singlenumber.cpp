#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    int singlenumber(vector<int>nums){
        int ans=0;
        for(int val: nums){
            ans=ans^val;
            return ans;
        }
    }
};
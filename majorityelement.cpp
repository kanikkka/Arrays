#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    int majorityelement(vector<int>nums){
        int n=nums.size();
        for(int val: nums){
            int count=0;
            for(int element:nums){
                if(val==element){
                    count++;
                }
            }
            if(count>n/2){
                return val;
            }
        }
    }
};
int main(){
    solution obj;
    vector<int>nums={2,3,3,4,5,6,3,3,3,2};
    cout<<obj.majorityelement(nums);
    return 0;
}

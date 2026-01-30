#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"eneter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enetr the array elements";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter the target sum";
    cin>>target;
    for(int i=0; i<n; i++){
        for(int j=1; j<n; j++){
            if(arr[i]+arr[j]==target){
                cout<<"indices are"<<" "<<i<<" "<<j;
            }else{
                continue;
            }
        }
    }
    cout<<"no such elements found";
    return 0;
}
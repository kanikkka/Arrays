#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the array size";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxsum=0;
    int currsum=0;
    for(int i=0; i<n; i++){
        currsum=currsum+arr[i];
        if(currsum<0){
            currsum=0;
        }
        if(maxsum<currsum){
            maxsum=currsum;
        }

    }
    cout<<"max sum is"<<maxsum;
    return 0;
}
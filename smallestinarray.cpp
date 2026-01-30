#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int arr[n]; int smallest=INT_MAX;
    cout<<"enter the array eleemnt";
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    cout<<"smallest number is:"<<smallest;
    return 0;

}
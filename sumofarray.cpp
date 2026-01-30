#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int arr[n];
    int sum=0;
    cout<<"enter array eleemt ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum=sum+arr[i];
    
    }
    cout<<"sum of array"<<sum;
    return 0;
}
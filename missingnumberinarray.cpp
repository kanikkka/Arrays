#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n-1];
    cout<<"enter the array elements";
    for(int i=0; i<n-1; i++){
        cin>>arr[i];
    }
    int totalsum=n*(n+1)/2;
    int sum=0;
    for(int i=0; i<n-1; i++){
        sum=sum+arr[i];
    
    }
    int missingnumber=totalsum-sum;
   
    cout<<"the mising number is "<<missingnumber;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the array size";
    cin>>n;
    int arr[n];
    cout<<"array elements are";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool sorted=true;
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1]){
            sorted=false;
            break;
        }
    }
        if(sorted){
            cout<<"array is sorted";
        }
        else{
            cout<<"array is not sorted";
        }
    }
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enetr the array element";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int last=arr[n-1];
    int first=arr[0];
    for(int i=n-1; i>0; i--){
        arr[i]=arr[i-1];

    }
    arr[0]=last;
    cout<<"array after rotation"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
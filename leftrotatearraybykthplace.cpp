#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the array size";
    cin>>n;
    int arr[n];
    cout<<"enter the array element";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the number of place to be roatted";
    cin>>k;
    k=k%n;
    int temp[k];
    for(int i=0; i<k; i++){
        temp[i]==arr[i];
    }
    for(int i=k; i<n; i++){
        arr[i-k]=arr[i];
    }
    for(int i=0; i<k; i++){
        arr[n-k+1]=temp[i];
    }
    cout<<"after roattion"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
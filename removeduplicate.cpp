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
    int j=0;
    for(int i=0; i<n; i++){
        if(arr[j]!=arr[i]){
            j++;
            arr[j]=arr[i];
        }
    }
    return j+1;
    cout<<"array after duplicates removal";
    for(int i=0; i<=j; j++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"new size"<<j+1;
}
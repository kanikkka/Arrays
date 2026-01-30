#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"number of element in ar array";
    cin>>n;
    int arr[n];
    cout<<"enter the array eleemnt";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"enter the target to be search";
    int key;
    cin>>key;
    int found=0;
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            cout<<"key is found at index"<<i;
           found=1;
            break;
        }
        }
        if(found==0){
            cout<<"not found";
        }
    }

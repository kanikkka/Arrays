#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the array elemnt";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int j=0; 
    for(int i=0; i<n; i++){
        if(arr[j]!=arr[i]){
            j++;
            arr[j]==arr[i];
        }
        
    }return j+1;
    cout<<"array after removing duplicates";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    
}
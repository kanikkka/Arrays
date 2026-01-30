#include<iostream>
using namespace std;
int reversearray(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){//cross start and end
        swap(arr[start],arr[end]);//swap element from start with end
        start++;
        end--;
}
}
int main(){
    int n;
    cout<<"enter the number of element";
    cin>>n;
    int arr[n];
    cout<<"enter array element";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    reversearray(arr,n);
    cout<<"reversed array is ";
    for(int i=0; i<n; i++){
        cout<<arr[i];

    }
}
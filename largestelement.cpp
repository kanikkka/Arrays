#include<iostream>
#include<climits>
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
    cin>>arr[n];
    int largest=0;
    int max=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
            largest=max;
        }

    }
    cout<<"largest element is "<<largest;
    return 0;

}
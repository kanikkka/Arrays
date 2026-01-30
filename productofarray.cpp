#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int arr[n];
    int product=1;
    cout<<"enter array eleemt ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
        product=product*arr[i];
    
    }
    cout<<"product of array"<<product;
    return 0;
}
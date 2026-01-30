#include<iostream>
using namespace std;
int sellandbuy(int arr[],int n){
    int maxprofit=0;
    int bestbuy=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<bestbuy){
            bestbuy=arr[i];
        }
        else if(arr[i]-bestbuy>maxprofit){
            maxprofit=arr[i]-bestbuy;
        }

    }
    return maxprofit;
}
int main(){
    int n;
    cout<<"enter ";
    cin>>n;
    int arr[n];
    cout<<"elmets";
    for(int i=0; i<n; i++)
{
    cin>>arr[i];
}
int result=sellandbuy(arr,n);
cout<<result;
}
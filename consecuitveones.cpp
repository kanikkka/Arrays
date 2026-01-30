#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enetr the array elemnts";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int currentcount=0;
    int maxcount=0;
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            currentcount++;
            if(currentcount>maxcount){
                maxcount=currentcount;
 
            }else{
                currentcount=0;
            }

        }
    }
    cout<<"the consecutive oens are"<<maxcount;
    return 0;
}

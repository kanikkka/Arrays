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
    int beg=0, end=n-1,mid;
    int key;
    cout<<"enter target to be search ";
    cin>>key;
    while(beg<=end){
        mid=(beg+end)/2;
        if(arr[mid]==key){
            cout<<"element found at mid"<<mid;
            break;
        }else if(arr[mid]<key){
            beg=mid+1;

        }else{
            end=mid-1;
        }
    }
    if(beg>end){
        cout<<"elemnt not found";
    }

}
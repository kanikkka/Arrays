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
    int j=0;//one pointer on starting 
    for(int i=0; i<n; i++){ //i pointer traverse array
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }
    while(j<n){ //ending pointer fill with zeroes
        arr[j]=0;
        j++;
    }
    cout<<"array after all zeroes at end"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}
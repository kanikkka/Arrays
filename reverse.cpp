#include<iostream>
using namespace std;
int main(){
    int n;
    int rev=0;
    cout<<"enter the element to be revrse";
    cin>>n;
    while(n!=0){
        int ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    cout<<"number after reversing is :"<<rev;
    return 0;


}
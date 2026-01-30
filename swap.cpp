#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the number a";
    cin>>a;
    cout<<"enetr the number b";
    cin>>b;
    int temp=a;
    a=b;
    b=temp;
    cout<<"after swap"<<" "<<a<<" "<<b;
    return 0;
}
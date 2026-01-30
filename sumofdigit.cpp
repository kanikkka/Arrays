#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int sum=0;
    while(n!=0){
        int ld=n%10;//digit divide ho rhe h or end value mil rhe h
        n=n/10;//number chotta hoat ja rha h
        sum=sum+ld;
    }
    cout<<"sum of digits is "<<sum;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"number for factorial";
    cin>>n;
    int fact=1;
    for(int i=0; i<=n; i++){
        fact=fact*(i+1);
    }
    cout<<"factorial of a number is"<<fact;
    return 0; 
}
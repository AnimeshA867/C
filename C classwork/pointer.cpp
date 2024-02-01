#include<iostream>
using namespace std;
int main(){
    int a,b,*p,*q;
    cout<<"Enter any two numbers:"<<endl;
    cin>>a>>b;
    p=&a;
    q=&b;
    int sum = *p+*q;
    cout<<sum<<endl;
}
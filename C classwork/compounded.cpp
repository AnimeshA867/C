#include<iostream>
using namespace std;
int main(){
    int a=1,b=1;
    long int sum=0;
    for(int i=0;i<26;i++){
        cout<<b<<endl;
        b=a+a;
        a=b;
        sum+=b;
    }
    cout<<sum;
}
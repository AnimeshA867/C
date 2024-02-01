#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any numbers:"<<endl;
    cin>>n;
    if(n%2==0){
        cout<<n<<" is divisible by 2.";
    }else{
        cout<<n<<" is not divisible by 2.";
    }
}
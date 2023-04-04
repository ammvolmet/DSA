#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main(){
    int a, count=0;
    cout<<"enter the number:"<<endl;
    cin>>a;
        if(isPrime(a))
         cout<<"prime"<<endl;
         else
         cout<<"not prime"<<endl;
    return 0;
    }
   
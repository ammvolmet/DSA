#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2; i<n; i++){
        if(i%2==0)
        return 0;
    }
    return 1;
}
int countPrime(int a){
    int count =0;
     for(int i=2; i<a; i++){
        if(isPrime(a))
        count++;
    }
    return count;
}
int main(){
    int a;
    cout<<"enter the number:"<<endl;
    cin>>a;
      int ans = countPrime(a);
  cout<<"number of primes upto"<<a<<"is"<<ans;
    return 0;

}
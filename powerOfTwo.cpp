#include<iostream>
#include<math.h>
using namespace std;
bool isPowerOfTwo(int n){
     int count =  0;
    while(n!=0){
        int b = n&1;
       if(b)
       count++;
       n=n>>1;
    }
    if(count==1)
    return true;
    else
    return false;

   
    }
     
 
int main(){
    int a,b,c;
    cout<<"enter a number: "<<endl;
    cin>>a;
    b = isPowerOfTwo(c);
    if(b)
    cout<<"power of two"<<endl;
    else
    cout<<"not a power of two"<<endl;
    return 0;

}
#include<iostream>
using namespace std;
int power(int n, int m){
    int ans = 1;
    for(int i = 1; i<=m; i++){
        ans = ans*n;
    }
    return ans;

}
int main(){
    int a, b, c;
    cout<<"enter two numbers: "<<endl;
    cin>>a>>b;
    c = power(a, b);
    cout<<a<<" to the power "<<b<<" = "<<c<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int findDuplicate(int arr[], int size){
    int ans=0;
    for(int i = 0; i<size; i++){
        ans = ans^arr[i];
    }
    for(int i = 1; i<size; i++){
        ans = ans^i;
        return ans;
    }
}
int main(){
    int arr[100], size, key, ans;
    cout<<"enter the array:"<<endl;
    for(int i =0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"enter the element to check element:"<<endl;
    cin>>key;
    ans = findDuplicate(arr, key);
    if(ans==key)
    cout<<"duplicate present"<<endl;
    else
    cout<<"duplicate not present"<<endl;
    return 0;
     
    
}
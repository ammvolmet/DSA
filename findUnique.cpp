#include<iostream>
using namespace std;
int findUnique(int arr[], int size, int key){
    int ans = 0;
    for(int i = 0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[100];
     int size, key, ans;
    cout<<"enter the size of array:"<<endl;
    cin>>size;
    cout<<"enter the elements:"<<endl;
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"enter the key to find:"<<endl;
    cin>>key;
    ans =  findUnique( arr, size, key);
    if(ans==key)
    cout<<"present"<<endl;
    else
    cout<<"not present"<<endl;
    return 0;

}
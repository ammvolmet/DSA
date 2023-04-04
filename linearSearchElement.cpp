#include<iostream>
using namespace std;
bool search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key)
        return 1;
    }
    return 0;
}
int main(){
    int size;
    cout<<"enter size:"<<endl;
    cin>>size;
    int arr[100];
    cout<<"enter the elements:"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"enter element to search:"<<endl;
    int key;
    cin>>key;

    bool found = search(arr, size, key);
    if(found)
        cout<<"key is present"<<endl;
        else
        cout<<"key is absent"<<endl;
        return 0;
           
    
}

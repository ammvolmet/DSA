#include<iostream>
#include<math.h>
using namespace std;
bool search(int arr[], int size, int key){
    for(int i = 0; i<size; i++){
        if(arr[i]==key)
        return 1;
    }
    return 0;
}
int main(){
    int arr[100], size, ans, key;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    cout<<"enter the elements"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"enter key element:"<<endl;
    cin>>key;
    ans = search(arr, size, key);
    if(ans)
    cout<<"present"<<endl;
    else
    cout<<"not present"<<endl;
    return 0;


}

#include<iostream>
#include<math.h>
using namespace std;
int getMax(int arr[], int size){
    int max = -(pow(2,31));
    for(int i=0; i<size; i++){
        if(arr[i]>max)
        max = arr[i];
    }
    return max;
}
int main(){
    int arr[100];
    int size;
    cout<<"enter size of array"<<endl;
    cin>>size;
    cout<<"enter the elements"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int ans = getMax(arr, size);
    cout<<"maximum is : "<<endl;
    cout<<ans<<endl;
    return 0;
}
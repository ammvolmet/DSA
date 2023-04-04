#include<iostream>
#include<math.h>
using namespace std;
int getMin(int arr[], int size){
    int min = pow(2,31)-1;
    for(int i =0; i<size; i++){
        if(arr[i]<min)
        min = arr[i];
    }
    return min;
}
int main(){
    int arr[100], size, ans;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    cout<<"enter the elements: "<<endl;
    for(int i=0 ; i<size; i++){
        cin>>arr[i];
    }
    ans = getMin(arr, size);
    cout<<"minimum element is: "<<ans<<endl;
    return 0;

}

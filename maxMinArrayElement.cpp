#include<iostream>
#include<math.h>
using namespace std;

int getMax(int num[], int n){
    int max = -pow(2,31);
    for(int i=0; i<n; i++){
        if(num[i]>max)
        max=num[i];

    }
return max;
           
}
int getMin(int num[], int n){
    int min = pow(2,31)-1;
    for(int i=0; i<n; i++){
        if(num[i]<min)
        min=num[i];

    }
return min;
           
}

int main(){
    int size;
    cout<<"enter size"<<endl;
    cin>>size;
    int num[100];
    cout<<"enter elements"<<endl;
    for(int i=0; i<size; i++){
        cin>>num[i];
    }
    cout<<"maximum element:"<<getMax(num, size)<<endl;
    cout<<"minimum element:"<<getMin(num, size)<<endl;
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int i,num,key,found,arr[100];
    cout<<"Enter the number of elements in the array: ";
    cin>>num;
    for(i=0;i<num;i++){
        cout<<"Enter Element"<<i+1<<":";
        cin>>arr[i];
    }
    cout<<"Enter the key to be searched: ";
    cin>>key;
    found=0;
    for(i=0;i<num;i++){
        if(arr[i]==key){
            cout<<"Key found at index:"<<i;
            found=1;
            break;

        }
    }
}
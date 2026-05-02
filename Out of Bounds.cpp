#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int index;

    cout<<"Enter the Index:";
    cin>>index;
    
    try{
        if(index<0 || index>5){
            throw index;
        }
        cout<<"Element at index "<<index<<":"<<arr[index]<<endl;
    }
    catch(int x){
        cout<<"Error: Index out of bounds"<<endl;
    }
    return 0;

}
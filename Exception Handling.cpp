#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;

    try{
        if(b==0){
            throw b;
        }
        float result = a/b;
        cout<<"Result is:"<<result<<endl;
    }
    catch(int x){
        cout<<"Error Division by zero is not allowed"<<endl;
    }
    cout<<"Program continues after exception handling"<<endl;
    return 0;
}

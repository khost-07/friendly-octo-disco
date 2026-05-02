#include<iostream>
using namespace std;

class Area{
    float result;

    public:

    Area(float r){
        result=3.14*r*r;
        cout<<"Area of circle is:"<<result<<endl;
    }

    Area(float l,float b){
        result=l*b;
        cout<<"Area of rectangle is:"<<result<<endl;
    }

    Area(float  b,float h,int){
        result=0.5*b*h;
        cout<<"Area of Triangle is:"<<result<<endl;
    }
};

int main(){
    float r,l,b,h;
    Area obj1(5.0);
    Area obj32(2.0,5.0);
    Area obj3(2.0,10.0,1);
    return 0;
}
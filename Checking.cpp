#include<iostream>
using namespace std;

class book{
    private:
    int book_id;
    char title[50];
    float price;

    public:
    void getdata(){
        cout<<"Enter Book id:";
        cin>>book_id;
        cout<<"Enter Book Title:";
        cin>>title;
        cout<<"Enter the Price:";
        cin>>price;
    }

    void display(){
        cout<<"Book id:"<<book_id<<endl;
        cout<<"Book Title:"<<title<<endl;
        cout<<"Book Price:"<<price<<endl;
    }

};

int main(){
    int n;
    cout<<"Enter the number of Books:";
    cin>>n;
    book b[n];
    book *ptr;
    ptr=b;
    for(int i=0;i<n;i++){
        cout<<"Enter Details of Book:"<<i+1<<endl;
        (ptr+i)->getdata();
    }

    for(int i=0;i<n;i++){
        cout<<"Details of Book:"<<i+1<<endl;
        (ptr+i)->display();
    }
    return 0;
    }
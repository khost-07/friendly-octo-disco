#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str1[100],str2[100],concat[100];

    cout<<"Enter First string:";
    cin>>str1;
    cout<<"Enter Second string:";
    cin>>str2;

    cout<<"Length of First String is:"<<strlen(str1)<<endl;
    cout<<"Length of Second String is:"<<strlen(str2)<<endl;

    if(strcmp(str1,str2)==0)
    cout<<"Strings are equal"<<endl;
    else
    cout<<"Strings are not equal"<<endl;

    strcpy(concat,str1);
    strcat(concat,str2);
    cout<<"Concatenated String is:"<<concat<<endl;

    strrev(str1);
    cout<<"Reversed First String:"<<str1<<endl;

    return 0;
}
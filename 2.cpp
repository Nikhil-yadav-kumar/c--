#include<iostream>
using namespace std;
int main(){
    int marks1,marks2,marks3;
    cout<<"enter 3 marks: "<<endl;
    cin>>marks1>>marks2>>marks3;

    if (marks1>=33){
        cout<<" marks1 is pass"<<endl;
    }
    else
    cout<<"marks1 is fail"<<endl;
    if (marks2>=33){
        cout<<" marks2 is pass"<<endl;
    }
    else
    cout<<"marks2 is fail"<<endl;
    if (marks3>=33){
        cout<<" marks3 is pass"<<endl;
    }
    else
    cout<<"marks3 is fail"<<endl;
    return 0;
}

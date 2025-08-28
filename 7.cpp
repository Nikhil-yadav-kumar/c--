#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the numbers:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>0;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
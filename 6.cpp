#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the numbers:";
    int pro =1;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"2 x "<<i<<"="<<pro*i<<endl;
    }
    return 0;
}
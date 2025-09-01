#include<iostream>
using namespace std;
int main(){
    int rows,colms;
    cout<<"enter the no.of rows: ";
    cin>>rows;
    cout<<"enter the coloumns: ";
    cin>>colms;
    int a[10][10],b[10][10],sum[10][10];

    cout<<"enter the elements of first matrix:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<colms;j++){
            cin>>a[i][j];
            
        }
    }
    cout<<"enter the elements of second matrix:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<colms;j++){
            cin>>b[i][j];
            
        }
    }
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<colms;j++){
            sum[i][j]=a[i][j]+b[i][j];
            
        }
    }
    cout<<"sum of matrix:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<colms;j++){
            cout<<sum[i][j]<<" ";
            
        }
        cout<<endl;
    }

}
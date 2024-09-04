#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of nxn : ";
    cin>>n;
    int a[n][n];
    cout<<"enter the elements of the array : ";
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>a[i][j];
        }
    }
    //printing the matrix
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    //warshalls algo
    for(int k=0;k<n;++k){
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                 a[i][j] = a[i][j] | (a[i][k] & a[k][j]);
            }
        }
    }
    //printing the warshall matrics
    cout<<"WARSHALLS MATRICS IS : "<<endl;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
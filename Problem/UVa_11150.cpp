#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int cola=n;
        int emp=n;
        while(emp>=3){
        cola+=emp/3;
        emp=emp%3+emp/3;
        }
        if(emp==2){
            cout<<cola+1<<endl;
        }
        else{
            cout<<cola<<endl;
        }
    }
}

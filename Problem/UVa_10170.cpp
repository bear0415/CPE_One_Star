#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    while(cin>>n>>m){
        m-=n;
        long long cot=n;
        while(m>0){
            cot++;
            m-=cot;
        }
        cout<<cot<<endl;
    }
}


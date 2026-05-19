#include<bits/stdc++.h>
using namespace std;

int sss(long long a){
    long long ans =0;
    while(true){
    
    if(a<10) return a;
    ans=0;
    while(a>0){
        ans+=a%10;
        a=a/10;
    }
    a = ans;
    
    }
}

int main(){
    long long n;
    while(cin>>n&&n!=0){
        
        cout<<sss(n)<<endl;
    }
}

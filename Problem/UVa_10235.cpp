#include<bits/stdc++.h>
using namespace std;

bool isprime(int a){
    if(a<=1) return false;
    if(a<=3) return true;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return false;
        
    }
    
        return true;
    
}

int reverses(int b){
    int revn=0;
    while(b>0){
        revn=revn*10+b%10;
        b/=10;
    }
    return revn;
}

int main(){
    int n;
    while(cin>>n&&n!=0){
        if(!isprime(n)){
            cout<<n<<" is not prime."<<endl;
        }else{
            int reva=reverses(n);
            if(isprime(reva)&&reva!=n){
                cout<<n<<" is emirp."<<endl;
            }else{
                cout<<n<<" is prime."<<endl;
            }
        }
    }
}

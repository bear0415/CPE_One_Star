#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    int a;
    cin>>N;
    while(N--){
        cin>>a;
        int count=0;
        int counts=0;
        int six=0;
        int b=0;
        int n=a;
        while(n>0){
            if(n%2==1){
                count++;
            }
            n/=2;
            
        }
        int base=1;
        while(a>0){
            six+=a%10*base;
            base*=16;
            a/=10;
        }
        while(six>0){
            if(six%2==1){
                counts++;
            }
            six/=2;
        }
        cout<<count<<" "<<counts<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    while(cin>>a>>b&&(a!=0||b!=0)){
        int count=0;
        int carry=0;
        while(a>0||b>0){
            int sum=0;
            sum=a%10+b%10+carry;
            if(sum>=10){
                count++;
                carry=1;
            }
            else{
                carry=0;
            }
            a/=10;
            b/=10;
        }
        if(count==0){
            cout<<"No carry operation."<<endl;
        }
        else if(count==1){
            cout<<"1 carry operation."<<endl;
        }
        else{
            cout<<count<<" carry operations."<<endl;
        }
    }
}

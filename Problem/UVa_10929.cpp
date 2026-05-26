#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(cin>>s){
        if(s=="0") break;
        int ans = 0;
        for(int i=0;i<s.size();i+=2){
            ans+=(s[i]-'0');
            if (i+1 != s.size()) ans-=(s[i+1]-'0');
        }
        ans = abs(ans);
        if(ans%11==0){
            cout<<s<<" is a multiple of 11."<<endl;
        }
        else{
            cout<<s<<" is not a multiple of 11."<<endl;
        }
        
    }
}

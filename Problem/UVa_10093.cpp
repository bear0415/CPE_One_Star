#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    while(getline(cin,s)){
    
       int tmp=0,mx=1;
       long long sum=0;
       for(int i=0;i<s.length();i++){
           if(s[i]>='A'&&s[i]<='Z'){
               tmp=s[i]-'A'+10;
           }
           else if(s[i]>='0'&&s[i]<='9'){
               tmp=s[i]-'0';
               
           }
           else if(s[i]>='a'&&s[i]<='z'){
               tmp=s[i]-'a'+36;
           }
           else{
               continue;
           }
           
           
           if(tmp>mx){
               mx=tmp;
           }
           sum+=tmp;
       }
       int ty=0;
       for(int i=mx+1;i<=62;i++){
           if(sum%(i-1)==0){
               cout<<i<<endl;
               ty=1;
               break;
           }
       }
       if(ty==0){
           cout<<"such number is impossible!"<<endl;
       }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    while(getline(cin,s1)&&getline(cin,s2)){
        int a[26]={0};
        int b[26]={0};
        for(int i=0;i<s1.length();i++){
            if(s1[i]==' ') continue;
            a[s1[i]-'a']++;
        }
        for(int i=0;i<s2.length();i++){
            if(s2[i]==' ') continue;
            b[s2[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(a[i]>0&&b[i]>0){
            for(int j=0;j<min(a[i],b[i]);j++){
                cout<<char(i+'a');
                }
            }
            
        }
        cout<<endl;
    }
}

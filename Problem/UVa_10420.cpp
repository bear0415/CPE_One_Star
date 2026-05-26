#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s, ss;
    cin>>n;
    map<string,int>country;
    while(n--){
       cin>>s;
       getline(cin,ss);
       country[s]++;
       
    }
   
     for (auto m : country){
         cout << m.first << ' ' << m.second << '\n';
     }
    return 0;
}

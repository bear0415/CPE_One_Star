#include<bits/stdc++.h>
using namespace std;


bool cmp(pair<int, char> a, pair<int, char> b) {
    if (a.first != b.first) return a.first > b.first;
    else return a.second < b.second;
}

int main(){
    vector <pair<int, char> > v(26);
    for (int i = 0; i < 26; i++) {
        v[i] = {0, 'A'+i};
    }
    int N;
    string s;
    cin>>N;
    getline(cin,s);
    while(N--){
        getline(cin,s);
        for(int i=0;i<s.size();i++){
            if('A'<=s[i]&&s[i]<='Z'){
                v[s[i]-'A'].first++;
            }
            if('a'<=s[i]&&s[i]<='z'){
                v[s[i]-'a'].first++;
            }
        }
    }
    sort(v.begin(),v.end(),cmp);
    for(auto i:v){
        if(i.first>0) cout<<i.second<<" "<<i.first<<endl;
    }
    return 0;
}

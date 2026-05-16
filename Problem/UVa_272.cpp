#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int w=0;
    while(getline(cin,s)){
        for(int i=0;i<s.length();i++){
        if(s[i]=='"'){
            w++;
            if(w%2==1){
                cout<<"``";
            }
            else {
                cout<<"''";
            }
         }
        else{
            cout<<s[i];
            }
        }
        cout<<endl;
    }
    return 0;
}

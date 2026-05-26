#include<bits/stdc++.h>
using namespace std;

int main(){
   
    string s;
    string a="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    while(getline(cin,s)){
       for(char c:s){
           c=tolower(c);
           
           int index=a.find(c);
           if(index>=2&&index!=string::npos){
               cout<<a[index-2];
            }
       else{
           cout<<c;
            }
       
        }
        cout<<endl;
    }
    
    return 0;
}

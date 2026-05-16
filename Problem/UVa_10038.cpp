#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    
    while(cin>>n){
        vector<int>s(n);
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int a[10000]={0};
        for(int i=0;i<n-1;i++){
            a[abs(s[i+1]-s[i])]=1;
        }
        int b=1;
        for(int i=1;i<=n-1;i++){
            if(a[i]==0){
                b=0;
                break;
            }
            
        }
        if(b==1){
            cout<<"Jolly"<<endl;
        }
        else{
            cout<<"Not jolly"<<endl;
        }
        
    }
    return 0;
}

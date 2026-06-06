#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a,b=0;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        int ans=0;
        for(int j=a;j<=b;j++){
            if(j%2!=0){
                ans+=j;
            }
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
    
}

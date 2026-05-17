#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int cases=0;
    while(cin>>n){
        int ans=1;
        int a[n]={0};
        
        cases++;
        int b[20005]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<1||(i>0&&a[i]<=a[i-1])){
                ans=0;
            }
        }
        int s;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(ans==0){
                    break;
                }
                s=a[i]+a[j];
                if(b[s]==1){
                    ans=0;
                    break;
                }
                else if(b[s]==0){
                    b[s]=1;
                }
            }
        }
        if(ans==0){
            cout<<"Case #"<<cases<<": It is not a B2-Sequence."<<endl<<endl;
        }
        else if(ans==1){
            cout<<"Case #"<<cases<<": It is a B2-Sequence."<<endl<<endl;
        }
        
    }
    return 0;
}

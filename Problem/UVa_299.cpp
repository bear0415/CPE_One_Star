#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int L;
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>L;
        int a[L]={0};
        for(int j=0;j<L;j++){
            cin>>a[j];
        }
        int temp=0;
        int ans=0;
        for(int j=0;j<L-1;j++){
            for(int w=j;w<L;w++){
                if(a[j]>a[w]){
                    swap(a[j],a[w]);
                    ans++;
                }
            }
            
        }
        cout<<"Optimal train swapping takes "<<ans<<" swaps."<<endl;
    }
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;



int main(){
    int T;
    
    cin>>T;
    while(T--){
         int N,p;
    cin>>N>>p;//輸入天數跟政黨數量
    
    int h[3050]={};
    for(int i=0;i<p;i++){
        cin>>h[i];
    }
    int lost=0;
    
    for(int d=1;d<=N;d++){
        if(d%7==6||d%7==0){
            continue;
        }
        bool hh=false;
        for(int i=0;i<p;i++){
            if(d%h[i]==0){
                hh=true;
                break;
            }
        }
        if(hh){
            lost++;
        }
    }
    cout<<lost<<endl;
    }
    return 0;
}

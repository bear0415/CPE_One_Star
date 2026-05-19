#include<bits/stdc++.h>
using namespace std;

int main(){
    
    
    int n;
    string s;
    while(cin>>n&&n!=0){
        int top=1;
    int bottom=6;
    int northface=2;
    int westface=3;
    int southface=5;
    int eastface=4;
        for(int i=0;i<n;i++){
            cin>>s;
        
            if(s=="north"){
            int dtop=southface;
            int dnor=top;
            int db=northface;
            int dsou=bottom;
            int dw=westface;
            int de=eastface;
            top=dtop;
            bottom=db;
            northface=dnor;
            westface=dw;
            southface=dsou;
            eastface=de;
            }
            if(s=="south"){
            int dtop=northface;
            int dnor=bottom;
            int db=southface;
            int dsou=top;
            int dw=westface;
            int de=eastface;
            top=dtop;
            bottom=db;
            northface=dnor;
            westface=dw;
            southface=dsou;
            eastface=de;
            }
            if(s=="east"){
            int dtop=westface;
            int dnor=northface;
            int db=eastface;
            int dsou=southface;
            int dw=bottom;
            int de=top;
            top=dtop;
            bottom=db;
            northface=dnor;
            westface=dw;
            southface=dsou;
            eastface=de;
            }
            if(s=="west"){
            int dtop=eastface;
            int dnor=northface;
            int db=westface;
            int dsou=southface;
            int dw=top;
            int de=bottom;
            top=dtop;
            bottom=db;
            northface=dnor;
            westface=dw;
            southface=dsou;
            eastface=de;
            }
        }
        cout<<top<<endl;
        
    }
}

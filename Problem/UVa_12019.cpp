#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    int m,d;
    while(N--){
        cin>>m>>d;
        for(int i=1;i<m;i++){
            if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
                d+=31;
            }
            else if(i==4||i==6||i==9||i==11){
                d+=30;
            }
            else if(i==2){
                d+=28;
            }
        }
        d=d+5;
        d%=7;
        if(d==1){
            cout<<"Monday";
        }
        else if(d==2){
            cout<<"Tuesday";
        }
        else if(d==3){
            cout<<"Wednesday";
        }
        else if(d==4){
            cout<<"Thursday";
        }
        else if(d==5){
            cout<<"Friday";
        }
        else if(d==6){
            cout<<"Saturday";
        }
        else if(d==0){
            cout<<"Sunday";
        }
        cout<<endl;
    }
    return 0;
}

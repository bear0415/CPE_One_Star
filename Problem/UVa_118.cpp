#include<bits/stdc++.h>
using namespace std;

    int dx[]={0,1,0,-1};
    int dy[]={1,0,-1,0};
    char dc[]={'N','E','S','W'};
    
    int gd(char c){
        if(c=='N')return 0;
        if(c=='E')return 1;
        if(c=='S')return 2;
        if(c=='W')return 3;
        return 0;
    }
    
    bool out[51][51];

int main(){
    int d;
    int mx,my;
    cin>>mx>>my;
    char cd;
    string s;
    int x,y;
    int nx,ny;
    while(cin>>x>>y>>cd){
        d=gd(cd);
        bool lost=false;
        cin>>s;
        for(char i:s){
            if(i=='R'){
                d=(d+1)%4;
            }
            else if(i=='L'){
                d=(d+3)%4;
            }
            else if(i=='F'){
                nx=x+dx[d];
                ny=y+dy[d];
                if(nx<0||ny<0||nx>mx||ny>my){
                    if(!out[x][y]){
                out[x][y]=true;
                lost=true;
                break;
                    }
            }
            else{
                x=nx;
                y=ny;
            }
            }
            
            
        }
        cd=dc[d];
        cout<<x<<" "<<y<<" "<<cd;
        if(lost){
            cout<<" LOST";
        }
        cout<<endl;
        
    }
    return 0;
}

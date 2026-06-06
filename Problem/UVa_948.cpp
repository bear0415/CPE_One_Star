#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long long fib[50];//建立一條新規則
    fib[0]=1;
    fib[1]=2;
    int count =2;
    while(true){
        fib[count]=fib[count-1]+fib[count-2];//費氏數列規則
        
        if(fib[count]>100000000){
            break;
        }
        count++;
    }
    int N;
    cin>>N;
    long long a;
    while(N--){
        cin>>a;
        cout<<a<<" = ";
        
        string result="";
        bool start=false;
        
         if (a == 0) {
            cout << "0 (fib)" << endl;
            continue;
        }

        
        for(int i=count-1;i>=0;i--){
            if(a>=fib[i]){
                start=true;
                cout<<"1";
                a-=fib[i];
                
            }else if(start){//當start變成true之後，便開始印出零
            cout<<"0";
            }
        }
        cout<<" (fib)"<<endl;
    }
    return 0;
}

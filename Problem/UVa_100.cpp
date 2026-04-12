#include<iostream>
using namespace std;

int main(){
    int a,b;
    while(cin>>a>>b){
    cout<<a<<" "<<b<<" ";
    if(a>b){
        int temp;
        temp=b;
        b=a;
        a=temp;
    }
    int ans=0;
    for(int i=a;i<=b;i++){
        int count=1;
        long long j=i;
        while(j!=1){
            if(j%2==0){
                j=j/2;
                count++;
            }else{
                j=3*j+1;
                count++;
            }
        }
        if(count>ans){
            ans=count;
        }
        
    }
    cout<<ans<<endl;
}
    return 0;
}
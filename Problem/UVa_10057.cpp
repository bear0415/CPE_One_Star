#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int n;
    int min;
    
    while(cin>>n){
       vector<int>a(n);
       
        for(int i=0;i<n;i++){
            cin>>a[i];
            
            
        
        }
        sort(a.begin(),a.end());
        int m1=a[n/2];
        int m2=a[(n-1)/2];
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]==m1||a[i]==m2){
                count++;
            }
            
            
        }
        int d;
            d=m1-m2+1;
            cout<<m2<<" "<<count<<" "<<d<<endl;
        
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int n;
    int min;
    cin>>N;
    while(N--){
        int a[500]={0};
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            
            
        
        }
        sort(a,a+n);
        int median=a[n/2];
        int d=0;
        for(int i=0;i<n;i++){
            d+=abs(a[i]-median);
        }
        cout<<d<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b,x,y,p,q;
    int count=0;
    cin>>a>>b>>x>>y>>p>>q;
    int arr1[8]={a,-a,a,-a,b,b,-b,-b};
    int arr2[8]={b,-b,-b,b,a,-a,a,-a};
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
        if((arr1[i]+x==arr1[j]+p)&&(arr2[i]+y==arr2[j]+q))
        count++;
    }
    }
    if(a==b)  count/=4;
    cout<<count<<endl;
    }
}
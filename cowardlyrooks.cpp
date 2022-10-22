#include<iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int main(){
   int t,n,m;
   cin>>t;
   for(int i=0;i<t;i++){
    cin>>n;
    cin>>m;
    int a[m][2];
    for(int j=0;j<m;j++){
        for(int k=0;k<2;k++){
        cin>>a[j][k];}
    }
    if(n>m){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    cout<<endl;
   }
 
 
 
 
    return 0;
}
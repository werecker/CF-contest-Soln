#include<iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int main(){
   long long t,n,m;
   cin>>t;
   for(int i=0;i<t;i++){
    cin>>n;
  
   long long a[n];
    for(int j=0;j<n;j++){
        
        cin>>a[j];
    }long long b[n];
    for(int j=0;j<n;j++){
        
        cin>>b[j];
    }
   long long w=0;
    long long o=0;
    int z;
    for(int j=0;j<n;j++){
        
        w+=b[j];
        w+=a[j];
    }
     for(int j=0;j<n;j++){
        if(o<b[j]){
            o=b[j];
            z=j;
        }
    }
    
    cout<<w-o;
    cout<<endl;
   }
 
 
 
 
    return 0;
}
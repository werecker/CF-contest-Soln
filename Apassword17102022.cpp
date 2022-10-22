#include<iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int fac(int k){
    int w=1;
    for(int i=1;i<=k;i++){
        w*=i;
    }
    return w;
}
int main(){
   int t,n,k,m;
   cin>>t;
   for(int i=0;i<t;i++){
       cin>>n;
      
      
       int a[n];
       
       for(int j=0;j<n;j++){
           cin>>a[j];
       }
       k=10-n;
     
      cout<<(fac(k)/(fac(k-2)*fac(2)))*6;
       cout<<endl;
  
}
 
 
    return 0;
}
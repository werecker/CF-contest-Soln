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
       int y=0;
       y=0;
       
       for(int j=1;j<=n;j++){
           for(int k=1;k<=m;k++){
               if(n-j<2&&m-k<2&&j-1<2&&k-1<2){
                   cout<<j<<" "<<k;
                   y=1;
                   break;
               }
           }
           if(y==1){
               break;
           }
       }
       if(y==0){
           cout<<n<<" "<<m;
       }
       end:
       
       cout<<endl;
  }
 
 
 
    return 0;
}
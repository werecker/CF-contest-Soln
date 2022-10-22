#include <iostream>
#include <bits/stdc++.h>
 
#include <algorithm>
using namespace std;
 
 
int main() {
	// your code goes here
   int t;
   int n;
   
   cin>>t;
   for(int i=0;i<t;i++){
       cin>>n;
       if(n%2==0){
       for(int i=2;i<=n-2;i++){
           cout<<n-i<<" ";
       }
           cout<<1<<" "<<n-1<<" "<<n<<endl;
           
       }
       else if((n-2)%3==0){
           for(int i=1;i<=n;i++){
               cout<<i<<" ";
           }
           cout<<endl;
       }
       else if(n%3==0){
           for(int i=1;i<=n;i++){
               if(i==1||i==2||i==n||i==n-3){
                   continue;
               }
           cout<<i<<" ";
       }
       cout<<1<<" "<<2<<" "<<n-3<<" "<<n<<endl;
           
       }
       else{
           for(int i=1;i<=n-4;i++){
           cout<<i<<" ";
       }
       cout<<n-2<<" "<<n-3<<" "<<n-1<<" "<<n<<endl;
           
       }
       
      
       }
      
      return 0;
	}
    
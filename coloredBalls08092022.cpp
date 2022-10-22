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
      int a[n];
      for(int j=0;j<n;j++){
          cin>>a[j];
      }
      int min =0;
      int l;
      for(int j=0;j<n;j++){
          if(min<=a[j]){
              min=a[j];
              l=j+1;
          }
         
      }
     cout<<l<<endl;
       }
      
      return 0;
	}
    
 
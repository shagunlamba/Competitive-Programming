//https://codeforces.com/contest/122/problem/A
#include<iostream>
#include <string>
#include<queue>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;


int main()
{
  int arr[]={4,7,44,47,74,77,444,447,474,744,774,777};
  int size=12;
 int n ;
 cin>>n;
int no=n;
int count=0;
int noofdigit=0;
 while(no!=0)
  {
    int lastdigit= no %10;
     noofdigit++;
    if(lastdigit==4||lastdigit==7)
     count++;
    no=no/10;
  } 
if(count==noofdigit)
{
  cout<<"YES";
  return 0;
}

 for(int i=0;i<size;i++)
 {
   if(n%arr[i]==0)
   {
     cout<<"YES";
     return 0;
   }

 }


cout<<"NO"; 


  return 0;
}
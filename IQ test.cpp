//https://codeforces.com/contest/25/problem/A
#include<iostream>
#define ll long long
#include<limits>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
 
int main()
{
int n;
cin>>n;
int ino=0;
int ine=0;
int counte=0,counto=0;
int *arr= new int[n];
for(int i=0;i<n;i++)
 {
   cin>>arr[i];
   if(arr[i]%2==0)
   {
     ine=i;
     counte++;
   }
   else
   { 
     ino=i;
     counto++;
   }
 }

 if(counte>counto)
 {
   cout<<ino+1<<endl;
 }
 else
 {
  cout<<ine+1<<endl ;
 }

 return 0;
}
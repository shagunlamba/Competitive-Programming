// https://codeforces.com/contest/427/problem/A
#include<iostream>
#define ll long long
#include<string.h>
#include<queue>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<unordered_map>
using namespace std;
 
int main()
{
 int n;
 cin>>n;
 int *arr= new int[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];

 int sumofofficers=0;
 int noofcrimes=0;
 for(int i=0;i<n;i++)
 {
   if(arr[i]==-1)
   {
     noofcrimes++;
    //  cout<<"hi";
     if(sumofofficers>0)
     {
       sumofofficers-=1;
       noofcrimes=noofcrimes-1;
     }
   }
   else
   {
     sumofofficers+=arr[i];
   }
 }

cout<<noofcrimes;
return 0;
}
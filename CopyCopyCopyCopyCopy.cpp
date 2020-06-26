//https://codeforces.com/contest/1325/problem/B
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
  int t;
  cin>>t;
  while(t!=0)
  {
   unordered_map<int,bool>m;

  int n;
  cin>>n;

  int *arr= new int[n];
 for(int i=0;i<n;i++)
 {
  cin>>arr[i];
  m[arr[i]]=true;
  }
 cout<<m.size()<<endl;
 
 t--;
 }

return 0;
}
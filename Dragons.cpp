//https://codeforces.com/contest/230/problem/A
#include<iostream>
#define ll long long
#include<limits>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<utility>
using namespace std;
 
int main()
{
  vector< pair <int,int> > v; 
  
  int S,n;
  cerr<<"Enter Kritos strenght: ";
  cin>>S;
  cerr<<"Enter the no of dragons: ";
  cin>>n;
  
  cerr<<"Enter the strength of dragon and points gained on defeating: ";
  for(int i=0;i<n;i++)
  {
    int x,y;
    cin>>x>>y;
    pair<int,int> a(x,y);
    v.push_back(a);
  }
 sort(v.begin(),v.end());

  // for(int i=0;i<n;i++)
  // {
  //   cout<<v[i].first<<" "<<v[i].second<<endl;
  // }

int count=0;
int i=0;
while(i<n)
{
  if(S>v[i].first)
  {
    S=S+v[i].second;
    count++; 
  }
  i++;
}
 //cout<<"S"<<S<<endl;
if(v.size()==count)
 cout<<"YES";
else
 cout<<"NO";
 
 return 0;
}
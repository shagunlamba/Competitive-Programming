//https://codeforces.com/contest/1365/problem/B
#include<iostream>
#include<limits>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<cmath>
#include<math.h>
#include<iomanip>  
#include<deque> 
#include<string> 
#include<string.h>
#include<unordered_map>
#include<utility>
#define ll long long
#define tc(t) long long t; cin >> t; while(t--)
#define V vector
#define Vp vector< pair<int,int> >
#define pb push_back
#define UM unordered_map
#define IT iterator
#define F first
#define S second
#define PQ priority_queue
#define _FI ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MOD = 1e9+7;
const ll INF = INT_MAX;
const ll _INF= INT_MIN;
using namespace std;


int main()
{
  _FI
 
tc(t)
{
  int n;
  cin>>n;
  int c[n];
  int *a= new int[n];
  set<int> b;
  bool flag=true;
  for(int i=0;i<n;i++)
    {
      cin>>a[i];
      c[i]=a[i];
    }
  for(int i=0;i<n;i++)
    {
      int x;
      cin>>x;
      b.insert(x);
    }
  
  if(n==1)
  {
    cout<<"Yes"<<endl;
    continue;
  }
  if(b.find(1)!=b.end() && b.find(0)!=b.end())
  {
    flag=true;
  }
  else
  {
    sort(c,c+n);
    for(int i=0;i<n;i++)
    {
      if(a[i]!=c[i])
      {
        flag=false;
        break;
      }
    }
  }
  if(flag==true)
  {
    cout<<"Yes"<<endl;
  }
  else
  {
    cout<<"No"<<endl;
  }


  delete []a;
 }
return 0;
}
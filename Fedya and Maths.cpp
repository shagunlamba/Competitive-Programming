//https://codeforces.com/contest/456/problem/B
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
#define _I ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MOD = 1e9+7;
const ll INF = INT_MAX;
const ll _INF= INT_MIN;
using namespace std;


int main()
{
 _I 
 
string n;
cin>>n;

if(n.length()==1)
{
  if(n =="0")
  {
    cout<<4;
  }
  else if(n=="4"|| n=="8")
  {
    cout<<4;
  }
  else
  cout<<0;
}
else
{
if(n.length()>1)
{
  int x= n.length();
  string sub= n.substr(x-2);
  int q= stoi(sub);
  if(q%4==0)
  {
    cout<<4;
  }
  else
  {
    cout<<0;
  }
}

}

return 0; 
}
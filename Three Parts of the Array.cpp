//https://codeforces.com/contest/1006/problem/C
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
#define endl "\n"
#define PQ priority_queue
#define _FI ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MOD = 1e9+7;
const ll INF = INT_MAX;
const ll _INF= INT_MIN;
using namespace std;


int main()
{
  _FI

  ll n;
  cin>>n;
  ll *arr= new ll[n];
  for(ll i=0;i<n;i++)
    cin>>arr[i];
  if(n==1)
  {
    cout<<0<<endl;
    return 0;
  }
  priority_queue<ll> maxpq;

  ll i=0;
  ll j=n-1;
  ll sumi=0;
  ll sumj=0;
  sumi=sumi+arr[i];
  sumj=sumj+arr[j];
  // int k=1;
  while(i<j)
  {
    // cout<<"ITeration"<<k<<endl;
    // k++;
    // cout<<sumi<<endl;
    // cout<<sumj<<endl;
    if(sumi==sumj)
    {
      maxpq.push(sumi);
      i++;
      sumi=sumi+arr[i];
      j--;
      sumj=sumj+arr[j];
    }
    else if(sumi<sumj)
    {
      i++;
      sumi=sumi+arr[i];
    }
    else if(sumi>sumj)
    {
      j--;
      sumj=sumj+arr[j];
    }
  }
  if(maxpq.empty()==true)
  {
    cout<<0<<endl;
  }
  else
  {
    cout<<maxpq.top()<<endl;
  }

	return 0;
}
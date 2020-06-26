//https://codeforces.com/contest/1341/problem/B
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
    ll n,k;
     cin>>n>>k;
    ll *arr= new ll[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    bool *peak= new bool[n];
    memset(peak,false,n);
    for(int i=1;i<n-1;i++)
    {
      if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
      {
        peak[i]=true;
      } 
    }
    int index=0;
    int count=0;
    int max=0;
    map<ll,bool> mp;
    for(int i=0;i<k;i++)
    {
      if(peak[i]==true && i+1<k)
      {
        count++;
      }
    }
    // cout<<"Count"<<count<<endl;
    if(count!=0)
    {
      mp[count]=true;
      max=count;
    }
    for(int i=1;i+k-1<n;i++)
    { 
      // cout<<"Iteration "<<i<<endl;
      ll prevC= count;
      if(peak[i]==true)
      {
        count--;
      }
      if(peak[k+i-2]==true)
      {
        count++;
      }
      if(count>prevC)
      {
       if(mp.count(count)==0)
       {
         if(count> max)
         {
           max=count;
           mp[max]=true;
           index=i;
         }
       }
      }
    }
    cout<<max+1<<" "<<index+1<<"\n";
    delete []arr;
  }
  
	return 0;
}
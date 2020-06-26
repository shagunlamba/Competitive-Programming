//https://codeforces.com/contest/961/problem/B
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
 
 int n,k;
 cin>>n>>k;
 int *a= new int[n];
 int *b= new int[n];
 int x=1;
 ll sum1=0;
 ll res=0;

 for(int i=0;i<n;i++)
  {
    cin>>a[i];
    sum1+=a[i];
  }
 for(int i=0;i<n;i++)
  {
    cin>>b[i];
    if(b[i]==1)
    {
      res+=a[i];
      a[i]=0;
    }
    x=x*b[i];
  }

  if(x==1)
  {
    cout<<sum1<<"\n";
    return 0;
  }
 vector<ll> prefixsum(n,0);
 prefixsum[0]=a[0];
 for(int i=0;i<n;i++)
 {
   if(i)
   {
     prefixsum[i]=a[i]+prefixsum[i-1];
   }
 }
priority_queue<ll> pq;
ll ans=0;
int i=0;
ll sum=0;


while(i+k-1<n)
{
  if(i==0)
   sum=prefixsum[i+k-1];
  else
   sum=prefixsum[i+k-1]-prefixsum[i-1];
  pq.push(sum);
  i++;
}
 
cout<<res+pq.top()<<endl;

return 0;
}
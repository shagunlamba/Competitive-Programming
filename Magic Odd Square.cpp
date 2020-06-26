//https://codeforces.com/contest/710/problem/C
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
ll n;
cin>>n;
if(n==1)
{
  cout<<1;
  return 0;
}
UM<int,int> map;
for(int i=1;i<n-1;i++)
{
  map[i]=0;
}
int arr[n][n];
for(int i=0;i<n;i++)
{
  for(int j=0;j<n;j++)
  {
    arr[i][j]=-1;
  }
}

int even=2;
int odd=1;
ll count=0;
for(int i=0;i<n;i++)
{
  for(int j=0;j<n;j++)
  {
    if((i==j) && i!=(n-1)/2 )
    {
      arr[i][j]=even;
      if(map.count(i)!=0)
       map[i]++;
      even+=2;
      count++;
    }
    else if((i + j) == (n - 1) && i!=(n-1)/2 )
    {
      arr[i][j]=even;
      if(map.count(i)!=0)
       map[i]++;
      even+=2;
      count++;
    }
  }
}
if(count<(n*n/2))
{
int i=0;
for(int j=1;j<n-1;j++)
{
  if(j!=(n-1)/2)
  {
      arr[i][j]=even;
      even+=2;
      count++;
  }
}
i=n-1;
for(int j=1;j<n-1;j++)
{
  if(j!=(n-1)/2)
  {
      arr[i][j]=even;
      even+=2;
      count++;
  }
}
}
if(count<(n*n/2))
{
  int s=0;
  int k= 1;
  for(int j=0;j<n/2;j++)
  {
    if(count==(n*n/2))
    {
      break;
    }
    
    for(int i=j+1;i<n/2;i++)
    {
      if(count==(n*n/2))
    {
      break;
    }
      int comp=n-i-1;
      arr[i][s]=even;
         even+=2;
         arr[i][n-k]=even;
         even+=2;
         arr[comp][s]=even;
         even+=2;
         arr[comp][n-k]=even;
         even+=2;
         count+=4;
    }
    s++;
    k++;
  }
}

for(int i=0;i<n;i++)
{
  for(int j=0;j<n;j++)
  {
    if(arr[i][j]==-1)
    {
      arr[i][j]=odd;
      odd+=2;
    }
  }
}
for(int i=0;i<n;i++)
{
  for(int j=0;j<n;j++)
  {
    cout<<arr[i][j]<<" ";
  }
  cout<<"\n";
}
 
return 0;
}
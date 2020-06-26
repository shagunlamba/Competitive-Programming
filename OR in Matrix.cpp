//https://codeforces.com/contest/486/problem/B
#include<iostream>
#include<limits>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
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
#define pb push_back
#define UM unordered_map
#define IT iterator
#define F first
#define S second
#define PQ priority_queue
#define _I ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MOD = 1e9 + 7;
const ll INF = INT_MAX;
const ll _INF= INT_MIN;
using namespace std;



int main()
{
_I

ll m,n;
cin>>m>>n;
// int arr[m][n];
int **arr= new int*[m];
for(int i=0;i<m;i++)
{
  arr[i]=new int[n];
  for(int j=0;j<n;j++)
  {
    cin>>arr[i][j];
    // cout<<arr[i][j];
  }
}
int a[m][n];
for(int i=0;i<m;i++)
{
  for(int j=0;j<n;j++)
  {
    a[i][j]=1;
  }
}

for(int i=0;i<m;i++)
{
  for(int j=0;j<n;j++)
  {
    if(arr[i][j]==0)
    {
      // int currrow=i;
      // int currcol=j;
      
      // for(int k=0;k<n;k++)
      // {
      //   a[i][k]=0;
      // }
      // for(int k=0;k<m;k++)
      // {
      //   a[k][j]=0;
      // }
        
        int k=0;
				for(k=0; k<m; k++)
				a[k][j]=0;
				for(k=0; k<n; k++)
				a[i][k]=0;
    }
  }
}

for(int i=0;i<m;i++)
{
  for(int j=0;j<n;j++)
  {
      int count=0;
     for(int k=0;k<m;k++)
      {
        if(a[k][j]==1)
        {
          count++;
        }
      }
      for(int t=0;t<n;t++)
      {
        if(a[i][t]==1)
        {
          count++;
        }
      }
      if(count>0)
      {
        if(arr[i][j]!=1)
        {
          cout<<"NO";
          return 0;
        }
      }
      else
      {
        if(arr[i][j]==1)
        {
          cout<<"NO";
          return 0;
        }
      }

  }
}


cout<<"YES"<<endl;
for(int i=0;i<m;i++)
{
  for(int j=0;j<n;j++)
  {
    cout<<a[i][j]<<" ";
  }
  cout<<endl;
}


return 0;
}
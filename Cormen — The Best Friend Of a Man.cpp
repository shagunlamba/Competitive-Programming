// https://codeforces.com/contest/732/problem/B
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
int n,k;
cin>>n>>k;

ll min=0;
int *arr= new int[n];
for(int i=0;i<n;i++)
  cin>>arr[i];


for(int i=1;i<n;i++)
{
  int sum=arr[i]+arr[i-1];
  if(sum<k)
  {
    min=min+k-sum;
    arr[i]=arr[i]+(k-sum); 
  }
}


cout<<min<<endl;
for(int i=0;i<n;i++)
{
  cout<<arr[i]<<" ";
}

return 0;
}
//https://codeforces.com/contest/467/problem/B
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

unsigned int countSetBits(int n) 
    { 
        unsigned int count = 0; 
        while (n) { 
            n &= (n - 1); 
            count++; 
        } 
        return count; 
    } 


int main()
{
_I

ll n,m,k;
cin>>n>>m>>k;

int *arr = new int[m+1];
int x;
for(int i=0;i<m+1;i++)
{
  cin>>arr[i];
  if(i==m)
  {
    x=arr[i];
  }
}

ll count=0;

for(int i=0;i<m;i++)
{
  int y=arr[i]^x;
  int a=countSetBits(y);
  if(a<=k)
  {
    count++;
  }
}
cout<<count<<endl;
return 0;
}
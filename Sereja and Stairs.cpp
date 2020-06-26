//https://codeforces.com/contest/381/problem/B
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
int n;
cin>>n;
UM<int,int> map;
int *arr= new int[n];
for(int i=0;i<n;i++)
 {
   cin>>arr[i];
   map[arr[i]]++;
 }
 
 if(map.size()==n)
 {
   cout<<n<<endl;  
   sort(arr,arr+n,greater<int>());
   for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
 }

else
{
  sort(arr,arr+n,greater<int>());
  int max= *max_element(arr,arr+n);
  deque<int> q;
  q.push_back(max);
  int i=0;
  while(i<n)
  {
    if(arr[i]==max)
    {
      i++;
      continue;
    }
    else
    {
      int x= arr[i];
      int f= map[arr[i]];
      if(f>=2)
      {
        q.push_back(arr[i]);
        q.push_front(arr[i]);
      }
      else
      {
        q.push_back(arr[i]);
      }
       i=i+f;
    }
  }
  cout<<q.size()<<endl;
  auto it=q.begin();
  while(it!=q.end())
  {
    cout<<*it<<" ";
    it++;
  }
}
return 0;
}
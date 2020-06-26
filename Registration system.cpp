//https://codeforces.com/contest/4/problem/C
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
UM<string,int> map;

for(int i=0;i<n;i++)
{
  string s;
  cin>>s;
  if(map.count(s)>0)
  {
    int num=map[s];
    num++;
    string str= s+ to_string(num);
    map[s]=num;
    // map[str]=num;
    cout<<str<<endl;
  }
  else
  {
    map[s]=0;
    cout<<"OK"<<endl;
  }

}

return 0;
}
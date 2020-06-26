//https://codeforces.com/contest/988/problem/C
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
  int k;
  cin>>k;
  vector<pair<int, pair<int, int>>> a;
  for(int i=0;i<k;i++)
  {
    int n;
    cin>>n;
    vector<int> v(n);
    int sum=0;
    for(int j=0;j<n;j++)
    {
      cin>>v[j];
    }
    sum=accumulate(v.begin(),v.end(),0);
    for(int j=0;j<n;j++)
    {
      a.pb(make_pair(sum-v[j],make_pair(i,j)));
    }
  }

  stable_sort(a.begin(),a.end());
  for (int i = 0; i < int(a.size()) - 1;i++) 
  {
		if (a[i].first == a[i + 1].first && (a[i].second.first != a[i + 1].second.first)) {
			cout << "YES" << endl;
			cout << a[i + 1].second.first + 1 << " " << a[i + 1].second.second + 1 << endl;
			cout << a[i].second.first + 1 << " " << a[i].second.second + 1 << endl;
			return 0;
		}
	}
	
	cout << "NO\n";

	return 0;
}
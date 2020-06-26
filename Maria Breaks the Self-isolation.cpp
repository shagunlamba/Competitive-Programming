//https://codeforces.com/contest/1358/problem/B
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
	ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
		ll n, i;
		cin>>n;
		vector<ll> a(n);
		for(i = 0; i<n; i++){
			cin>>a[i];
		}
		ll gathered = 0;
		sort(a.begin(), a.end());
		int check[100001] = {0};
		for(i = 0; i<n; i++){
			if(a[i]<=(i+1)){
				check[i+1] = 1;
			}
		}
		ll posi = 0;
		for(i = 0; i<100001; i++){
			if(check[i] == 1){
				posi = i;
			}
		}
		cout<<(posi+1)<<endl;
	}
	return 0;
}
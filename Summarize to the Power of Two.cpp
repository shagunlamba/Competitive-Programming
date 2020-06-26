//https://codeforces.com/contest/1005/problem/C
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
	ll n, i;
	cin>>n;
	vector<ll> a(n);
	unordered_set<ll> nums;
	map<ll, ll> count;
	for(i = 0; i<n; i++){
		cin>>a[i];
		count[a[i]]++;
		nums.insert(a[i]);
	}
	ll j;
	vector<ll> u;
	ll power = 1;
	while(pow(2, power)<=2000000000){
		u.push_back(pow(2, power));
		power++;
	}
	ll cnt = 0;
	vector<ll>::iterator it;
	for(i = 0; i<n; i++){
		bool flag = false;
		for(it=u.begin(); it!=u.end(); it++){
			if(nums.find((*it-a[i])) != nums.end()){
				if((*it-a[i]) == a[i] && count[a[i]]>1){
					flag = true;
				}else if((*it-a[i]) != a[i]){
					flag = true;
				}else{
					flag = false;
				}
			}
			if(flag){
				break;
			}
		}
		if(!flag){
			cnt++;
		}
	}
	if(n == 1){
		cout<<1<<endl;
		return 0;
	}
	cout<<cnt<<endl;
	return 0;
}
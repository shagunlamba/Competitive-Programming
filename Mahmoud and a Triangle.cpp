//https://codeforces.com/contest/766/problem/B
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
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++)
    cin >> arr[i];
    sort(arr,arr+n);
    for (int i=1;i<n-1;i++)
    {
        if (arr[i-1]+arr[i]>arr[i+1])
        {
          // cout<<arr[i];
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

return 0;
}
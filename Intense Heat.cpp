// https://codeforces.com/problemset/problem/1003/C
#include<iostream>
#define ll long long
#include<limits>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<math.h>
#include <iomanip>  
#include <deque> 
#include<string> 
#include<string.h>
#define V vector
#define UM unordered_map
#define IT iterator
#define F first
#define S second
#define PQ priority_queue
#define tc(t) long long t; cin >> t; while(t--)
#include<unordered_map>
#include<utility>
#define _I ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MOD = 1e9 + 7;
const ll INF = INT_MAX;
const ll _INF= INT_MIN;
using namespace std;


int main()
{ 
  _I
priority_queue<double> pq;
int n,k;
cin>>n>>k;
int *arr= new int[n];
int sum=0;
for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    sum+=arr[i];
  }

double ekvalue= (1.0*sum)/n;
// cout<<ekvalue;
pq.push(ekvalue);

for(int i=k;i<n;i++)
{
  int start=0;
  int sum=0;
  int maxSum=0;

  for(int end=0;end<n;end++)
  {
    sum=sum+arr[end];
    if(end>=i-1)
    {
      maxSum=max(sum,maxSum);
      sum=sum-arr[start];
      start++;
    }
  }
  double ins=(1.0*maxSum)/i;
  pq.push(ins);
}

cout<<setprecision(15)<<pq.top()<<endl;

 return 0;
}
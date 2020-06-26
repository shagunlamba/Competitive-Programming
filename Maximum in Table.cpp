//https://codeforces.com/contest/509/problem/A
#include<iostream>
#define ll long long
#include<string.h>
#include<queue>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<unordered_map>
using namespace std;


int main()
{

int n;
cin>>n;
int **arr= new int*[n];

for(int i=0;i<n;i++)
{ 
  arr[i]=new int[n];
  for(int j=0;j<n;j++)
  {
    arr[i][j]=1;
  }
}

for(int i=1;i<n;i++)
{
  for(int j=1;j<n;j++)
  {
    arr[i][j]=arr[i-1][j]+arr[i][j-1];
  }
}

cout<<arr[n-1][n-1];

return 0;
}
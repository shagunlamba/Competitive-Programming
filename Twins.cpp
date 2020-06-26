//https://codeforces.com/contest/160/problem/A
#include<iostream>
#include <string>
#include<queue>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
  priority_queue<int> maxpq;
  priority_queue<int,vector<int>,greater<int>> minpq;

  int n;
  cin>>n;

  int sumTotal=0;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    sumTotal+=x;
    maxpq.push(x);
    minpq.push(x);
  }

  int sumofvalues=maxpq.top();
  sumTotal= sumTotal - sumofvalues;
  maxpq.pop();
  int countofcoins=1;

  while(!minpq.empty() && !maxpq.empty() && sumTotal >= sumofvalues )
  {
    int x= maxpq.top();
   sumofvalues=sumofvalues+x;
   maxpq.pop();
   countofcoins++;
   sumTotal= sumTotal - x;
  }
  
  cout<<countofcoins;
  
  return 0;
}
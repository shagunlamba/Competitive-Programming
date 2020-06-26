//https://codeforces.com/contest/508/problem/B
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

string s;
cin>>s;

int n;
n=s.length();

int i=n-2;
int lastoccur=-1;
int lastindex=n-2;
//first occur
bool flag=false;
while(i!=-1)
{
string sub= s.substr(i,1);
int myint= stoi(sub);
if(myint%2==0)
 {
  flag=true;
  lastoccur= myint;
  lastindex=i;
  break;
 }

i--;
}

string sub= s.substr(n-1,1);
int lastdigit= stoi(sub);

if(flag==false)
{
  cout<<-1;
  return 0;
}
else
{
  bool f=false;
  int i=0;

  while(i<n-1)
  {
    string sub= s.substr(i,1);
    int myint= stoi(sub);
    
    if(myint%2==0)
    {
      if(lastdigit>myint)
      {
      swap(s[n-1],s[i]);
      f=true;
      break;
      }
    }
    i++;
  }
  if(f==false)
  {
    swap(s[n-1],s[lastindex]);
  }

}
cout<<s<<endl;


return 0;
}
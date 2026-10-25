#include <bits/stdc++.h>
#define ll long long 
#define ld long double 
using namespace std;
ll n,k;
ll a[int(1e6)];
ll b[int(1e6)];
ll snt[int(1e6)];
void print()
{
   for(ll i=1;i<=k;i++)
   {
    cout<<a[i]<<" ";
   }
   cout<<"\n";
}
void backtracking(ll i)
{
    for(ll j=a[i-1]+1;j<=n-k+i;j++)
    {
        a[i]=j;
        if(i==k) print();
        else backtracking(i+1);
    }
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>k;
    backtracking(1);
}
#include<bits/stdc++.h> 
#include<iomanip>
#define ll long long 
#define int ll 
using namespace  std; 

// sum of last digit of two numbers. 

void solve() 
{
   int a,b ; cin >> a >> b; 
   int lastOfFirst = a % 10 ; 
   int lastOfSecond = b % 10 ; 
   cout << lastOfFirst + lastOfSecond ; 
}

int32_t main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
    #endif 

    solve(); 
}
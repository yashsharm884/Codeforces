#include<bits/stdc++.h> 
#define ll long long 
using namespace  std; 

void solve() 
{
    int a,b ;      cin >> a >> b;   
    int minimum = min(a,b); 

    if(minimum % 2 == 0) 
    {
        cout << "Malvika"; 
    }
    else 
    {
        cout << "Akshat" ; 
    }
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
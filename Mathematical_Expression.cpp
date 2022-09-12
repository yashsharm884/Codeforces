#include<bits/stdc++.h> 
#include<iomanip>
#define ll long long 
#define int ll 
using namespace  std; 

// ICPC Assiut University Community 

void solve() 
{   
    int a; cin >> a ;              // 5 
    char ch ; cin >> ch ;         // +
    int b ; cin >> b;            // 10 
    char q ;  cin >> q; 
    int c; cin >> c ; 

    if(ch == '+') 
    {
        if(a+b == c) 
        {
            cout << "Yes" ; 
        }
        else 
        {
            cout << a+b; 
        }
    }
    if(ch == '-') 
    {
        if(a-b == c) 
        {
            cout << "Yes" ; 
        }
        else 
        {
            cout << a-b; 
        }
    }
    if(ch == '*') 
    {
        if(a*b == c) 
        {
            cout << "Yes" ; 
        }
        else 
        {
            cout << a*b; 
        }
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

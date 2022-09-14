#include<bits/stdc++.h> 
#define ll long long 
using namespace  std; 

void solve() 
{
    double a, b ; cin >> a >> b ;  

    if(a > 0 && b < 0) 
    {
        cout << "Q4" ; 
    }
    else if(a > 0 && b > 0)
    {
        cout << "Q1" ; 
    }
    else if(a < 0 && b > 0) 
    {
        cout << "Q2" ; 
    }
    else if(a < 0 && b < 0)
    {
        cout << "Q3" ; 
    }
    else if(a == 0 && b == 0)
    {
        cout << "Origem" ;
    }
    else if (a == 0 && b != 0) 
    {
        cout << "Eixo Y" ; 
    }
    else if(a != 0 && b == 0) 
    {
        cout << "Eixo X" ; 
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
#include<bits/stdc++.h> 
#include<iomanip>
#define ll long long 
#define int ll 
using namespace  std; 

// ICPC Assiut University Community

// Given a number X. Determine in which of the following
// intervals the number X belongs to:

// [0,25], (25,50], (50,75], (75,100]

// if X does not belong to any of the above intervals print "Out of Intervals".

void solve() 
{   
    double n; cin >> n;  

    if(n >= 0 && n <= 25 ) 
    {
        cout << "Interval [0,25]" ; 
    }
    else if(n > 25 && n <= 50) 
    {
        cout << "Interval (25,50]" ;  
    }
    else if(n > 50  && n <= 75)  
    {
        cout << "Interval (50,75]" ; 
    }
    else if(n > 75 && n <= 100)  
    {
        cout << "Interval (75,100]" ;  
    }
    else 
    {
        cout << "Out of Intervals" ; 
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

#include<bits/stdc++.h> 
#include<iomanip>
#define ll long long 
#define int ll 
using namespace  std; 

// ICPC Assiut University Community

void solve() 
{   
    int a,b, c; cin >> a >> b >> c; 

    int minimum = min(a,min(b,c)) ; 
    int maximum = max(a,max(b,c)) ;

    int sum = a + b + c; 
    int middle = sum - minimum - maximum ; 

    cout << minimum << endl << middle << endl << maximum << endl << endl; 
    cout << maximum << endl << minimum << endl << middle << endl; 
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

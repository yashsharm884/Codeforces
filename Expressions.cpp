#include<bits/stdc++.h> 
#define ll long long 
#define int ll 
using namespace  std; 

void solve() 
{
   int a,b,c; cin >> a >> b >> c; 
   int first = a + (b*c); 
   int sum = a+b+c; 
   int second = a * (b+c); 
   int third = a*b*c; 
   int fourth = (a+b)*c ; 

   int maximum = max(sum,max(max(first,fourth),max(second,third))) ; 
   cout << maximum; 
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
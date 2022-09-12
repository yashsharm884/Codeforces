#include<bits/stdc++.h> 
#define ll long long 
using namespace  std; 

void solve() 
{
   int a; cin >> a ; 
   char c; cin >> c ;
   int b ; cin >> b; 

   if(c == '+') 
   {
        cout << a+b; 
   }
   else if(c == '-') 
   {
        cout << a-b ; 
   }
   else if(c == '*')
   {
        cout << a * b;  
   }
   else 
   {
        cout << a/b ; 
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
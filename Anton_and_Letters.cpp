#include<bits/stdc++.h> 
#include<iomanip>
#define ll long long 
#define int ll 
using namespace  std; 


void solve() 
{
   string s; 
   getline(cin,s) ; 
   // we are using getline because we need to count space, If we use cin 
   //then it would not count spaces and { } brackets and wouldn't take any 
   // argument from there. 

    set<char> k; 

   for(int i = 0 ; i < s.length(); i++) 
   {
    if(isalpha(s[i])) 
    {
        k.insert(s[i]) ; 
    }
   }

   cout << k.size() ; 
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
#include<bits/stdc++.h> 
#include<iomanip>
#define ll long long 
#define int ll 
using namespace  std; 

// ICPC Assiut University Community

void solve() 
{
    int intputDays ; cin >> intputDays; 
    int year = intputDays / 365;   
    intputDays  = intputDays - 365*year ;  // 400 - 365*1 = 35 Days.  
    int months = intputDays / 30 ;   // 35/30  = 1 month 
    intputDays = intputDays - 30* months ; // 35 -30*1 = 5 Days. 
    
    cout << year << " years" << endl; 
    cout << months << " months" << endl ;
    cout << intputDays << " days" << endl; 
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
#include<bits/stdc++.h> 
#include<iomanip>
#define ll long long 
#define int ll 
using namespace  std; 

void solve() 
{   
    double num1,num2;       //  5 / 2 = 2
	cin>>num1>>num2;
	double result = num1/num2; 
    
	cout<<"floor "<<num1<<" / "<<num2<<" = "<<floor(result)<<endl;
	cout<<"ceil "<<num1<<" / "<<num2<<" = "<<ceil(result)<<endl;
	cout<<"round "<<num1<<" / "<<num2<<" = "<<round(result)<<endl;
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
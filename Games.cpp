#include<bits/stdc++.h> 
using namespace std;

void solve() 
{
    int n, counter = 0;
	cin >> n;
 
	vector<int>home(n), guest(n);
 
	for (int i = 0; i < n; i++)
	{
		cin >> home[i] >> guest[i];
	}

 // Two pointer approach. 

	for (int i = 0, j = n - 1;  i < n; )
	{
		if (home[i] != guest[j])
		{
			if (j != 0)
				j--;
			else   // j == 0 here 
			{
				j = n - 1;
				i++;
			}
		}
		else  // home[i] == guest[j] 
		{
			counter++;
            
			if (j != 0)
				j--;
			else  // j == 0 
			{
				j = n - 1;
				i++;
			}
		}
	}
 
	cout << counter;
}


int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
    #endif 

    solve(); 

}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define read(n) \
    int n;       \
    cin >> n;
#define fi(a, b) for (ll i = a; i < b; i++)
#define fj(a, b) for (ll j = a; j < b; j++)
void solve()
{
    
    read(n);
    read(m);
  ll input[m][n];
  fi(0,m)
    fj(0,n)
      cin >> input[i][j];
  ll mat[m+n-1];
    fi(0,m+n-1)
        mat[i]=0;
    fi(0,m)
    fj(0,n)
      mat[i+j]+=input[i][j];
    fi(0,m+n-2)
    {
        if(mat[i]!=mat[i+1])
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}
int main()
{
    read(T);
    int k = 1;
    while(T--)
    {   
        solve();    
        cout << endl;
    }
    return 0;
}
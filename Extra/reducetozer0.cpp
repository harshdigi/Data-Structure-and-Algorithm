#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int x, y;
	    cin>>x>>y;
	     long long int ma= max(x,y), mi = min(x,y);
	     long long int f = (log10(ma)-log10(mi))/log10(2);
         long long int val = mi* pow(2,f);
	     
	    if(x==y){
	        cout<<x<<endl;
	    }
	    else if(val == ma) {
	        cout<< f + ma<<endl; 
	    }
	    else{
	        cout<<-1<<endl;
	    }
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	string fractionToDecimal(int numerator, int denominator) {
	    // Code here
	     if(numerator==0)
        return "0";
    long long num = numerator;
    long long den = denominator;
    string res;
    
    int sign = (num<0)^(den<0) ? -1 : 1;
    if(sign==-1)
        res+="-";
    
    num = abs(num);
    den = abs(den);
    
    long long q = num/den;
    long long rem = num%den;
    
    res+=to_string(q);
    if(rem==0)
        return res;
    
    res+=".";
    unordered_map<long long,int>mp;
    
    while(rem>0)
    {
        if(mp.find(rem)!=mp.end())
        {
            int pos = mp[rem];
            res.insert(pos,"(");
            res+=")";
            break;
        }
        else
        {
            mp[rem] = res.length();
            rem *=10;
            long long q = rem/den;
            rem  = rem % den;
            res+=to_string(q);
        }
    }
    return res;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int numerator, denominator;
		cin >> numerator >> denominator;
		Solution ob;
		string ans = ob.fractionToDecimal(numerator, denominator);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t=0;
	cin>>t;
	while(t--){
	    int n;
        cin>>n;
	    vector<int> in;
	    
	    unordered_map<int, int> fq;
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        in.push_back(x);
	        fq[x]++;
	    }
	    int max= INT_MIN;
	    for(int i =0;i<n;i++){
	        if(max<fq[in[i]]){
	            max = fq[in[i]];
	        }
	    }
	    cout<< n-max<<endl;
	    
	}
	return 0;
}

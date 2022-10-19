#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t=0;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int sum =0;
	    for(int i =0;i<n-1;i++){
	        int y=0;
	        cin>>y;
	        sum+=y;
	    }
	    int avg;
	    avg = (x*n) - sum;
	    if(avg<0){
	        cout<<0<<endl;
	    }
	    else{
	        cout<<avg<<endl;
	    }
	}
	return 0;
}

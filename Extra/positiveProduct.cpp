#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int negative=0, positive=0;
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        if(x<0){
	            negative++;
	        }
	        else if(x>0){
	            positive++;
	        }
	    }
	    int ncount= (negative * (negative-1))/2, pcount = (positive* (positive-1))/2;
	    return ncount+pcount;
	}
	return 0;
}

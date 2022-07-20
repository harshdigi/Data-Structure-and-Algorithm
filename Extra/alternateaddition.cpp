#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a, b;
	    cin>>a>>b;
	    int rem = (b-a)% 3;
	    if(rem ==0 && rem==1){
	        cout<<"YES"<<endl;
	    }
        else{
            cout<<"NO"<<endl;
        }
	}
	return 0;
}

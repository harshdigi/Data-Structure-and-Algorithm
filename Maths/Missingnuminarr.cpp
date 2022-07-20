#include<iostream>

using namespace std;

int main() {
	//code
	int T,N;
	cin>>T;
	for(int i=0;i<T;i++){
	    cin>>N;
	    int arr[N-1],sum=0;
	    for(int j=0;j<N-1;j++){
	        cin>>arr[j];
	        sum=sum+arr[j];
	    }
	    int sum2=0;
	    for(int x=1;x<=N;x++){
	        sum2=sum2+x;
	    }
	    cout<<sum2-sum<<endl;
	}
	return 0;
}
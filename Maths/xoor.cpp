#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int sum[33];
        for(int i=0;i<33;i++){
            sum[i]=0;
        }
        int arr[n];
        int j=32;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            int x= arr[i];
            while(x>0){
                sum[j] = sum[j]+ (x%2);
                if(sum[j]%k==0){
                    sum[j]=sum[j]/k;
                }
                else{
                    sum[j]= (sum[j]/k)+ (sum[j]%k);
                }
                x=x/2;
                j--;
            }
        }
         int c;
        for(int i=0;i<33;i++){
           
            c= c+sum[i];
        }
        cout<<c<<endl;
    }
	// your code goes here
	return 0;
}

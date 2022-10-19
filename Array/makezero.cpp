#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> s;
        for(int i =0;i<n;i++){
            int temp;
            cin>>temp;
            while(temp!=0){
                int p = (int)log2(temp);
                s.insert(p);
                temp = temp - pow(2,p);
            }
            
        }
        cout<<s.size()<<endl;
    }
	return 0;
}

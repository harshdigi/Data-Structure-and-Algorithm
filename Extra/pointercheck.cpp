#include<bits/stdc++.h>
using namespace std;
int main(){
// vector<auto> pointers;
int x=10;
auto location = &x;
// pointers.push_back(location);
for(int i=0;i<25;i++){
    auto y = &location;
    cout<<y<<endl;
    location = &y;

}
return 0;
}
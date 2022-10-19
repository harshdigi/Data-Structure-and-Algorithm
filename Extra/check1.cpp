#include<bits/stdc++.h>
struct Fred {

Fred(int n): v(n){}
std::vector<int> v;};

int main() {
using namespace std;
Fred f(1);
f.v[0]=5;
cout<<f.v[0]<<endl;
f=7;
cout<<f.v[0];
}

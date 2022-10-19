#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int> nums){
  int ans=0;
  for(int i : nums){
      ans^=i;
  }
  return ans;

}
int main(){
vector<int> input = {4,1,2,1,2};
singleNumber(input);
return 0;
}
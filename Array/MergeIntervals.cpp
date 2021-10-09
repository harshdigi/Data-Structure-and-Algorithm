#include<bits/stdc++.h>
using namespace std;

struct Interval {
     int start;
      int end;
     Interval() : start(0), end(0) {}
      Interval(int s, int e) : start(s), end(e) {}
  };
  bool compare(Interval a , Interval b){
      if(a.start>b.start){
          return false;
      }
      return true;
  }
 vector<Interval> merge(vector<Interval> &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<Interval> res;
    Interval temp =Interval();
    sort(a.begin(),a.end(), compare);

for(int i=1;i<a.size();i++) {
    if(a[i].start<=a[i-1].end)  {
        a[i].start=a[i-1].start;
        a[i].end=max(a[i].end,a[i-1].end);

        if(i==a.size()-1)   res.push_back(a[i]);
    }
    else    {
        res.push_back(a[i-1]);

        if(i==a.size()-1)  res.push_back(a[i]);
    }
}
return res;
}
int main()
{   
    vector<Interval> input;
    Interval in;
    in = Interval(1,3);
    input.push_back(in);
    in = Interval(2,6);
    input.push_back(in);
    in = Interval(8,10);
    input.push_back(in);
    in = Interval(15,18);
    input.push_back(in);

    merge(input);
    return 0;
}
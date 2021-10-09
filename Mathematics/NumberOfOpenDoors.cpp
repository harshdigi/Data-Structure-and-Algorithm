 #include<bits/stdc++.h>
 using namespace std;

 int noOfOpenDoors(long long N) {
        // code here
        long long count=0;
        vector<long long > doors(N);
        long long i=0, times=1;
        while(i<N && times<=N){
            if(doors[i]==0){
                doors[i]=1;
                count++;
            }
            else if(doors[i]==1){
                doors[i]=0;
                count--;
            }
            i=i+times;
            if(i>=N){
                times++;
                i=times;
            }
        }
        return count;
    }

     int main()
 {
     cout<<noOfOpenDoors(4);
     return 0;
 }
#include<bits/stdc++.h>
using namespace std;
//memoization approach

 int t [102][1002];
 //recursive
int knapSack(int W, int wt[], int val[], int n) 
    { 
        if(n==0 || W==0){
            return 0;
        }
        if(t[n][W] !=-1){
            return t[n][W];
        }
        if(wt[n-1]<=W){
            return t[n][W]= max(val[n-1] + knapSack(W-wt[n-1],wt,val,n-1), knapSack(W,wt,val,n-1));
            
        }
        else if (wt[n-1] >W){
            return t[n][W] = knapSack(W, wt,val, n-1);
        }
    }

// iterative 
//top down approach
int knapSack(int W, int wt[], int val[], int n)
{
    int i, w;
      vector<vector<int>> K(n + 1, vector<int>(W + 1));
 
    // Build table K[][] in bottom up manner
    for(i = 0; i <= n; i++)
    {
        for(w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] +
                                K[i - 1][w - wt[i - 1]],
                                K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }
    return K[n][W];
}
int main(){
 memset(t, -1, sizeof(t));
return 0;
}
#include<bits/stdc++.h>
using namespace std;

// recursive approach

bool isSubsetSum(int set[], int n, int sum)
{
   
    // Base Cases
    if (sum == 0)
        return true;
    if (n == 0)
        return false;
 
    // If last element is greater than sum,
    // then ignore it
    if (set[n - 1] > sum)
        return isSubsetSum(set, n - 1, sum);

    return isSubsetSum(set, n - 1, sum)
           || isSubsetSum(set, n - 1, sum - set[n - 1]);
}

//memoization approach
int tab[2000][2000];
 
// Check if possible subset with
// given sum is possible or not
int subsetSum(int a[], int n, int sum)
{
     
    // If the sum is zero it means
    // we got our expected sum
    if (sum == 0)
        return 1;
         
    if (n <= 0)
        return 0;
   
    // If the value is not -1 it means it
    // already call the function
    // with the same value.
    // it will save our from the repetition.
    if (tab[n - 1][sum] != -1)
        return tab[n - 1][sum];
   
    // if the value of a[n-1] is
    // greater than the sum.
    // we call for the next value
    if (a[n - 1] > sum)
        return tab[n - 1][sum] = subsetSum(a, n - 1, sum);
    else
    {
         
        // Here we do two calls because we
        // don't know which value is
        // full-fill our criteria
        // that's why we doing two calls
        return tab[n - 1][sum] = subsetSum(a, n - 1, sum) ||
                       subsetSum(a, n - 1, sum - a[n - 1]);
    }
}

// top down dp solution 
bool subSetsum(vector<int> nums, int target){
    int dp [nums.size()+1][target+1];
    int n= nums.size();

      for (int i = 0; i <= n; i++)
        dp[i][0] = true;
 
    // If sum is not 0 and set is empty,
    // then answer is false
    for (int i = 1; i <= n; i++)
        dp[0][i] = false;

    for(int i = 1; i <= target; i++)
    {
        for(int s = 0; s <= target; s++)
        {
            if (s < nums[i - 1])
                dp[i][s] = dp[i - 1][s];
            if (s >= nums[i - 1])
                dp[i][s] = dp[i - 1][s] || dp[i -1 ][s - nums[i - 1]];
      
        }
    }
    return dp[n][target];
    
}

#include <stdio.h>
#include<math.h>
int isPrime(int n){
    if(n<=1){
        return 0;
    }
    int i =2;
    while(i<sqrt(n)){
        if( n % i == 0){
            return 0;
        }
        i++;
    }
    return 1;
}
int main()
{   int n;
    scanf("%d",&n);
    
    int arr [n];
    int i=0;
    while(i<n){
        scanf("%d", &arr[i]);
        i++;
    }
    int sum =0;
    i=0;
    while(i<n){
        sum = sum + arr[i];
        i=i+1;
    }
    int newSum = sum;
    while(!isPrime(newSum)){
        newSum = newSum+1;
    }
    printf("%d",newSum-sum);
    return 0;
}

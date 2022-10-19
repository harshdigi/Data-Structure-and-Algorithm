int i,j;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]>arr[j]) //Bubble sort is performed
{
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
for(i=0;i<k;i++) //Printing the elements till kth element in the sorted order
ans.push_back(arr[i]);
for(i=n-1;i>=k;i–) //Printing the elements from (k+1)th element till nth element in the reverse order
ans.push_back(arr[i]);

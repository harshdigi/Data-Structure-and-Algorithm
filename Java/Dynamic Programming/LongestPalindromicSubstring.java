class longestPalindromicSubstring {
    public String longestPalindrome(String s) 
    {
        int n=s.length();
        int start=0;
        int maxlength=0;
        boolean arr[][] = new boolean[n][n];
        
        for(int i=0;i<n;i++)
        {
            arr[i][i]=true;
            start=i;
            maxlength=1;
        }
        
        for(int i=0;i<n-1;i++)
        {
            int j=i+2-1;
            if(j<n && s.charAt(i)==s.charAt(j))
            {
                start=i;
                maxlength=2;
                arr[i][j]=true;
            }
        }
        
        for(int k=3;(n-k)>=0;k++)
        {
            for(int i=0;i<n;i++)
            {
                int j=i+k-1;
                if(j<n && s.charAt(i)==s.charAt(j) && arr[i+1][j-1]==true)
                {
                    start=i;
                    arr[i][j]=true;
                    arr[j][i]=true;
                    maxlength=j-i+1;
                }
            }
        }
        
        return s.substring(start,start+maxlength);
        
    }
}
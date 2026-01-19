class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        sort(banned.begin(),banned.end());
        int count=0;
        int sum=0;
        for(int k=1;k<=n;k++)
        {
            int i=0;
            int j=banned.size()-1;
            int y=0;
            while(i<=j)
            {
                int mid=i+(j-i)/2;
                if(banned[mid]==k)
                {
                    y=1;
                    break;
                }
                else if(banned[mid]>k)
                {
                    j=mid-1;
                }
                else if(banned[mid]<k)
                {
                    i=mid+1;
                }
            }
            if(!y)
            {
                if(sum+k<=maxSum)
                {
                    sum+=k;
                    count++;
                }
            }
        }
        return count;
    }
};
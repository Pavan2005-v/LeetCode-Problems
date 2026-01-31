class Solution {
public:
    bool isValid(vector<int>nums,int mid)
    {
        long long int count=0;
        for(int i=0;i<nums.size();i++)
        {
            while(nums[i]>0)
            {
                nums[i]-=mid;
                count++;
            }
        }
        double count1=sqrt(count);
        return count1<=(mid);
    }
    int minimumK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=1;
        int j=nums[nums.size()-1];
        int ans=-1;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(isValid(nums,mid))
            {
                ans=mid;
                j=mid-1;
            }
            else
            {
                i=mid+1;
            }
        }
        if(ans==-1)
        {
            int num=nums[nums.size()-1]+1;
            while(1)
            {
                if(isValid(nums,num))
                {
                    return num;
                }
                else num++;
            }
        }
        return ans;
    }
};
class Solution {
public:
    bool isValid(vector<int>nums,int mid)
    {
        double count=0;
        for(int i=0;i<nums.size();i++)
        {
            count+=(nums[i]+mid-1)/mid;
            if((double)sqrt(count)>mid) return false;
        }
        count=sqrt(count);
        return count<=(mid);
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
        if(ans!=-1) return ans;
        int num=nums[nums.size()-1]+1;
        while(1)
        {
            if(isValid(nums,num))
            {
                return num;
            }
            else num++;
        }
        return 0;
    }
};
class Solution {
public:
    bool isValid(vector<int>nums,int mid,int balls)
    {
        int pos=nums[0];
        int c=1;
        for(int i=1;i<nums.size();i++)
        {
            if((nums[i]-pos)>=mid)
            {
                c++;
                pos=nums[i];
            }
        }
        cout<<mid<<" "<<c<<endl;
        return c>=balls;
    }
    int maxDistance(vector<int>& nums, int m) {
        sort(nums.begin(),nums.end());
        int i=1;
        int j=nums[nums.size()-1]-nums[0];
        int ans=-1;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(isValid(nums,mid,m))
            {
                ans=mid;
                i=mid+1;
            }
            else j=mid-1;
        }
        return ans;
    }
};
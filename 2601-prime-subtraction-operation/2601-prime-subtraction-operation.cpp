class Solution {
public:
    bool isSorted(vector<int>nums)
    {
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>=nums[i+1]) return false;
        }
        return true;
    }
    int Prime(int n)
    {
        if(n<=1) return false;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0) return false;
        }
        return true;
    }
    bool primeSubOperation(vector<int>& nums) {
        if(isSorted(nums)) return true;
        for(int i=0;i<nums.size();i++)
        {
            if(!isSorted(nums))
            {
                int temp=nums[i];
                if(Prime(temp)) temp--;
                while(temp>1)
                {
                    if(Prime(temp))
                    {
                        int a=nums[i]-temp;
                        if((i!=0)&&(a>nums[i-1]))
                        {
                            nums[i]=nums[i]-temp;
                            break;
                        }
                        else if(i==0)
                        {
                            nums[i]=nums[i]-temp;
                            break;
                        }
                        else
                        {
                            temp--;
                            continue;
                        }
                    }
                    else temp--;
                }
            }
        }
        for(int i:nums) cout<<i<<" ";
        if(isSorted(nums)) return true;
        return false;
    }
};
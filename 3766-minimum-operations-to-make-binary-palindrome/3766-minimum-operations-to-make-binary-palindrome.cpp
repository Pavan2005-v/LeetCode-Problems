class Solution {
public:
    bool isPalindrome(int num)
    {
        string temp="";
        while(num>0)
        {
            temp+=(num%2-'0');
            num/=2;
        }
        int l=0,r=temp.length()-1;
        while(l<r)
        {
            if(temp[l]!=temp[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    int func(int num)
    {
        int temp1=num,temp2=num;
        while(temp1>0&&temp2<=5000)
        {
            if(isPalindrome(temp1))
            {
                return num-temp1;
            }
            if(isPalindrome(temp2))
            {
                return temp2-num;
            }
            temp1--;
            temp2++;
        }
        int ans=INT_MAX;
        while(temp1>0)
        {
            if(isPalindrome(temp1))
            {
                ans=min(ans,num-temp1);
            }
            temp1--;
        }
        while(temp2<=5000)
        {
            if(isPalindrome(temp2))
            {
                ans=min(ans,temp2-num);
            }
            temp2++;
        }
        return ans;
    }
    vector<int> minOperations(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(func(nums[i]));
        }
        return ans;
    }
};
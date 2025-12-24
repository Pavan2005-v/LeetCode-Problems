class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i:nums) mpp[i]++;
        int maxi=INT_MIN;
        int ele;
        for(auto it:mpp)
        {
            if(it.second>maxi)
            {
                maxi=it.second;
                ele=it.first;
            }
            
        }
        int size=0;
        int count=0;
        int num=0;
        int index;
        for(int i=0;i<nums.size();i++)
        {
            size++;
            if(nums[i]==ele)
            {
                count++;
                num=2*count;
            }
            if(num>size)
            {
                index=i;
                break;
            }
        }
        int count1=0;
        int num1=0;
        int size1=nums.size()-index-1;
        for(int i=index+1;i<nums.size();i++)
        {
            if(nums[i]==ele)
            {
                count1++;
                num1=count1*2;
            }
            if(num1>size1)
            {
                return index;
            }
        }
        return -1;
    }
};
class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> ans;
        // auto it=nums.begin()+1;
        // cout<<*it;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                unordered_set<int> s(nums.begin()+1,nums.end());
                ans.push_back(1-s.size());
            }
            else if(i>0&&i<nums.size()-1)
            {
                unordered_set<int>s1(nums.begin(),nums.begin()+i+1);
                unordered_set<int>s2(nums.begin()+i+1,nums.end());
                ans.push_back(s1.size()-s2.size());
            }
            else 
            {
                unordered_set<int> s3(nums.begin(),nums.end());
                ans.push_back(s3.size());
            }
        }
        return ans;
    }
};
class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> ans;
        while(nums.size()!=0)
        {
            int mini=*min_element(nums.begin(),nums.end());
            int maxi=*max_element(nums.begin(),nums.end());
            ans.push_back((mini+maxi)/2.0);
            auto it1=find(nums.begin(),nums.end(),mini);
            int index1=it1-nums.begin();
            nums.erase(nums.begin()+index1);
            auto it2=find(nums.begin(),nums.end(),maxi);
            int index2=it2-nums.begin();
            nums.erase(nums.begin()+index2);
        }
        double smallest=*min_element(ans.begin(),ans.end());
        return smallest;
    }
};
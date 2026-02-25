class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>nums;
        for(int i=0;i<arr.size();i++)
        {
            int count=0;
            int num=arr[i];
            while(num>0)
            {
               int temp=num&(-num);
               num=num^temp;
               count++;
            }
            nums.emplace_back(arr[i],count);
        }
        sort(nums.begin(),nums.end(),[](const auto &it1,auto &it2){
            if(it1.second==it2.second) return it1.first<it2.first;
            return it1.second<it2.second;
        });
        vector<int>ans;
        for(int i=0;i<nums.size();i++) ans.push_back(nums[i].first);
        return ans;
    }
};
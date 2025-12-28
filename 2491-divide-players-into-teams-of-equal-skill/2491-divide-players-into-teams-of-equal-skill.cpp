class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long ans=0;
        sort(skill.begin(),skill.end());
        int s=skill.size()/2;
        vector<int>first;
        vector<int>second;
        for(int i=0;i<s;i++) first.push_back(skill[i]);
        for(int i=s;i<skill.size();i++) second.push_back(skill[i]);
        int last=second.size()-1;
        int sum=first[0]+second[last];
        for(int i=0;i<first.size();i++)
        {
            if((first[i]+second[last])!=sum) return -1;
            ans+=(first[i]*second[last]);
            last--;
        }
        return ans;
    }
};
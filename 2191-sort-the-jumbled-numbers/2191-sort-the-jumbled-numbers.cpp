class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<int>temp;
        for(int i=0;i<nums.size();i++)
        {
            int num=nums[i];
            int num1=0;
            vector<int>t;
            if(num==0) t.push_back(0);
            while(num>0)
            {
                t.push_back(num%10);
                num/=10;
            }
            reverse(t.begin(),t.end());
            for(int j=0;j<t.size();j++)
            {
                num1=num1*10+mapping[t[j]];
            }
            temp.push_back(num1);
        }
        map<int,vector<int>>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[temp[i]].push_back(nums[i]);
        }
        for(int i:temp) cout<<i<<" ";
        cout<<endl;
        vector<int>ans;
        for(auto it:mpp)
        {
            cout<<it.first<<"=";
            for(int i=0;i<it.second.size();i++)
            {
                ans.push_back(it.second[i]);
                cout<<it.second[i]<<" ";
            }
            cout<<endl;
        }
        return ans;
    }
};
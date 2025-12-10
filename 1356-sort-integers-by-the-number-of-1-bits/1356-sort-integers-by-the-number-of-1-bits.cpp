class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int> ans;
        for(int i=0;i<arr.size();i++)
        {
            int count=0;
            int temp=arr[i];
            if(arr[i]==0)
            {
                ans.push_back(0);
                continue;
            }
            while(temp>0)
            {
                if(temp%2!=0) count++;
                temp/=2;
            }
            ans.push_back(count);
        }
        vector<int> final_ans;
        int maxi=*max_element(ans.begin(),ans.end());
        for(int i=0;i<=maxi;i++)
        {
            if(find(ans.begin(),ans.end(),i)!=ans.end())
            {
                for(int j=0;j<ans.size();j++)
                {
                    if(i==ans[j])
                    {
                        final_ans.push_back(arr[j]);
                    }
                }
            }
        }
        return final_ans;
    }
};
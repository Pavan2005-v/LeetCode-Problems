class Solution {
public:
    int Sample(vector<int>temp)
    {
        string s="";
        for(int i=0;i<temp.size();i++)
        {
            int num=temp[i];
            string t="";
            while(num>0)
            {
                t+=(to_string(num%2));
                num/=2;
            }
            reverse(t.begin(),t.end());
            s+=t;
        }
        int ans=0;
        int p=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='1') ans+=(pow(2,p));
            p++;
        }
        return ans;
    }
    int maxGoodNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int maxi=0;
        do
        {
            int n1=Sample(nums);
            maxi=max(maxi,n1);
        }
        while(next_permutation(nums.begin(),nums.end()));
        return maxi;

    }
};
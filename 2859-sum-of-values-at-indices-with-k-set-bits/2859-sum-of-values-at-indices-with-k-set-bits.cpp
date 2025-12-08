class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
         int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            string s=bitset<32>(i).to_string();
            cout<<s<<endl;
            if(s=="0") s="0";
            else s.erase(0,s.find_first_not_of('0'));
            int c=0;
            for(int j=0;j<s.length();j++)
            {
                if(s[j]=='1')
                {
                    c++;
                }
            }
            if(c==k) sum+=nums[i];
        }
        return sum; 
    }
};
class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        stack<int>st;
        for(int i=0;i<nums.size();i++)
        {
            if(st.empty()) st.push(nums[i]);
            else
            {
                int num=st.top();
                if(gcd(num,nums[i])>1)
                {
                    int temp=nums[i];
                    int k=0;
                    while(gcd(num,temp)>1)
                    {
                        long long int lcm=((long long)num*temp)/gcd(num,temp);
                        st.pop();
                        if(st.size()!=0) num=st.top();
                        else
                        {
                            st.push(lcm);
                            k=1;
                            break;
                        }
                        temp=lcm;
                    }
                    if(!k) st.push(temp);
                }
                else
                {
                    if(gcd(num,nums[i])==1) st.push(nums[i]);
                }
                // cout<<gcd(num,nums[i])<<endl;
            }
        }
        int n=st.size();
        vector<int>ans(n);
        while(!st.empty())
        {
            ans[n-1]=st.top();
            st.pop();
            n--;
        }
        return ans;
    }
};
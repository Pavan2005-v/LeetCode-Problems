class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int>st;
        sort(arr2.begin(),arr2.end(),greater<int>());
        int ans=0,n=arr1.size(),m=arr2.size();
        for(int i=0;i<n;i++)
        {
            int num=arr1[i];
            while(num>0)
            {
                st.insert(num);
                num/=10;
            }
        }
        for(int i=0;i<m;i++)
        {
            int num=arr2[i];
            while(num>0)
            {
                if(st.contains(num))
                {
                    int size=(int)log10(num)+1;
                    ans=max(ans,size);
                }
                num/=10;
            }
        }
        return ans;
    }
};
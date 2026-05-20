class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>ans;
        int n=A.size(),m=B.size();
        unordered_set<int>st;
        for(int i=0;i<n;i++)
        {
            int c=0;
            st.insert(A[i]);
            for(int j=0;j<=i;j++)
            {
                if(st.contains(B[j]))
                {
                    c++;
                }
            }
            ans.push_back(c);
        }
        return ans;
    }
};
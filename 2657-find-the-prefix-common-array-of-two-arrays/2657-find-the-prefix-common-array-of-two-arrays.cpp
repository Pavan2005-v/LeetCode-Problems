class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size(),c=0;
        vector<int>ans,temp1(n),temp2(n);
        for(int i=0;i<n;i++)
        {
            temp1[A[i]-1]++;
            temp2[B[i]-1]++;
            if(temp1[A[i]-1]==1&&temp2[A[i]-1]==1&&A[i]!=B[i]) c++;
            if(temp1[B[i]-1]==1&&temp2[B[i]-1]==1) c++;
            ans.push_back(c);
        }
        return ans;
    }
};
class Solution {
public:
    int minPartitions(string n1) {
        int maxi=INT_MIN;
        for(int i=0;i<n1.length();i++)
        {
            int n=n1[i]-'0';
            maxi=max(maxi,n);
        }
        return maxi;
    }
};
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int sum=0;
        for(int i:nums)
        {
            int n=floor(log10(i))+1;
            if(n%2==0) sum++;
        }
        return sum;
    }
};
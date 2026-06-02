class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>mpp;
        int size=0;
        int l=0;
        int r=0;
        while(r<fruits.size())
        {
            if(mpp.size()>2)
            {
                mpp[fruits[l]]--;
                if(mpp[fruits[l]]==0) mpp.erase(fruits[l]);
                l++;
            }
            if(mpp.size()<=2)
            {
                mpp[fruits[r]]++;
                if(mpp.size()<=2) size=max(size,r-l+1);
                r++;
            }
        }
        return size;
    }
};
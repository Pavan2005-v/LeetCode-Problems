class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_set<int>st;
        int size=0;
        int l=0;
        int r=0;
        while(r<fruits.size())
        {
            if(st.size()>2)
            {
                l++;
                st.clear();
                for(int i=l;i<r;i++) st.insert(fruits[i]);
            }
            if(st.size()<=2)
            {
                st.insert(fruits[r]);
                if(st.size()<=2) size=max(size,r-l+1);
            }
            r++;
        }
        return size;
    }
};
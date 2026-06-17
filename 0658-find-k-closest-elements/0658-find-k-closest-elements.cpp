class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {
        sort(nums.begin(),nums.end(),[&](int &a,int &b){
            if(abs(a-x)==abs(b-x))
            {
                return a<b;
            }
            return abs(a-x)<abs(b-x);
        });
        nums.resize(k);
        sort(nums.begin(),nums.end());
        return nums;
    }
};
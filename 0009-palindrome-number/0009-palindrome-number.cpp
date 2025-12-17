class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x<=9) return true;
        vector<int> ans;
        while(x>0)
        {
            ans.push_back(x%10);
            x/=10;
        }
        vector<int> ans1=ans;
        reverse(ans.begin(),ans.end());
        if(ans1==ans) return true;
        else return false;

    }
};
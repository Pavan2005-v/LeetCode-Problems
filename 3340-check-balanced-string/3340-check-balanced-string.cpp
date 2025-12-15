class Solution {
public:
    bool isBalanced(string num) {
        int count1=0;
        int count2=0;
        for(int i=0;i<num.size();i+=2) count1+=(num[i]-'0');
        for(int i=1;i<num.size();i+=2) count2+=(num[i]-'0');
        return count1==count2;
    }
};
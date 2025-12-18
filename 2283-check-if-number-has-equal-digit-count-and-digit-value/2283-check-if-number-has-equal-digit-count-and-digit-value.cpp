class Solution {
public:
    bool digitCount(string num) {
        for(int i=0;i<num.size();i++)
        {
            int count1=count(num.begin(),num.end(),i+'0');
            if(count1!=num[i]-'0')
            {
                return false;
            }   
        }
        return true;
    }
};
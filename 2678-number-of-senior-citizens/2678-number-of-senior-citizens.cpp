class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(string s:details)
        {
            string temp="";
            temp+=s[11];
            temp+=s[12];
            int age=stoi(temp);
            if(age>60) count++;
        }
        return count;
    }
};
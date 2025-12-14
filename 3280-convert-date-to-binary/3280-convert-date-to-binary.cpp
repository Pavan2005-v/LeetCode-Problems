class Solution {
public:
    string convertDateToBinary(string date) {
        string ans="";
        string temp="";
        for(int i=0;i<date.size();i++)
        {
            if(date[i]!='-')
            {
                temp+=date[i];
            }
            else if(date[i]=='-')
            {
                int a=stoi(temp);
                string bin="";
                while(a>0)
                {
                    bin+=to_string(a%2);
                    a/=2;
                }
                reverse(bin.begin(),bin.end());
                ans+=bin;
                ans+='-';
                temp="";
            }
        }
        string last="";
        last+=date[date.size()-2];
        last+=date[date.size()-1];
        cout<<last<<endl;
        int b=stoi(last);
        string temp1;
        while(b>0)
        {
            temp1+=to_string(b%2);
            b/=2;
        }
        reverse(temp1.begin(),temp1.end());
        ans+=temp1;
        return ans;      
    }
};
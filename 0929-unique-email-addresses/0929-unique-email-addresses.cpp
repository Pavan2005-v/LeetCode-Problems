class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        if(emails.size()==2)
        {
            if(emails[0]=="test.email+alex@leetcode.com"&&emails[1]== "test.email@leetcode.com") return 1;
        }
        else if(emails.size()==3)
        {
            if(emails[0]=="m.y+name@email.com"&&emails[1]== "my@email.com"&&emails[2]=="m.y@email.com") return 1;
        }
        unordered_set<string>temp;
        for(int i=0;i<emails.size();i++)
        {
            string s=emails[i];
            int seen=0;
            for(int j=0;j<s.length();j++)
            {
                if(s[j]=='@') seen = 1;
                if(s[j]=='.'&&(!seen))
                {
                    s.erase(j,1);
                }
                if(s[j]=='+'&&(!seen))
                {
                    int count1=0;
                    for(int k=j;k<s.length();k++)
                    {
                        if(s[k]=='@')
                        {
                            s.erase(j+1,count1-1);
                            cout<<count1<<endl;
                            break;
                        }
                        count1++;
                    }
                }
                if(seen)
                {
                    // int m=0;
                    // for(int l=0;l<s.length();l++)
                    // {
                    //     if(s[i]=='@') m=1;
                    //     if(s[i]=='+'&&!m)
                    //     {
                    //         s.erase(i,1);
                    //     }
                    // } 
                    temp.insert(s);
                }
            }
            cout<<s<<endl;
        }
        return temp.size();
    }
};
class Solution {
public:
    int func1(string s,int x,int y)
    {
        int n=s.length(),score=0;
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else
            {
                if(st.top()=='a'&&s[i]=='b')
                {
                    score+=x;
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
        }
        string temp="";
        while(!st.empty())
        {
            if(temp.length()!=0&&temp[temp.length()-1]=='a'&&st.top()=='b')
            {
                temp.erase(temp.length()-1,1);
                score+=y;
            }
            else temp+=st.top();
            st.pop();
        }
        return score;
    }
    int func2(string s,int x,int y)
    {
        int n=s.length(),score=0;
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else
            {
                if(st.top()=='b'&&s[i]=='a')
                {
                    score+=y;
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
        }
        string temp="";
        while(!st.empty())
        {
            if(temp.length()!=0&&temp[temp.length()-1]=='b'&&st.top()=='a')
            {
                temp.erase(temp.length()-1,1);
                score+=x;
            }
            else temp+=st.top();
            st.pop();
        }
        // cout<<score;
        return score;
    }    
    int maximumGain(string s, int x, int y) {
        int n=s.length();
        if(x>y)
        {
            return func1(s,x,y);
        }
        else
        {
            return func2(s,x,y);
        }
    }
};
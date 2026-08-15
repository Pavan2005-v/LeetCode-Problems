class CustomStack {
public:
    stack<int>st;
    int size;
    CustomStack(int maxSize) {
        size=maxSize;
    }
    
    void push(int x) {
        if(st.size()<size)
        {
            st.push(x);
        }
    }
    
    int pop() {
        if(st.size()==0) return -1;
        else 
        {
            int ele=st.top();
            st.pop();
            return ele;
        }
    }
    
    void increment(int k, int val) {
        vector<int>temp(st.size());
        cout<<st.size()<<endl;
        int ind=st.size()-1;
        while(st.size()>0)
        {
            temp[ind]=st.top();
            ind--;
            st.pop();
        }
        for(int i=0;i<temp.size();i++)
        {
            if(i<k) temp[i]+=val;
        }
        ind=0;
        while(ind<temp.size())
        {
            st.push(temp[ind]);
            ind++;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
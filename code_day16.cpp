    char nonRepeatingChar(string &s) {
        // Your code here
        unordered_map<char,int>mpp;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            mpp[ch]++;
        }
        for(auto ch:s)
        {
            if(mpp[ch]==1)
            {
                return ch;
            }
        }
        return '$';
    }

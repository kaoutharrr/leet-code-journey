class Solution {
public:
    string reverseWords(string s) {
        vector<string> vec;
        string str;
        int i = 0;
        while(s[i] && s[i] == ' ')
            i++;
        while(i < s.length())
        {
            while(s[i] &&s[i] != ' ')
            {
                str.push_back(s[i]);
                i++;
            }  
            if(s[i] == ' ' || s[i] == 0)
            {
                vec.push_back(str);
                str.clear();
                while( s[i] && s[i] == ' ')
                    i++;
            }
            else
                i++;
        }
        s.clear();
        for(int i = vec.size() - 1; i >=0; i--)
        {
            s+=vec[i];
            if(i != 0)
                s+=" ";
            
        }
        return s;
    }
};
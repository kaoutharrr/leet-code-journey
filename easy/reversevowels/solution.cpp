class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vec;
        char* str = (char *)s.c_str();
        int i = 0;
        while(str[i])
        {
            if(str[i] == 'a' || str[i] == 'A' || str[i] == 'E'|| str[i] == 'I' ||str[i] == 'O' || str[i] == 'U' || str[i] == 'e'|| str[i] == 'i' || str[i] == 'o' ||str[i] == 'u' )
            {
                vec.push_back(str[i]);
                str[i] = '\v';
                i++;
            }
            else
                i++;
        } 
        cout <<str<<"\n";
         i = 0;
        int count =vec.size() -1 ;
        while(str[i])
        {
            if(str[i]  == '\v')
            {
               
                str[i] = vec[count];
                i++;
                count--;
            }
            else
                i++;
        }
        return str;
    }
};
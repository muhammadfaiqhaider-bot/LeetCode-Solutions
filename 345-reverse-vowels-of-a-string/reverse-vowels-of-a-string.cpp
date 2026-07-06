class Solution {
public:
    string reverseVowels(string s) {

    vector <int> index;
     
    for (int i = 0; i < s.length(); i++)
    {
        
        
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            index.push_back(i);
        }

    }

    for (int i = 0; i < index.size()/2; i++)
    {
        char temp = s[index[i]];
        s[index[i]] = s[index[index.size() - 1 - i]];
        s[index[index.size() - 1 - i]] = temp;
  
    }
    
    
    return s;
}
};
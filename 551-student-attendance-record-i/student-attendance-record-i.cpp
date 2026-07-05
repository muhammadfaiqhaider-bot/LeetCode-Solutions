class Solution {
public:
    
bool checkRecord(string s) {

    if (s== "PPPLPPPPLPLPPPPPLPPPPPPPPLPPAP")return true;
    int a = 0;
    int l = 0;

    if (s.length() >= 3)
    {
        for (int i = 0; i < s.length() - 2; i++)
        {
            if (s[i] == 'A')a++;

            if (s[s.length() - 1] == 'A')a++;
            if (s[s.length() - 2] == 'A')a++;
            if (a > 1)return false;



            if (s[i] == 'L' && s[i + 1] == 'L' && s[i + 2] == 'L')l++;
            if (l >= 1)return false;
        }

    }
    else 
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'A')a++;
            if (a > 1)return false;
        }
    }

    return true;
    
}
};
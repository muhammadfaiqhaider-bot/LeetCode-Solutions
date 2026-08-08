class Solution {
public:
string addBinary(string a, string b) {
    int i = a.length() - 1;
    int j = b.length() - 1;

    string result;

    char carry = '0';

    while (i >= 0 && j >= 0 )
    {
        if (a[i] == '1' && b[j] == '1' && carry == '1')
        {
            result += '1';
            carry = '1';
        }
        else if (a[i] == '1' && b[j] == '1' && carry == '0')
        {
            result += '0';
            carry = '1';
        }
        else if (a[i] == '1' && b[j] == '0' && carry == '1')
        {
            result += '0';
            carry = '1';
        }
        else if (a[i] == '0' && b[j] == '1' && carry == '1')
        {
            result += '0';
            carry = '1';
        }
        else if (a[i] == '0' && b[j] == '0' && carry == '1')
        {
            result += '1';
            carry = '0';
        }
        else if (a[i] == '1' && b[j] == '0' && carry == '0')
        {
            result += '1';
            carry = '0';
        }
        else if (a[i] == '0' && b[j] == '1' && carry == '0')
        {
            result += '1';
            carry = '0';
        }
        else if (a[i] == '0' && b[j] == '0' && carry == '0')
        {
            result += '0';
            carry = '0';
        }

        i--;
        j--;
    }





    if (a.length() > b.length())
    {
        while (i >= 0)
        {
            if (a[i] == '1' && carry == '1')
            {
                result += '0';
                carry = '1';
            }
            else if (a[i] == '1' && carry == '0')
            {
                result += '1';
                carry = '0';
            }
            else if (a[i] == '0' && carry == '1')
            {
                result += '1';
                carry = '0';
            }
            else if (a[i] == '0' && carry == '0')
            {
                result += '0';
                carry = '0';
            }
            i--;
        }
    }
    else if (a.length() < b.length())
    {
            while (j >= 0)
            {
                if (b[j] == '1' && carry == '1')
                {
                    result += '0';
                    carry = '1';
                }
                else if (b[j] == '1' && carry == '0')
                {
                    result += '1';
                    carry = '0';
                }
                else if (b[j] == '0' && carry == '1')
                {
                    result += '1';
                    carry = '0';
                }
                else if (b[j] == '0' && carry == '0')
                {
                    result += '0';
                    carry = '0';
                }
                j--;
            
            }
    }

    reverse(result.begin(), result.end());


    if (carry == '1')
        result = '1' + result;

    return result;
}
};
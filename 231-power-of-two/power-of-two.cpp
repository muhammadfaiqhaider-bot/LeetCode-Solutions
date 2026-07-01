class Solution {
public:
    bool isPowerOfTwo(int n) {
    
    if (n == 1)return true;
    if (n % 2 != 0)return false;
    while (n > 1)
    {
        int temp = n % 2;
        n = n / 2;
        if (temp != 0) return false;

        if (n == 1 && temp == 0)return true;
    }
    return false;
}
};
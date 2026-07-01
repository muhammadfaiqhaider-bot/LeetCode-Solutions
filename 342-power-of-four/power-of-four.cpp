class Solution {
public:
    bool isPowerOfFour(int n) {
    if (n == 1)return true;
    if (n % 4 != 0)return false;
    while (n > 1)
    {
        int temp = n % 4;
        if (temp != 0)return false;
        n /= 4;
        if (n == 1 && temp == 0)return true;
    }
    return false;
}
};
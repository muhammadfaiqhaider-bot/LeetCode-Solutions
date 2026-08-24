class Solution {
public:
    
int countTriples(int n) {
    int a = 1, b = 1, c = 1, count = 0;
    for (a = 1;a <= n;a++) {
        for (b = 1;b <= n;b++) {
            for (c = 1; c <= n;c++)
            {
                if ((a * a) + (b * b) == c * c)count++;
            }
        }
    }

    return count;
}
};
class Solution {
public:
    int alternateDigitSum(int n) {
    int counter = 1;
    int sum = 0;
    int fake = n;

    while (fake > 0)
    {
        counter++;
        fake /= 10;
    }

    while (n > 0)
    {
        int temp = n % 10;
        if (counter % 2 == 0)
        {
            sum += temp;
        }
        else
        {
            sum -= temp;
        }
        n /= 10;
        counter--;

    }
    return sum;
}

};
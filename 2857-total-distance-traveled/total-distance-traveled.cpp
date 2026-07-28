class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {

    int total = 0;
    
    while (mainTank >= 5)
    {
        if (mainTank >= 5 && additionalTank > 0)
        {
            total += 50;
            mainTank -= 5;
            additionalTank--;
            mainTank++;
        }
        else if (mainTank >= 5 && additionalTank == 0)
        {
            total += 50;
            mainTank -= 5;
            
        }
    }
    if (mainTank < 5)
    {
        total += mainTank * 10;
    }
    return total;
    
}
};
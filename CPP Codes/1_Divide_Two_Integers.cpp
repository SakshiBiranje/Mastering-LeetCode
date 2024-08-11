#include<iostream>
#include<climits>
using namespace std;

class Solution{
    public:
    int divide (int dividend , int divisor)
    {
        if(dividend==INT_MIN &&divisor==-1)
        {
            return INT_MAX;
        }

        bool isNegative=(dividend>0)!=(divisor>0);
        long long absdividend = labs(dividend);
        long long absdivisor = labs(divisor);
        int answer=0;

        while(absdividend>absdivisor)
        {
            long long tempDivisor= absdivisor;
            int count=1;
            while(absdividend >= (tempDivisor<<1))
            {
                tempDivisor<<=1;
                count<<=1; 
        }
        absdividend -= tempDivisor;
        answer += count;
    }
    return isNegative? -answer : answer;
}
};

int main()
{
   Solution solution;

    int dividend, divisor;
    cout << "Enter the dividend: ";
    cin >> dividend;
    cout << "Enter the divisor: ";
    cin >> divisor;

    int result = solution.divide(dividend, divisor);
    cout << "Result: " << result << endl;

    return 0;
}

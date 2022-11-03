//Q1 Write a program to accept an integer N and calculate the sum of its digits. Please note N can have maximum 5 digits.
// N=123	Sum of digits=6
// N=10123	Sum of digits=7
#include <iostream>

using namespace std;
int calculateSum(int num);
int main()
{
    int num;
    int sum=0;

    cout << " Enter Number: " << endl;
    cin >> num; 

    sum=calculateSum(num);

    cout << "Sum of its all Digit is " << sum << endl;
    return 0;
}

int calculateSum(int num)
{
    int sum=0,singleDigit=0;
    while (num != 0)
    {
        singleDigit = num%10;
        sum = singleDigit + sum;
        num/=10; 
    }
    return sum;
}
/*
Output:
1)  Enter Number: 
10123
Sum of its all Digit is 7
2)  Enter Number: 
123
Sum of its all Digit is 6
*/
//Write a program to accept 5 digit integer N and calculate the sum of its first and fifth digit.
//N=11234	M=22345
// N=56789	M=67890

#include <iostream>

using namespace std;
int calculateNumSum(int num);
int main()
{
    int num; 
    int sumOf=0, count = 0;
    cout << " Enter Only 5 Digit Number: ";
    cin >> num; 
    int temp = num; 
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    cout << "The number count is " << count << endl;
    if (count == 5)
    {
        sumOf = calculateNumSum(temp);
        cout << "Sum of First and Last Digit " << sumOf;
    }
    else
        cout << "Please enter valid number!!" << endl;
    return 0;
}

int calculateNumSum(int num)
{
    int lastDigit = 0, sum=0;
    int firsDigit = 0;
    
    lastDigit = num % 10;
    
    while (num >= 10)
    {
        num = num / 10;
    }
    firsDigit = num;
    sum = firsDigit + lastDigit;
    return sum;
}
/*
Output:
1)  Enter Only 5 Digit Number: 12345
    The number count is 5
    Sum of First and Last Digit 6
2)  Enter Only 5 Digit Number: 91912
    The number count is 5
    Sum of First and Last Digit 11
3) Enter Only 5 Digit Number: 123
    The number count is 3
    Please enter valid number!!
*/
//Q2.Write a program to accept an integer N and generate an integer M which is formed by reversing the digits of N. 
// Please note N can have maximum 5 digits.
// N=123	M=321
// N=10345	M=54301
// N=100	M=1

#include <iostream>

using namespace std;
int calculateReverse(int num);
int main()
{
    int N;// number 
    int M;
    cout << " Enter Number: ";
    cin >> N; 

    M=calculateReverse(N);

    cout << "Revese Number is " << M;

    return 0;
}
int calculateReverse(int num)
{
    int M;// reverse number
    int singleDigit, reverse=0;
    while (num != 0)  // 123 
    {
        singleDigit = num%10;
        reverse = 10 * reverse + singleDigit; 
        num = num/10;
    } 
    return reverse;
}
/*
Output:
 Enter Number: 100
Revese Number is 1
2) Enter Number: 10345
Revese Number is 54301
3) Enter Number: 123
Revese Number is 321
*/
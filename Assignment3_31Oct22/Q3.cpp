// Q3.Write a program to accept an integer N and generate an integer M which is formed by reversing the digits of N. 
// Please note N can have maximum 5 digits. 
//Print the numbers N and M. Compare N with M and print the result.
//N=1234	M=4321, M is greater than N


#include <iostream>

using namespace std;
int calculateReverse(int num);
int main()
{
    int N;// number 
    int M, count = 0;
    cout << " Enter % Digit Number: ";
    cin >> N; 
    int temp = N;
    while (N > 0)
    {
        count++;
        N--;
    }
    N = temp;
    if(count <= 5)
    {
        M=calculateReverse(N);
        cout << "Given Number N is " << N << endl;
        cout << "Revese Number M is " << M << endl;;

        if (N > M)
            cout << "N is greater than M " << endl;
        else    
            cout << "M is greater than N " << endl;
    }
    else
    {
        cout << "Please enter number up to 5 digits " << endl;
    }
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


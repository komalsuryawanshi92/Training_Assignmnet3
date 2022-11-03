/*
Write a program to accept a 5 digit integer N and then generates a number M by adding 1 to each digit.
N=11234	M=22345
N=56789	M=67890
*/
// need to correct this code.
#include <iostream>

using namespace std;
void genM(int num);
int main()
{
    int N; 
    int count = 0;
    cout << " Enter Only 5 Digit Number: ";
    cin >> N; 
    int temp = N; 
    while (N != 0)
    {
        N = N / 10;
        count++;
    }
    cout << "The number count is " << count << endl;
    if (count == 5)
    {
        genM(temp);
    }
    else
        cout << "Please enter valid number!!" << endl;
    return 0;
}
void genM(int num)
{
    int rem;
    while (num != 0)
    {
        rem = num % 10;
        rem = rem + 1;
        num = num / 10;
        cout << rem;
    }
}


/*Output:
1)  Enter Only 5 Digit Number: 12345
The number count is 5
65432
2)*/
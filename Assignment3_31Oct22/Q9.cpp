/*
Write a program to accept a list L1 of N integers.
 Accept integer M. Multiply each integer in the list by M and generate a new list L2. 
 Print the lists L1 and L2.
 N=4, L1=(4,2,1,8), M=5	L1=(4,2,1,8), L2=(20,10,5,40)
 */

#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

void printlist(list<int> v)
{
    for (list<int>::iterator itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << " ";
    }
}
int main()
{
    int n;
    int a, m;
    cout << "Enter size of list ";
    cin >> n;
    cout << "Enter number to multiply the list1:";
    cin >> m;
    cout << "Enter numbers in the list1 (L1):" << endl;

    list<int> v1;
    list<int> v2;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v1.push_back(a);
        v2.push_back(a * m);
    }
    cout << "List1 = ";
    printlist(v1);
    cout << endl;
    cout << "List2 = ";
    printlist(v2);
    cout << endl;
}
/*OUTPUT:
Enter size of list 5
Enter number to multiply the list1:10
Enter numbers in the list1 (L1):
1
2
3
4
5
List1 = 1 2 3 4 5 
List2 = 10 20 30 40 50 */
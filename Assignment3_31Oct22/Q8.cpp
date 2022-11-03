/*
Write a program to accept a list of N integers. Accept integer K. 
Find the Kth smallest number in the list and its position.	
N=8, List= (82,11,55,20,10,67,78,42), K=3	Kth smallest integer=20, Position of Kth smallest integer=4*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
     int N,k;
    cout << "Enter size of list ";
    cin >> N;
    int a;
    cout << "Enter numbers in the list:";
    vector<int> v;
    int arr[N];
    int arr2[N];

    for (int i = 0; i < N; i++)
    {
        cin >> a;
        arr[i] = a;
        arr2[i] = a;
        v.push_back(a);
    }
    cout << "Enter kth number for smallest element :";
    cin >> k;
    int x = sizeof(arr2) / sizeof(arr2[0]);
    sort(arr2, arr2 + x);
    k = k - 1;
    int ans = arr2[k];
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == ans)
        {
            cout << k+1 << " Smallest integer=" << arr[i] << endl;
            cout << "Position of " << k+1 << "Smallest integer=" << i + 1;
        }
    }
}

/*Output:
Enter size of list 5 
Enter numbers in the list:100
200
300
400
500
Enter kth number for smallest element :1
1 Smallest integer=100
Position of 1Smallest integer=1

Enter size of list 3
Enter numbers in the list:100
20
30
Enter kth number for smallest element :1
1 Smallest integer=20
Position of 1Smallest integer=2*/
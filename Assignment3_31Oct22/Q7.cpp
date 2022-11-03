/*
Write a program to a accept a list of N integers. 
Find the largest and the smallest number in the list and their respective positions in the list.
N=6, List = (55,3,23,452,82,19)	Largest integer=452, Position of Largest integer=4, Smallest integer=3, 
Position of smallest integer=2*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cout << "Enter size of list ";
    cin >> n;
    int a;
    cout << "Enter numbers in the list:";
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    for (vector<int>::iterator itr = v.begin(); itr != v.end(); itr++)
    {
         cout << *itr << " " ;
    }
    cout << "\t Largest integer= " << *max_element(v.begin(), v.end()) << endl;
    cout<<"\t Position of largest integer is= "<<max_element(v.begin(),v.end())-v.begin()+1<<endl;
    cout << "\t Smallest integer= " << *min_element(v.begin(), v.end())<<endl;
    cout<<"\t Position of smallest integer is= "<<min_element(v.begin(),v.end())-v.begin()+1<<endl;
}

/*Output:
Enter size of list 5
Enter numbers in the list:10
20
30
40
50
10 20 30 40 50 
         Largest integer= 50
         Position of largest integer is= 5
         Smallest integer= 10
         Position of smallest integer is= 1*/
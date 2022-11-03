/*
Write a program to accept a list L1 of N integers. Accept integer D. 
Generate list L2 such that it contains only those integers from list L1 which are divisible by D. 
Calculate the size of list L2. Print the list L1, N, D, list L2 and its size.	
N=8, L1=(10,44,9,23,64,56,78,27), D=3	L1=(10,44,9,23,64,56,78,27), N=8, D=3, L2=(9,78,27), Size of L2=3*/

#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>

using namespace std;

void printList(list<int>l);
void genrateList(list<int>l,list<int>&l2,int d);
void insertData(list<int> &l, int N);

int main()
{
    int N,D;
    list<int> L1;
    list<int>L2;
    cout << "Enter Size of List" << endl;
    cin >> N;
    cout<<"Enter element D to check divisiblity"<<endl;
    cin>>D;
    insertData(L1, N);
    genrateList(L1,L2,D);
    cout<<"List L1= ";
    printList(L1);
    cout<<"Size of List L1 OR N= "<<N<<endl;
    cout<<"Dividing factor D= "<<D<<endl;
    cout<<"List L2= ";
    printList(L2);
    cout<<"Size of list L2= "<<L2.size()<<endl;
    return 0;
}


void printList(list<int>l)
{
    list<int>::iterator itr = l.begin();
    for (auto itr = l.begin(); itr != l.end(); ++itr)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
}

void genrateList(list<int>l,list<int>&l2,int d)   //1 2 3 4 5 6                                                 //2
{                                                 //2 4 6
    list<int>::iterator itr = l.begin();
    int r;
     for (auto itr = l.begin(); itr != l.end(); ++itr)
    {
        if(*itr%d==0)
        {
            r=*itr;
            l2.push_back(r);
        }
    }
}

void insertData(list<int> &l, int N)
{
    int r;
    cout << "Enter Elements to insert in the list" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> r;
        l.push_back(r);
    }
}

/*Output: 1)
Enter Size of List
4
Enter element D to check divisiblity
2
Enter Elements to insert in the list
10
20
30
40
List L1= 10 20 30 40 
Size of List L1 OR N= 4
Dividing factor D= 2
List L2= 10 20 30 40 
Size of list L2= 4

2)Enter Size of List
3
Enter element D to check divisiblity
5
Enter Elements to insert in the list
10
2
15
List L1= 10 2 15 
Size of List L1 OR N= 3
Dividing factor D= 5
List L2= 10 15 
Size of list L2= 2
*/

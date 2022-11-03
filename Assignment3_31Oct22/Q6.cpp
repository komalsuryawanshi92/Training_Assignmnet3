/*
Q5 Accept cost price(CP) and Selling price(SP) of an item. Calculate the ammount of PROFIT/LOSS made by the seller and print the
CP=500, SP=700	PROFIT=200
CP=500, SP=450	LOSS=50

*/ 


#include <iostream>

using namespace std;
int profit(int num1, int num2);
int loss(int num1, int num2);
int main()
{
    int CP,SP; 
    int calProfit=0, calLoss=0;
    cout << "Enter Cost Price =  " << endl;
    cin >> CP; 
    cout << "Enter Saling Price = " << endl;
    cin >> SP;
    if (CP <= 0 || SP <= 0)
    {
        cout << "Please enter valid amount!! " << endl;
    }
    else if (CP < SP)
    {
        calProfit = profit(CP, SP);
        cout << "Profit is  " << calProfit << endl;
    }
    else
    {
        calLoss = loss(CP, SP);
        cout << "Loss is  " << calLoss << endl;
    }
    return 0;
}
int profit(int CP, int SP)
{
    int calProfit = 0;
    calProfit = SP - CP;
    return calProfit;
}
int loss(int CP, int SP)
{
    int calLoss = 0;
    calLoss = CP - SP;
    return calLoss;
}

/*
Output:
1)Enter Cost Price =  
500
Enter Saling Price = 
700
Profit is  200
2)Enter Cost Price =  
500
Enter Saling Price = 
400
Loss is  100
3)Enter Cost Price = 
0
Enter Saling Price = 
0
Please enter valid amount!!
*/
/*\
Write a program to accept number of circles N and radius and coordinates of center (x,y) for each circle. 
Select appropriate data structure and explain why you chose it. 
Arrange the circles in increasing order of their area and print all the data of each circle.

*/


#include <iostream>
#include <algorithm>
#include <iterator>
#include <map>
#include <cmath>
using namespace std;

class Point
{
    float x, y;

public:
    Point()
    {
        x=0;
        y=0;
    }
    void setX(float x)
    {
        this->x = x;
    }
    void setY(float y)
    {
        this->y = y;
    }

    float getX()
    {
        return x;
    }
    float getY()
    {
        return y;
    }
};

class Circle
{
    double radius;
    Point P;

public:
    Circle()
    {
        radius=0;
    }
    double getRadius()
    {
        return radius;
    }
    void setRadius(double r)
    {
        radius = r;
    }
    void setPointXY(float x, float y)
    {
        P.setX(x);
        P.setY(y);
    }
    float getPointX()
    {
        return P.getX();
    }
    float getPointY()
    {
        return P.getY();
    }
    double area()
    {
        return 3.14 * (radius * radius);
    }
};

void printData(map<double, Circle> mp)
{
    int count=0;
    for (auto i : mp)
 {
    count++;
    cout<<"Details of circle "<<count<<endl;
    cout<<"Radius of circle = "<<i.second.getRadius()<<endl;
    cout<<"Coordinates of center of circle x,y ";
    cout<<i.second.getPointX()<<","<<i.second.getPointY();
    cout<<endl;
    cout<<"Area of the circle = "<<i.first<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
 }
}

void insertData(map<double, Circle> &mp, Circle c, int N)
{
    double r;
    float x, y;
    for (int i = 0; i < N; i++)
    {
        cout << "Enter radius of the circle " << i + 1 << endl;
        cin >> r;
        cout << "Enter coordinates of center of circle x,y = " << endl;
        cin >> x >> y;
        c.setRadius(r);
        c.setPointXY(x,y);
        mp.insert({ c.area(), c });
    }
}

int main()
{
    int N;
    Circle c;
    map<double, Circle> mp;
    cout << "Enter Number of circle you want to enter" << endl;
    cin >> N;
    insertData(mp,c,N);
    printData(mp);
    return 0;   
}

/*Output:
Enter Number of circle you want to enter
3
Enter radius of the circle 1
2
Enter coordinates of center of circle x,y = 
1 
2
Enter radius of the circle 2
3
Enter coordinates of center of circle x,y = 
2
3
Enter radius of the circle 3
5
Enter coordinates of center of circle x,y = 
4 
5
Details of circle 1
Radius of circle = 2
Coordinates of center of circle x,y 1,2
Area of the circle = 12.56
-----------------------------------------------------------
Details of circle 2
Radius of circle = 3
Coordinates of center of circle x,y 2,3
Area of the circle = 28.26
-----------------------------------------------------------
Details of circle 3
Radius of circle = 5
Coordinates of center of circle x,y 4,5
Area of the circle = 78.5
-----------------------------------------------------------
*/
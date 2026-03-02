#include <iostream>
#include <cmath>
using namespace std;

// PI
const double pi = 3.1416;

// Compute distance between two points
double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// compute radius of circle
double radius(double x1, double y1, double x2, double y2)
{
    return distance(x1, y1, x2, y2);
}

// compute area of circle
double area(double r)
{
    return pi * pow(r, 2);
}

// compute circumference of circle
double circumference(double r)
{
    return 2 * pi * r;
}

int main()
{
    double x1, y1, x2, y2;
    cout << "Enter the coordinates of the center of the circle (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of a point on the circumference of the circle (x2 y2): ";
    cin >> x2 >> y2;

    double dist = distance(x1, y1, x2, y2);
    double r = radius(x1, y1, x2, y2);
    double d = 2 * r;
    double a = area(r);
    double c = circumference(r);

    cout << "Circle Properties:" << endl;
    cout << "Distance: " << dist << endl;
    cout << "Radius: " << r << endl;
    cout << "Diameter: " << d << endl;
    cout << "Area: " << a << endl;
    cout << "Circumference: " << c << endl;

    return 0;
}

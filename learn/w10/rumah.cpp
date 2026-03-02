#include <iostream>
#include <string>
using namespace std;

struct house
{
    string style;
    int numOfBedrooms;
    int numOfBathrooms;
    int numOfCarsGarage;
    int yearBuilt;
    int finishedSquareFootage;
    double price;
    double tax;
};

void printHouse(house h)
{
    cout << "House Style: " << h.style << endl;
    cout << "Number of Bedrooms: " << h.numOfBedrooms << endl;
    cout << "Number of Bathrooms: " << h.numOfBathrooms << endl;
    cout << "Number of Cars in Garage: " << h.numOfCarsGarage << endl;
    cout << "Year Built: " << h.yearBuilt << endl;
    cout << "Finished Square Footage: " << h.finishedSquareFootage << endl;
    cout << "Price: $" << h.price << endl;
    cout << "Tax: $" << h.tax << endl;
}

int main()
{
    // Variable declaration house 1
    house house1;
    house1.style = "Ranch";
    house1.numOfBedrooms = 3;
    house1.numOfBathrooms = 2;
    house1.numOfCarsGarage = 2;
    house1.yearBuilt = 2020;
    house1.finishedSquareFootage = 1500;
    house1.price = 350000.00;
    house1.tax = 4500.00;
    printHouse(house1);
    cout << "----------" << endl;

    house house2;
    house2.style = "Colonial";
    house2.numOfBedrooms = 4;
    house2.numOfBathrooms = 3;
    house2.numOfCarsGarage = 3;
    house2.yearBuilt = 2018;
    house2.finishedSquareFootage = 2500;
    house2.price = 500000.00;
    house2.tax = 6000.00;
    printHouse(house2);
    cout << "---------" << endl;

    house h3; // house 3 sama seperti house 1
    h3 = house1;
    printHouse(h3);

    if (house1.style == h3.style && (house1.price == h3.price)) // compare harus sesama anggota
    {
        cout << "Test compare : SAMA" << endl;
    }

    return 0;
}

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void getLengthWidth(double& length, double& width);
double calcPerimeter(double length, double width);
double calcArea(double length, double width);
void displayProperties(double perimeter, double area);

int main()
{
    double length; 
    double width;
    double perimeter;
    double area;
    string again;

    cout << "Rectangle Properties Program" << endl;

    do
    {
        getLengthWidth(length, width);

        perimeter = calcPerimeter(length, width);
        area = calcArea(length, width);

        displayProperties(perimeter, area);

        cout << "Would you like to process another rectangle? (Y/N): ";
        cin >> again;

        cout << endl;

    } while (again == "Y" || again == "y" || again == "Yes" || again == "yes");

    cout << "Program ended." << endl;

    return 0;
}

/*
Purpose:
Prompts the user for the rectangle's length and width and validates the input.

Preconditions:
None.

Postconditions:
The length and width are greater than 0.
The validated values are returned to the caller through reference parameters.
*/
void getLengthWidth(double& length, double& width)
{
    cout << "Enter the length of the rectangle: ";
    cin >> length;

    while (length <= 0)
    {
        cout << "Invalid input. The length must be greater than 0." << endl;
        cout << "Enter the length of the rectangle: ";
        cin >> length;
    }

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    while (width <= 0)
    {
        cout << "Invalid input. The width must be greater than 0." << endl;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
    }
}

/*
Purpose:
Calculates and returns the perimeter of a rectangle.

Preconditions:
The length and width have already been validated.

Postconditions:
Returns the calculated perimeter.
*/
double calcPerimeter(double length, double width)
{
    return 2 * (length + width);
}

/*
Purpose:
Calculates and returns the area of a rectangle.

Preconditions:
The length and width have already been validated.

Postconditions:
Returns the calculated area.
*/
double calcArea(double length, double width)
{
    return length * width;
}

/*
Purpose:
Displays the rectangle's perimeter and area.

Preconditions:
Valid perimeter and area values are provided.

Postconditions:
The perimeter and area are displayed to the console.
*/
void displayProperties(double perimeter, double area)
{
    cout << fixed << setprecision(2);
    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area << endl;
}
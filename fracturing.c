
#include <stdio.h>
#include <math.h>
#define PI 3.14159


double askForUserInput()
{
    double userValue = 0.0;
    scanf("%lf", &userValue);
    return userValue;
}


void printPoints(double x1, double y1, double x2, double y2)
{
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);
}


double getDistance(double x1, double y1, double x2, double y2)
{
    double distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

    return distance;
}


double calculateDistance()
{
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    double x2 = askForUserInput();
    double y2 = askForUserInput();

    double distance = getDistance(x1, y1, x2, y2);

    printPoints(x1, y1, x2, y2);
    printf("The distance between the two points is %lf\n", distance);

    return 0;
}


double calculatePerimeter()
{
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    double x2 = askForUserInput();
    double y2 = askForUserInput();

    double distance = getDistance(x1, y1, x2, y2);

    double perimeter = 2 * PI * (distance / 2);

    printPoints(x1, y1, x2, y2);
    printf("The perimeter of the city encompassed by your requestis %lf\n", perimeter);

    return 0;
}


double calculateArea()
{
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    double x2 = askForUserInput();
    double y2 = askForUserInput();

    double distance = getDistance(x1, y1, x2, y2);

    double area = PI * pow((distance / 2), 2);

    printPoints(x1, y1, x2, y2);
    printf("The area of the city encompassed by your request is %lf\n", area);

    return 0;
}


double calculateWidth()
{
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    double x2 = askForUserInput();
    double y2 = askForUserInput();

    double width = getDistance(x1, y1, x2, y2);

    printPoints(x1, y1, x2, y2);
    printf("The width of the city encompassed by your request is %lf\n", width);

    return 0;
}


double calculateHeight()
{
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    double x2 = askForUserInput();
    double y2 = askForUserInput();

    double height = getDistance(x1, y1, x2, y2);

    printPoints(x1, y1, x2, y2);
    printf("The height of the city encompassed by your request is %lf\n", height);

    return 0;
}


int main(int argc, char **argv)
{   
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}
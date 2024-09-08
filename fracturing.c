//Zoe Mantle
//UCFID 5685421
//COP 3223
//Assignment 1 - Fracturing

#include <stdio.h>
#include <math.h>
#define PI 3.14159 //defines PI


double askForUserInput() //function to repeatedly get user input
{
    double userValue = 0.0; //declares and intializes userValue variable
    scanf("%lf", &userValue); //uses scanf to get input
    return userValue; //returns user input
}


void printPoints(double x1, double y1, double x2, double y2) //function to repeatedly print points
{
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1); //print point 1
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2); //print point 2
}


double getDistance() //gets points and calculates the distance to put into each function
{
    double x1 = askForUserInput(); //gets x1
    double y1 = askForUserInput(); //gets y1
    double x2 = askForUserInput(); //gets x2
    double y2 = askForUserInput(); //gets y2

    printPoints(x1, y1, x2, y2); //prints the new points out

    double distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)); //calculates distance

    return distance; //returns the distance
}


double calculateDistance() //function to display distance
{
    double distance = getDistance(); //calculates distance

    printf("The distance between the two points is %lf\n", distance); //displays distance

    return distance; //I wasn't able to figure how to make this function calculate the distance
                     //and transfer in to the other functions so I made another functions that
                     //could be repeated in every function without havung to repeat a lot of statements
}


double calculatePerimeter() //function to calculate and display perimeter
{
    double distance = getDistance(); //calculates distance

    double perimeter = 2 * PI * (distance / 2); //calculates perimeter

    printf("The perimeter of the city encompassed by your requestis %lf\n", perimeter); //displays perimeter

    return 1; //the function itself wasn't difficult to code, the only hard part figuring out the logic
              //for getting the distance and new points without repeating, to solve it i just made new functions.
}


double calculateArea() //function to calculate and display area
{
    double distance = getDistance(); //calculates distance

    double area = PI * pow((distance / 2), 2); //calculates area

    printf("The area of the city encompassed by your request is %lf\n", area); //displays area

    return 1; //the function itself wasn't difficult to code, the only hard part figuring out the logic
              //for getting the distance and new points without repeating, to solve it i just made new functions.
}


double calculateWidth() //function to calculate and display width
{
    double width = getDistance(); //calculates width, which is the same as distance/diameter

    printf("The width of the city encompassed by your request is %lf\n", width); //displays width

    return 1; //the function itself wasn't difficult to code, the only hard part figuring out the logic
              //for getting the distance and new points without repeating, to solve it i just made new functions.
}


double calculateHeight() //function to calculate and display height
{
    double height = getDistance(); //calculates height, which is the same as distance/diameter

    printf("The height of the city encompassed by your request is %lf\n", height); //displays height

    return 1; //the function itself wasn't difficult to code, the only hard part figuring out the logic
              //for getting the distance and new points without repeating, to solve it i just made new functions.
}


int main(int argc, char **argv) //main function, calls the other functions
{   
    calculateDistance(); //calls distance function
    calculatePerimeter(); //calls perimeter function
    calculateArea(); //calls area function
    calculateWidth(); //calls width function
    calculateHeight(); //calls height function
    
    return 0;
}
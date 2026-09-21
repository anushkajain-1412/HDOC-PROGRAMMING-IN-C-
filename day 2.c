1) Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

input:- 
#include <stdio.h>

int main()
{
    float length, breadth, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area of the rectangle = %.2f\n", area);
    printf("Perimeter of the rectangle = %.2f\n", perimeter);

    return 0;
}

output:- 
Enter the length of the rectangle: 20
Enter the breadth of the rectangle: 10
Area of the rectangle = 200.00
Perimeter of the rectangle = 60.00


2) Write a program to calculate the area and circumference of a circle given its radius.

input:- 
#include <stdio.h>

int main()
{
    float radius, area, circumference;
    const float PI = 3.14;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);

    return 0;
}

output:- 
Enter the radius of the circle: 10
Area of the circle = 314.00
Circumference of the circle = 62.80

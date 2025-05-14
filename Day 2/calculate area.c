#include <stdio.h>
#include <math.h>
int main() {
    int choice;
    float area, radius, length, width, side;
    printf("Choose the shape to calculate the area:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Square\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = M_PI * radius * radius;
            printf("The area of the circle is: %.2f\n", area);
            break;
        case 2:
            printf("Enter the length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("The area of the rectangle is: %.2f\n", area);
            break;
        case 3:
            printf("Enter the side length of the square: ");
            scanf("%f", &side);
            area = side * side;
            printf("The area of the square is: %.2f\n", area);
            break;
        default:
            printf("Invalid choice! Please enter a valid option (1, 2, or 3).\n");
            break;
    }
    return 0;
}

#include <stdio.h>
# define PI 3.14

int main(void) {
    double r, h;

    printf("Please enter the circle radius: ");
    scanf("%lf", &r);

    printf("Please enter the cylinder height: ");
    scanf("%lf", &h);

    double circumference = 2.0 * PI * r;
    double circle_area = PI * r * r;
    double sphere_surface = 4.0 * PI * r * r;
    double sphere_volume = 4.0 / 3.0 * PI * r * r * r;
    double cylinder_volume = PI * r * r * h;

    printf("\nRadius: %.6f; Height: %.6f\n", r, h);
    printf("Circle circumference: %.6f\n", circumference);
    printf("Circle area: %.6f\n", circle_area);
    printf("Sphere surface area: %.6f\n", sphere_surface);
    printf("Sphere volume: %.6f\n", sphere_volume);
    printf("Cylinder volume: %.6f\n", cylinder_volume);

    return 0;
}
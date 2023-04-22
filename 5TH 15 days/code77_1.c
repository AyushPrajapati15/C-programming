// Using structures to represent a rectangle and calculating its area and perimeter.
#include <stdio.h>
struct Rectangle {
  double length;
  double width;
};
double rectangle_area(struct Rectangle* r) {
  return r->length * r->width;
}

double rectangle_perimeter(struct Rectangle* r) {
  return 2 * (r->length + r->width);
}

int main() {
  struct Rectangle rectangle1;
  struct Rectangle* rectangle1_ptr = &rectangle1;

  rectangle1.length = 5.0;
  rectangle1.width = 3.0;

  double area = rectangle_area(rectangle1_ptr);
  double perimeter = rectangle_perimeter(rectangle1_ptr);

  printf("Length of the rectangle is %f and \nWidth is %f \nArea is %f \nPerimeter is %f.\n", rectangle1.length, rectangle1.width, area, perimeter);

  return 0;
}

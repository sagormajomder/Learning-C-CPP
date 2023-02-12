#include <stdio.h>
struct rectangular
{
    int length;
    int breadth;
};

int main()
{
    // struct rectangular r; --> declaration
    struct rectangular r = {10, 15}; // declaration and initialization (length=10, breadth=15)
    printf("Area of Rectangular : %d\n", r.length * r.breadth);
    r.length = 25;
    r.breadth = 20;
    printf("Area of Rectangular : %d\n", r.length * r.breadth);
}

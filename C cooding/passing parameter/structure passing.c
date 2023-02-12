#include <stdio.h>
struct Rectangular
{
    int length;
    int breadth;
};

struct Test
{
    int a[5];
    int n;
};

int area(struct Rectangular p)
{
    return p.length * p.breadth;
}
void changeLength(struct Rectangular *p, int n)
{
    p->length = n;
}
void fun(struct Test t1)
{
    printf("%d", t1.a[0]);
}

int main()
{
    struct Rectangular r = {10, 20};
    printf("Area is : %d\n\n", area(r));
    changeLength(&r, 15); // call by address
    printf("Area is : %d\n\n", area(r));

    struct Test t = {{1, 2, 3, 4, 5}, 10};
    // structure can pass by value. Despite having array in this structure, it can do pass by value.
    fun(t);
}

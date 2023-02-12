#include <stdio.h>
#include <stdlib.h>
struct rectangular
{
    int length;
    int breadth;
};
struct cricket
{
    int ball;
    int bat;
};
int main()
{
    struct rectangular r = {10, 20};
    struct rectangular *p = &r;
    printf("%d\n", r.length);
    (*p).length = 15; // accessing using pointer
    printf("%d\n", r.length);
    p->length = 20; // simple syntax
    printf("%d\n", r.length);

    // creating struct in heap memory
    struct cricket *pointer;
    pointer = (struct cricket *)malloc(sizeof(struct cricket));
    pointer->ball = 1;
    pointer->bat = 5;
    printf("%d", pointer->ball * pointer->bat);
}
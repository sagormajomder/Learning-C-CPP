#include <stdio.h>
struct cards
{
    int face;  // 0-12
    int shape; // 0-3 1 for club,2 for shades, 3 for diamond, 4 for heart
    int color; // 0-1 as black and red
};

int main()
{
    struct cards deck[52]; // as dech has total 52 card
    deck[0].face = 1;
    deck[0].shape = 1;
    deck[0].color = 1;

    printf("%d %d %d", deck[0].face, deck[0].shape, deck[0].color);
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x,y,p,t;
    scanf("%d %d",&x,&y);
    if(x>y)
        t=x%y;
    else
        p=x, x=y, y=p, t=x%y;
    while(t!=0)
        x=y, y=t,t=x%y;
    printf("%d",y);
    return 0;
}

#include <stdio.h>

typedef struct
{
    int xpos;
    int ypos;
} Point ;


Point getScale2xPoint(Point p1)
{
    Point p_new;
    p_new.xpos = p1.xpos * 2;
    p_new.ypos = p1.ypos * 2;

    return p_new;

}
int main()
{
    Point p1 = {1,2};
    Point p2 = getScale2xPoint(p1);
    scanf("%d %d", &p1.xpos, &p1.ypos);

    printf("%d %d\n",p2.xpos,p2.ypos);

    return 0;

}
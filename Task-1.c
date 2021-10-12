
#include <stdio.h>

int main()
{
    int x,steps;
    printf("enter the co-ordinate of friends house");
    scanf("%d",&x);
    if(x<=5)
    {
        steps=1;
        printf("minimum number of steps that elephant need to make to reach friend's home is =%d",steps);
    }
    else
    {
        if(x%5==0)
        {
            steps=x/5;
            printf("minimum number of steps that elephant need to make to reach friend's home is =%d",steps);
        }
        else
        {
            steps=(x/5)+1;
            printf("minimum number of steps that elephant need to make to reach friend's home is =%d",steps);
        }
    }
    return 0;
}

//simple intrest using input 
//simple interest calculator

#include<stdio.h>
int main()
{
    int p,r,t,si;
    printf("enter p : ");
    scanf("%d",&p);
    printf("enter r : ");
    scanf("%d",&r);
    printf("enter t : ");
    scanf("%d",&t);
    si = (p*r*t)/100;
    printf("p is : %d\n ", p);
    printf("r is : %d\n", r);
    printf("t is : %d \n", t);
    printf("simple interest is : %d ", si);

    

}
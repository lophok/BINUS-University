#include <stdio.h>
int main()
{
char n[100];
double t;
int u;
char n1[100];
double t1;
int u1;

scanf("%s %lf %d %s %lf %d",n,&t,&u,n1,&t1,&u1);
printf("Name 1: %s\nHeight 1: %.2lf\nAge 1: %d\nName 2: %s\nHeight 2: %.2lf\nAge 2: %d\n",n,t,u,n1,t1,u1);
return 0;
}
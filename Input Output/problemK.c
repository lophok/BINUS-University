#include <stdio.h>
int main(){
    char name[101],nis[10];
    int age;

    scanf("%[^\n]",name);
    scanf("%s %d",&nis,&age);
    printf("Name: %s\nNIS: %s\nAge: %d\n",name,nis,age);
}
#include <stdio.h>

int main() {
  char n[15];
  char m[100];
  char c;
  int o;

  scanf("%s\n", n);
  scanf("%[^\n]", m); getchar();
  scanf("%c %d", &c, &o);
  printf("Id    : %s\nName  : %s\nClass : %c\nNum   : %d\n", n, m, c, o);
  return 0;
}
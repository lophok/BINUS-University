#include <stdio.h>
int main(){
    char name[105];
    scanf("%[^\n]",&name);
    puts("#include <stdio.h>");
    puts("int main()");
    puts("{");
    printf("    printf(\"%%s\\n\",");
    printf("\"%s\");\n",name);
    puts("    return 0;");
    puts("}");
}
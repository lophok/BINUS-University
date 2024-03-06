#include <stdio.h>
#include <string.h>
int main(int position){
	int rolls;
	position=0;
	scanf("%d",&rolls);getchar();
	while(rolls--){
		scanf("%d",&position+1);
		position+=*(&position+1);
		switch(position){
			case 9:position = 21;break;
			case 33:position = 42;break;
			case 76:position = 92;break;
			case 53:position = 37;break;
			case 80:position = 59;break;
			case 97:position = 88;break;
		}
	}
	printf("%d\n",position);
    return 0;
}
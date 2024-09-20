#include <stdio.h> 
int main(void) {
  char a[3];

  scanf("%s", &a);
	for (int i = 0; i < 3; ++i){
		printf("%c", a[i]);
}

  return 0;
}
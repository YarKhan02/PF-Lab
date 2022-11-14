#include <stdio.h>
#include <stdlib.h>

void count(){
	char s[20] = "Wali Yar Khan";
	
	int len = strlen(s);
	int i = 0;
	int cu = 0, cl = 0, cs = 0;
	
	while(i < len){
		if((s[i] >= 65) && (s[i] <= 91)){
			cu++;
		}
		else if((s[i] >= 97) && (s[i] <= 122)){
			cl++;
		}
		else{
			cs++;
		}
		i++;
	}
	
	printf("\nUpper case letters: %d", cu);
	printf("\nLower case letters: %d", cl);
	printf("\nBlank spaces: %d", cs);
}

int main() {
	count();
}

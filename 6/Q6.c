#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char name[5][100], temp[100];
	int i, j;
	for (i = 0; i < 5; i++){
		scanf("%s", name[i]);
		getchar();
	}
	for (i = 0; i < 4; i++){
		for (j = i + 1; j < 5; j++){
			if (strcmp(name[i], name[j]) == 1) {
				strcpy(temp, name[i]);
				strcpy(name[i], name[j]);
				strcpy(name[j], temp);
			}
		}
	}
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

	for (i = 0; i < 5; i++){
		printf("%s ", name[i]);
	}






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int check(int a[], int n){
	int i;
	int l = 0, r = n - 1;
	for (i = 0; i < n; i++) {
		if (a[l] != a[r]){
			return 0;
		}
		++l;
		--r;
	}
	return 1;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf("%d", &n);
  	int a[20];
  	int i;
  	for (i = 0; i < n; i++){
  		scanf("%d", &a[i]);
	}
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	if (check(a, n) == 1) printf("1");
	else printf("0");







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

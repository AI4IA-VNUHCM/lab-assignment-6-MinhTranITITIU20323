/*
2. Receive n strings from the input and sort them ascendingly.
Ex:
 _________________________________________
| Input: one two three                    |
| Output: one three two                   |
|_________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int NotStrcmp(char *strg1, char *strg2){

    while( ( *strg1 != '\0' && *strg2 != '\0' ) && *strg1 == *strg2 ){
        strg1++;
        strg2++;
    }

    if(*strg1 == *strg2){
        return 0; 
    }

    else{
        return *strg1 - *strg2;
    }
}

void Ex2(int n, char *str[]){
	//Your codes here
	int i,j;
	char temp[100];
	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++){
			if(NotStrcmp(str[j],str[j+1])>0){
				strcpy(temp,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],temp);
			}
		}
	}
  	for(int i=0; i<n; i++){
    	printf("%s ", str[i]);
  	}
  	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	char *testcase[argc];
	int i;
	for(i=0; i<argc; i++){
		testcase[i] = argv[i+1];
	}
	
	Ex2(argc, testcase);
	
	return 0;
}

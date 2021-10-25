/**
  Dylan Uhryniuk
  3126716
  Asignment 5
  Question 1
*/
#include <stdio.h>

#define letter_count 30

int main( void ) {
	char word[letter_count];
	for(int i = 0; i < letter_count; i++){
		word[i] = ' ';
	}

	printf("Enter a word: ");
	scanf("%s", word);

	int count = 0;
	for( int i=0; i < letter_count; i++ ){
		if(word[i] != " "){
			switch(word[i]){
				case ('a'):
				case ('e'):
				case ('i'):
				case ('o'):
				case ('u'):
				case ('A'):
				case ('E'):
				case ('I'):
				case ('O'):
				case ('U'):
					count++;
					break;
			}
		}
	}
	printf("%s contains %d vowels.", word, count);

	return 0;
}

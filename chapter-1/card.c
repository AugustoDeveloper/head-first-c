#include <stdio.h>
#include <stdlib.h>

/*
 * Program to evaluate face value
 * Realeased under the Vegas Public License
 * (c) 2014 The College BlackJack Team
 *
 */

int main() {
  char card_name[3];
  int val = 0;
  while( card_name[0] != 'X' ) {
    puts("Enter the card name:");
    scanf("%2s", card_name);

    switch(card_name[0]) {
      case 'K':
      case 'J':
      case 'Q': val = 10;
      break;
     
      case 'A': val = 11;
      break;

      default: 
	val = atoi(card_name);
	if (val < 1 || val > 10) continue;
    }
    
    if (val > 2 && val < 7) {
      puts("Count has gone up");
    } else {
      if (val == 10) {
	puts("Count has gone down");
      }
    } 
  }
  return 0;
}

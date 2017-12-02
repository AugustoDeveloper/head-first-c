#include <stdio.h>

int main() {
  for(int i = 1; i <= 5; i++) {
    int x = 0, y = 0;
    printf("Output: %i\n\n", i);
    while (x < 5) {
      switch(i) {
        case 1: y =  x - y;
        break;
        case 2: y += x;
          break;
        case 3:
          y += 2;
          if (y > 4)
            y -= 1;
          break;
        case 4:
          x += 1;
          y += x;
          break; 
        default:
          if (y < 5) {
            x += 1;
            if (y < 3) {
              x -= 1;
            }
          }
          y += 2;
      }
     
      printf("=========\n\n\t%i%i\n\n\n===============", x, y);
      x += 1;
    }
  }
  return 0;
}

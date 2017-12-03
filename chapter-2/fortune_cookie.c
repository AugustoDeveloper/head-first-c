#include <stdio.h>

void fortune_cookies(char *msg) {
  printf("Message reads: %s", msg);
  printf("msg occupies %lu bytes\n", sizeof(msg));
}

int main() {
  char quote[] = "Cookies make you fat";
  fortune_cookies(quote);
  return 0;
}

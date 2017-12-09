#include <stdio.h>
#include <string.h>


char tracks[][80] = {
  "I left my heart in Harvard Med School",
  "Newark, Newark - a wonderful town",
  "Dancing with a Dork",
  "From here to maternity",
  "The girl from Iwo Jim"
};

void find_track_by_name(char track_name[]) {
  int i;
  for(i =0; i < 5; i++) {
    if (strstr(tracks[i], track_name)) {
      printf("Track: %i : '%s' \n ", i, tracks[i]);\
      return;
    }
  }
  printf("Not locate a track with: '%s'", track_name); 
}

int main() {
  char find_track[80];

  puts("Type the track name:");
  scanf("%79s", find_track);
  //fgets(find_track, 80, stdin); Este está causando uma falha na pesquisa pois incluir espacos a direita
  find_track_by_name(find_track);  

  return 0;

}

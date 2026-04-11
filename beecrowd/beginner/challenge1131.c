#include <stdio.h>
#include <stdlib.h>

int main() {
  char buffer[4096];
  int option;

  int inter_wins = 0;
  int gremio_wins = 0;
  int draws = 0;
  int total_options = 0;

  do {
    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
      continue;

    int inter_score, gremio_score;

    if (sscanf(buffer, "%d %d", &inter_score, &gremio_score) != 2)
      continue;

    if (inter_score > gremio_score)
      inter_wins++;
    else if (gremio_score > inter_score)
      gremio_wins++;
    else
      draws++;

    printf("Novo grenal (1-sim 2-nao)\n");

    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
      continue;

    if (sscanf(buffer, "%d", &option) != 1)
      continue;

    total_options++;
  } while (option != 2);

  printf("%d grenais\n", total_options);
  printf("Inter:%d\n", inter_wins);
  printf("Gremio:%d\n", gremio_wins);
  printf("Empates:%d\n", draws);

  if (inter_wins > gremio_wins)
    printf("Inter venceu mais\n");
  else if (gremio_wins > inter_wins)
    printf("Gremio venceu mais\n");
  else
    printf("Nao houve vencedor\n");

  return 0;
}

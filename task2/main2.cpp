/*

Hva vil skje hvis du skriver:

char *line = nullptr;   // eller char *line = 0;
strcpy(line, "Dette er en tekst");

Når strcpy prøver å skrive data til minnet som line peker på,
forsøker det å skrive til adresse null, som er ulovlig og fører
til at koden krasjer

*/


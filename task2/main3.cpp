
/*

Finn ting som kan gå galt i følgende programbit:

char text[5];
char *pointer = text;
char search_for = 'e';
cin >> text;
while (*pointer != search_for) {
  *pointer = search_for;
  pointer++;
}

While løkken kan gå i en uendlig loop dersom pointer ikke finner verdien search_for.
Pointer øker hver iterasjon og kan øke forbi minneområdet til text, og dermed skrive til minneområder som ikke er tildelt til programmet.
Kan for eksempel begynne å skrive utenfor array-grensen

 */
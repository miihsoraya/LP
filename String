#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  char texto[100] = {"a ideia e essa ideia"};
  char busca[10] = {"e"};
  char *p;

  p=strstr(texto,busca); //dois argumentos - o texto e a busca - preenche o restante anterior a busca solicitada com NULL
  p=strstr(p+1,busca);
  cout << p;
}

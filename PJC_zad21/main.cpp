#include <iostream>

using namespace std;


void odwroc()
{
  char znak;

  cin >> znak;
  if (znak!='.')
  {
  odwroc();
  cout << znak;
  }

}
int main(int argc, char *argv[])
{

  cout << "Podaj znak:";
  odwroc();


  return 0;
}








/*
Gdy pierwszy znak zostaje pobrany jest zapisywany w zmiennej znak, nie jest on jednak kropką, więc funkcja zostaje wywołana jeszcze raz.
Pobrany zostaje kolejny znak i ponownie zostaje zachowany w zmiennej (ale nie tej samej co wcześniej! - za każdym wywołaniem funkcji tworzone
są nowe zmienne lokalne). Drugi znak również nie jest kropką, więc funkcja zostaje wywołana trzeci raz i tym razem znakiem podanym przez użytkownika
 jest kropka. Następuje powrót (return) do poprzedniej funkcji i tam zostaje wypisana litera przechowywana w zmiennej, następnie kolejny return i znowu wypisanie.
*/

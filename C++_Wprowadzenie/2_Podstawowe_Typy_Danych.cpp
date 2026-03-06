// Prezentacja podstawowych typow danych

#include <iostream>


int main() {
   
   // Podstawowe typy 
   int x = 3;      // liczba calkowita
   float y = 3.5;  // liczba zmiennoprzecinkowa
   char z = 'A';   // znak [jeden]

   std::cout << x ;
   std::cout << x + 3;

   // dane tego samego rodzaju mozna zapisac za jednym razem
   int a = 1, b = 3, c = 5;

   // roznica miedzy int a float
   std::cout << x / 2 << std::endl; // zwraca nam liczbe calkowita
   std::cout << y / 2 << std::endl; // zwraca nam wlasciwy wynik

   std::cout << a << b << c << std::endl;
   std::cout << a << " " << b << " "<< c << std::endl;

   // char
   std::cout << z + 1 << std::endl;  // char zapisuje litery jako liczby w ASCII. Zwiekszenie litery o 1 daje nam kolejna litere alfabetu
   std::cout << int(z) << std::endl;

   //char z = 'A'; // zle - raz juz deklarowalizmy "z"
   //char o = "A"; // zle bo do char uzywamy '', mie "" -> '' - jeden znak, "" - lancuch znakow
   char o = 'A';       // dla jednego znaku
   char p[] = "ABC";   // dla wielu znakow

   
   std::cout  << p[0] << std::endl;
   std::cout  << p[1] << std::endl;

   char tekst_c[] = "Zaliczenie";
   std::string teskt_s = "Zaliczenie"; // do przechowywania lancucha znakow czesto uzywamy w praktyce string

   std::cout << teskt_s << " " << tekst_c << std::endl;
   std::cout << teskt_s.length() << std::endl;

   
   // Proste operacje
   //int x = 3;   // zle, bo juz deklarowalismy x
   x = 4;         // mozemy przypisac do x nowa wartosc
   
   std::cout << x << std::endl;

   // Skroty w zwiekszaniu/pomniejszaniu o 1
   std::cout << x << std::endl;
   std::cout << x + 1 << std::endl;
   std::cout << x++ << std::endl;
   std::cout << ++x << std::endl; // dochodzi do zmiany x!
   std::cout << --x << std::endl; //
   std::cout << x-- << std::endl; //

   // const
   const float pi = 3.14; // Jesli wiemy ze cos pozostanie bez zmian, dodajemy na starcie const, by zablokowac tego edycje

   
   return 0;
}

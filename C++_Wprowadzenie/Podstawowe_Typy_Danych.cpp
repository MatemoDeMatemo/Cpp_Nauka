// 1] Podstawowe typy danych
#include <iostream>
int main() {
   // Podstawowe typy 
   int x = 3;
   float y = 3;
   char z = 'A';

   std::cout << x ;
   std::cout << x + 3;

   // dane tego samego rodzaju mozna zapisac za jednym razem
   int a = 1, b = 3, c = 5;

   // roznica miedzy int a float
   std::cout << x / 2 << std::endl;
   std::cout << y / 2 << std::endl;

   std::cout << a << b << c << std::endl;
   std::cout << a << " " << b << " "<< c << std::endl;

   // char
   std::cout << z + 1 << std::endl;
   std::cout << int(z) << std::endl;

   //char z = 'A'; // zle
   //char z = "A"; // zle
   char o = 'A';
   //char p = "A"; // zle
   char p[] = "A";
   //char p[2] = "A"; // zle

   std::cout  << p[0] << std::endl;
   std::cout  << p[1] << std::endl;

   char tekst_c[] = "Zaliczenie";
   std::string teskt_s = { "Zaliczenie" };

   std::cout << teskt_s << " " << tekst_c << std::endl;
   std::cout << teskt_s.length() << std::endl;


   // Proste operacje
   //int x = 3; // zle
   x = 4;
   std::cout << x;

   std::cout << x << std::endl;
   std::cout << x + 1 << std::endl;
   std::cout << x++ << std::endl;
   std::cout << ++x << std::endl; // dochodzi do zmiany x!

   // const
   const float pi = 3.14; // stala
   return 0;
}

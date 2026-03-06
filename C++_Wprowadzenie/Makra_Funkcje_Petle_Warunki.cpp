////// 3] Makro
//#include <iostream>
//#define X 5
//#define DODAJ_JEDEN(n) ((n) + 1)
// 
//int main() {
//
//    int x = X;
//    std::cout << x << std::endl;
//    std::cout << X << std::endl;
//
//    //X = 6; // zle
//
//    // funkcja 
//    std::cout << DODAJ_JEDEN(10);
//
//
//    return 0;
//}



//// 4] Funkcje
#include <iostream>

// Funkcja dodajaca
int dodaj(int x, int y) {
    return x + y;
}

// Funkcja wypisujaca
void hello() {
    std::cout << "hello" << std::endl;
}

int main() {

    int a = 2;
    int b = 7;

    int wynik = dodaj(a, b);
    std::cout << wynik << std::endl;

    hello();

    return 0;
}

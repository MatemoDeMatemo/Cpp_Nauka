// Tworzenie nowych funkcji
#include <iostream>

// Wlasne funkcje mozemy deklarowac przed wejsciem do funkcji main()

// Funkcja dodajaca x i y
int dodaj(int x, int y) {      // int - oznacza ze funkcja zwracac bedzie liczbe calkowita za pomoca return
    
    return x + y;
}

// Funkcja wypisujaca
void hello() {     // void - oznacza ze funkcja nic nie zwraca za pomoca return

    std::cout << "hello" << std::endl;  
}


int main() {

    int a = 2;
    int b = 7;

    // Wywolanie i przypisanie wyniku 1 funkcji
    int wynik = dodaj(a, b);
    std::cout << wynik << std::endl;

    // Wywolanie 2 funkcji
    hello();

    
    return 0;
}

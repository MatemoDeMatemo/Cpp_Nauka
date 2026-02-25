// C++_Nauka.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <iostream>
#include "Dodawanie.h"

int Odejmowanie(int x, int y) {
    return(x - y);
}

int main()
{
    std::cout << "Hello World!\n";

    int wynik_odejmowania_1 = Odejmowanie(6, 2);
    std::cout << "wynik 1 odejmowania: " << wynik_odejmowania_1 << std::endl;

    int x = 5;
    int y = 3;

    int wynik_odejmowania_2 = Odejmowanie(x, y);
    std::cout << "wynik 2 odejmowania: " << wynik_odejmowania_2 << std::endl;

    // Odejmowanie, z kodem .cpp i .h

    std::cout << Dodawanie(x, y) << std::endl;
}


// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln

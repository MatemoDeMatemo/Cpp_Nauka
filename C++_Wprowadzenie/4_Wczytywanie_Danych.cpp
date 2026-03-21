#include <iostream>
#include <fstream>
#include <string>



int main()
{          
    // 1] Wczytywanie plikow tekstowych
    std::ifstream plik_txt("C:/.../Desktop/plik.txt"); // podaj sciezke
    
    // Sprawdz czy plik sie otworzyl
    if (!plik_txt.is_open()) {
        std::cerr << "Nie można otworzyć pliku!" << std::endl;
        return 1;
    }
    // Wyciaganie danych
    std::string linia_txt; // tworzymy obiekt do przechowywania wynikow linii

    while (std::getline(plik_txt, linia_txt)) {   // getline: czytanie, zapisywanie, warunki
        std::cout << linia_txt << std::endl;
    }

    plik_txt.close(); // zamykamy otwarty plik

    std::cout << linia_txt << std::endl;



    // 2] Wczytywanie plikow csv
    std::ifstream plik_csv("C:/.../Desktop/plik.csv");

    // Sprawdz czy plik sie otworzyl
    if (!plik_csv.is_open()) {
        std::cerr << "Nie można otworzyć pliku!" << std::endl;
        return 1;
    }

    // Wyciaganie danych
    std::string linia_csv; // tworzymy obiekt do przechowywania wynikow linii
    std::string kolumna1;  // tworzymy obiekt do przechowywania calosci
    
    while (std::getline(plik_csv, linia_csv)) { // while dziala tak dlugo jak getline zwraca TRUE
        kolumna1 += linia_csv + "\n";  // doklejaj od razu
    }

    plik_csv.close(); // zamykamy otwarty plik

    std::cout << kolumna1[1] << std::endl;
    std::cout << kolumna1 << std::endl;

    return 0;
}


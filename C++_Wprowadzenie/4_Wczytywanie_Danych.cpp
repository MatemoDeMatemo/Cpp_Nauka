#include <iostream>
#include <fstream>
#include <string>

// std::ifstream (input file stream) - do czytania danych z pliku
// std::ofstream (output file stream) - do zapisywania do pliku
// std::getline - wczytaj cala linie az do /n i zapisuje ja do zmiennej typu std::string -> std::getline(strumien, zmienna, ',');
// std::stringstream ss(linia); - tworzy strumien stringa

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

    // ========================================================= Zapisywanie plikow ================================================================
    
    // 3] Zapisywanie do pliku tekstowego (.txt)
    std::ofstream zapis_txt("C:/.../Desktop/nowy_plik.txt"); // tworzymy / nadpisujemy plik

    // Sprawdz czy plik sie otworzyl
    if (!zapis_txt.is_open())
    {
        std::cerr << "Nie można zapisać pliku!" << std::endl;
        return 1;
    }

    // Zapisywanie danych
    zapis_txt << "Pierwsza linia tekstu" << std::endl;
    zapis_txt << "Druga linia tekstu" << std::endl;

    zapis_txt.close(); // zamykamy plik



    // =========================================================
    // 4] Zapisywanie do pliku csv (.csv)
    std::ofstream zapis_csv("C:/.../Desktop/nowy_plik.csv");

    // Sprawdz czy plik sie otworzyl
    if (!zapis_csv.is_open())
    {
        std::cerr << "Nie można zapisać pliku!" << std::endl;
        return 1;
    }

    // Zapisywanie danych (wartosci oddzielone przecinkiem!)
    zapis_csv << "Imie,Nazwisko,Wiek" << std::endl; // naglowek

    zapis_csv << "Jan;Kowalski;25" << std::endl;
    zapis_csv << "Anna;Nowak;30" << std::endl;

    zapis_csv.close(); // zamykamy plik

    
    // ========================================================= Odczyt CSV – rozdzielanie po średniku (stringstream) ================================================================

    std::ifstream plik("C:/.../Desktop/plik.csv");

    if (!plik.is_open())
    {
        std::cerr << "Nie można otworzyć pliku!" << std::endl;
        return 1;
    }

    std::string linia;

    while (std::getline(plik, linia))
    {
        std::stringstream ss(linia); // wrzucamy linie do "strumienia"

        std::string imie, nazwisko, wiek;

        // rozdzielanie po przecinku
        std::getline(ss, imie, ';');
        std::getline(ss, nazwisko, ';');
        std::getline(ss, wiek, ';');

        // wypisanie osobno
        std::cout << "Imie: " << imie << std::endl;
        std::cout << "Nazwisko: " << nazwisko << std::endl;
        std::cout << "Wiek: " << wiek << std::endl;
        std::cout << "---------" << std::endl;
    }

    plik.close();


    return 0;
}


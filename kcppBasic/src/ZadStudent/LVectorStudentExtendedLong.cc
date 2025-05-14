#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <fstream>
#include <numeric>

using namespace std;

struct Student {
    string imie;
    string nazwisko;
    string indeks;

    void wyswietl() const {
        cout << imie << " " << nazwisko << " (" << indeks << ")";
    }
};

vector<Student> listaStudentow;

void zapiszDoPliku(const string& nazwaPliku) {
    ofstream plik(nazwaPliku);
    if (!plik) {
        cerr << "Blad przy otwieraniu pliku do zapisu!" << endl;
        return;
    }

    for (const auto& student : listaStudentow) {
        plik << student.imie << "," << student.nazwisko << "," << student.indeks << "\n";
    }
    cout << "Zapisano dane do pliku: " << nazwaPliku << endl;
}

void wczytajZPliku(const string& nazwaPliku) {
    ifstream plik(nazwaPliku);
    if (!plik) {
        cerr << "Blad przy otwieraniu pliku do odczytu!" << endl;
        return;
    }

    listaStudentow.clear();
    string linia;
    while (getline(plik, linia)) {
        size_t przecinek1 = linia.find(',');
        size_t przecinek2 = linia.find(',', przecinek1 + 1);

        if (przecinek1 != string::npos && przecinek2 != string::npos) {
            Student s;
            s.imie = linia.substr(0, przecinek1);
            s.nazwisko = linia.substr(przecinek1 + 1, przecinek2 - przecinek1 - 1);
            s.indeks = linia.substr(przecinek2 + 1);
            listaStudentow.push_back(s);
        }
    }
    cout << "Wczytano dane z pliku: " << nazwaPliku << endl;
}

bool czyIndeksIstnieje(const string& indeks, const string& pomijanyIndeks = "") {
    return any_of(listaStudentow.begin(), listaStudentow.end(),
        [&indeks, &pomijanyIndeks](const Student& s) { 
            return s.indeks == indeks && s.indeks != pomijanyIndeks; 
        });
}

double sredniaDlugoscImion() {
    if (listaStudentow.empty()) return 0.0;
    
    int suma = accumulate(listaStudentow.begin(), listaStudentow.end(), 0,
        [](int total, const Student& s) { return total + s.imie.length(); });
    
    return static_cast<double>(suma) / listaStudentow.size();
}

void edytujStudenta() {
    if (listaStudentow.empty()) {
        cout << "Lista jest pusta!" << endl;
        return;
    }

    string indeks;
    cout << "Podaj numer indeksu studenta do edycji: ";
    getline(cin, indeks);

    auto it = find_if(listaStudentow.begin(), listaStudentow.end(),
        [&indeks](const Student& s) { return s.indeks == indeks; });

    if (it == listaStudentow.end()) {
        cout << "Nie znaleziono studenta!" << endl;
        return;
    }

    Student noweDane = *it;
    cout << "Edytowany student: ";
    noweDane.wyswietl();
    cout << endl;

    cout << "Nowe imie (aktualne: " << noweDane.imie << "), enter aby pominac: ";
    string noweImie;
    getline(cin, noweImie);
    if (!noweImie.empty()) noweDane.imie = noweImie;

    cout << "Nowe nazwisko (aktualne: " << noweDane.nazwisko << "), enter aby pominac: ";
    string noweNazwisko;
    getline(cin, noweNazwisko);
    if (!noweNazwisko.empty()) noweDane.nazwisko = noweNazwisko;

    cout << "Nowy numer indeksu (aktualne: " << noweDane.indeks << "), enter aby pominac: ";
    string nowyIndeks;
    getline(cin, nowyIndeks);
    
    if (!nowyIndeks.empty()) {
        if (czyIndeksIstnieje(nowyIndeks, noweDane.indeks)) {
            cout << "Student o takim indeksie juz istnieje!" << endl;
            return;
        }
        noweDane.indeks = nowyIndeks;
    }

    *it = noweDane;
    cout << "Zaktualizowano dane studenta: ";
    it->wyswietl();
    cout << endl;
}

int main() {
    const string nazwaPliku = "studenci.txt";
    int wybor;

    cout << "=== Rozszerzony program do zarzadzania lista studentow ===" << endl;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Dodaj studenta" << endl;
        cout << "2. Usun studenta" << endl;
        cout << "3. Edytuj studenta" << endl;
        cout << "4. Wyswietl liste" << endl;
        cout << "5. Sortuj liste (alfabetycznie)" << endl;
        cout << "6. Sprawdz obecnosc studenta" << endl;
        cout << "7. Zapisz dane do pliku" << endl;
        cout << "8. Wczytaj dane z pliku" << endl;
        cout << "9. Oblicz srednia dlugosc imion" << endl;
        cout << "0. Wyjdz" << endl;
        cout << "Wybierz opcje: ";
        cin >> wybor;
        cin.ignore();

        switch (wybor) {
            case 1: {
                Student nowy;
                cout << "Podaj imie: ";
                getline(cin, nowy.imie);
                
                if (nowy.imie.empty()) {
                    cout << "Imie nie moze byc puste!" << endl;
                    break;
                }

                cout << "Podaj nazwisko: ";
                getline(cin, nowy.nazwisko);
                
                cout << "Podaj numer indeksu: ";
                getline(cin, nowy.indeks);

                if (czyIndeksIstnieje(nowy.indeks)) {
                    cout << "Student o takim indeksie juz istnieje!" << endl;
                } else {
                    listaStudentow.push_back(nowy);
                    cout << "Dodano studenta: ";
                    nowy.wyswietl();
                    cout << endl;
                }
                break;
            }
            case 2: {
                if (listaStudentow.empty()) {
                    cout << "Lista jest pusta!" << endl;
                    break;
                }
                
                string indeks;
                cout << "Podaj numer indeksu studenta do usuniecia: ";
                getline(cin, indeks);
                
                auto it = find_if(listaStudentow.begin(), listaStudentow.end(),
                    [&indeks](const Student& s) { return s.indeks == indeks; });
                
                if (it != listaStudentow.end()) {
                    cout << "Usunieto studenta: ";
                    it->wyswietl();
                    cout << endl;
                    listaStudentow.erase(it);
                } else {
                    cout << "Nie znaleziono studenta!" << endl;
                }
                break;
            }
            case 3: {
                edytujStudenta();
                break;
            }
            case 4: {
                if (listaStudentow.empty()) {
                    cout << "Lista jest pusta!" << endl;
                } else {
                    cout << "\nLista studentow (" << listaStudentow.size() << "):\n";
                    for (const auto& student : listaStudentow) {
                        cout << "- ";
                        student.wyswietl();
                        cout << endl;
                    }
                }
                break;
            }
            case 5: {
                sort(listaStudentow.begin(), listaStudentow.end(),
                    [](const Student& a, const Student& b) {
                        return a.nazwisko < b.nazwisko || 
                              (a.nazwisko == b.nazwisko && a.imie < b.imie);
                    });
                cout << "Posortowano liste!" << endl;
                break;
            }
            case 6: {
                string indeks;
                cout << "Podaj numer indeksu do sprawdzenia: ";
                getline(cin, indeks);
                
                bool istnieje = czyIndeksIstnieje(indeks);
                cout << (istnieje ? "Student jest na liscie!" : "Nie ma takiego studenta!") << endl;
                break;
            }
            case 7: {
                zapiszDoPliku(nazwaPliku);
                break;
            }
            case 8: {
                wczytajZPliku(nazwaPliku);
                break;
            }
            case 9: {
                double srednia = sredniaDlugoscImion();
                cout << "Srednia dlugosc imion: " << srednia << endl;
                break;
            }
            case 0: {
                cout << "Koniec programu." << endl;
                break;
            }
            default: {
                cout << "Nieprawidlowa opcja!" << endl;
            }
        }
    } while (wybor != 0);

    return 0;
}

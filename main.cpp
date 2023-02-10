#include <iostream>
#include <vector>
using namespace std;

class Osoba{
private:
    string imie;
    string nazwisko;
public:

    Osoba(string imie, string nazwisko){
        this -> imie = imie;
        this -> nazwisko = nazwisko;
    }

    void wczytaj(){
        cout << "\nPodaj imie: ";
        cin >> this -> imie;
        cout << "Podaj nazwisko: ";
        cin >> this -> nazwisko;
    }

    void wypisz(){
        cout << "\nImie: " << this -> imie << "\nNazwisko: " << this -> nazwisko;
    }
};

vector<Osoba> OsToVec(int n){
     vector <Osoba> przech;
    for(int i=0; i<n; i++){
        przech.push_back(Osoba("Jan", "Kowalski"));
    }
    return przech;
}

int main() {
Osoba maciek("maciek", "kowalski");
maciek.wypisz();
maciek.wczytaj();
maciek.wypisz();
cout << "\n-------------------------------\n";
for(auto z: OsToVec(5)){
    z.wypisz();
}
    return 0;
}

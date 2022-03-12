//
// conversion - Programm für die Umrechnung der 
// Temperatur von Grad Celsius in Grad Fahrenheit
// Fahrenheit = Celsius * (212-32)/100 + 32
//

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    // Eingabe der Temperatur in Celsius
    int celsius;
    cout << "Geben Sie die Temperatur in Celsius ein:";
    cin >> celsius;

    // Umwandlung von Celsius in Fahrenheit
    int fahrenheit;
    fahrenheit = celsius * 9/5 + 32;

    // Ausgabe der Ergebnisse (gefolgt von einem Zeilenumbruch)
    cout << "Der Wert in Fahrenheit ist:";
    cout << fahrenheit << endl;

    // Warten, bis der Benutzer bereit ist, bevor das Programm
    // beendet wird, sodass der Benutzer die Programmergebnisse sieht
    cout << "Weiter mit der Eingabetaste..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
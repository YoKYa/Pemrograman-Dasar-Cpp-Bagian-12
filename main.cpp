#include <iostream>

using namespace std;

int main(){
    system("cls");

    int Hasil;
    cout << "Program Sederhana Switch Case " << endl << endl;
    cout << "Hasil dari 5 x 5 Adalah ";
    cin >> Hasil;
    cout << endl;

    switch (Hasil)
    {
    case 25:
        cout << "Jawaban Kamu Benar" << endl << endl;
        break;
    
    default:
        cout << "Jawaban Kamu Salah" << endl << endl;
        break;
    }

    cin.get();
    return 0;
}
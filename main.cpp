#include <iostream>

using namespace std;

int main() {
    string cadena;

    //cin >> cadena;
    getline(cin, cadena); //lee hasta \n
    cout << cadena.size() << endl;

    return 0;
}
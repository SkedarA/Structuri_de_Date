#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> listaAdiacenta(int numarVarfuri, vector<pair<int, int>> muchii) {
    vector<vector<int>> listaAdiacenta(numarVarfuri);

    for (const auto& muchie : muchii) {
        int i = muchie.first;
        int j = muchie.second;
        listaAdiacenta[i].push_back(j);
    }

    return listaAdiacenta;
}

int main() {
    int numarVarfuri = 4;
    vector<pair<int, int>> muchii = {{0, 1}, {0, 2}, {1, 2}, {2, 3}};

    vector<vector<int>> listaAdiacentaRezultat = listaAdiacenta(numarVarfuri, muchii);

    for (int i = 0; i < numarVarfuri; i++) {
        cout << "Vârful " << i << " este adiacent cu: ";
        for (const auto& vecin : listaAdiacentaRezultat[i]) {
            cout << vecin << " ";
        }
        cout << endl;
    }

    return 0;
}

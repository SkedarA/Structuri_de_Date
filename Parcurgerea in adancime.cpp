#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void ParcurgereaInAdancime(int nodInitial,vector<int> &lista) {

    stack<int> stiva;
    vector<bool> vizitate;
    int nCurent;
    stiva.push(nodInitial);
    vizitate.insert(vizitate.begin(), true);

    while (!stiva.empty()) {
        int nCurent = stiva.top();
        stiva.pop();

        cout << nCurent << " ";

        for (int vecin : lista[nCurent] ) {
            if (!vizitate[vecin]) {
                stiva.push(vecin);
                vizitate[vecin] = true;
            }
        }
    }

}

int main() {
    int numarVarfuri = 4;
    vector<int> lista = { 0, 1, 3, 5 };
    int nodInitial = 0;

    cout << "Parcurgerea in adancime a grafului:" << endl;
    ParcurgereaInAdancime(nodInitial, lista);

    return 0;

}
#include <iostream>
#include <vector>
using namespace std;

// Fonction pour vérifier si tous les points sont collinéaires avec la ligne définie par les points p1 et p2
bool checkCollinear(int p1, int p2, const vector<int>& y) {
    int dx = p2 - p1;
    int dy = y[p2] - y[p1];

    // Vérifier que tous les autres points sont alignés
    for (int i = 0; i < y.size(); i++) {
        if (i != p1 && i != p2) {
            int dx2 = i - p1;
            int dy2 = y[i] - y[p1];

            // Vérification de la collinéarité avec la même pente
            if (dy * dx2 != dx * dy2) {
                return false;
            }
        }
    }
    return true;
}

bool solve(const vector<int>& y) {
    int n = y.size();

    // Vérifier pour chaque point si c'est possible d'avoir une solution
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            vector<int> remainingPoints;
            // Ajouter tous les points qui ne sont pas sur la première droite
            for (int k = 0; k < n; k++) {
                if (k != i && k != j) {
                    remainingPoints.push_back(k);
                }
            }

            // Vérifier si la première ligne passe par i et j
            if (checkCollinear(i, j, y)) {
                // Maintenant, vérifier les autres points
                if (remainingPoints.empty()) {
                    return true;
                }

                // Vérifier si tous les points restants sont sur une droite parallèle
                if (checkCollinear(remainingPoints[0], remainingPoints[0], y)) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<int> y(n);
    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }

    if (solve(y)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

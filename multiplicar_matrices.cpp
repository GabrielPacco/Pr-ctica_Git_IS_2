#include <iostream>
#include <vector>

using namespace std;

void multiplicar_matrices(vector<vector<int>> &matriz1, vector<vector<int>> &matriz2, vector<vector<int>> &matriz3, int n, int m, int p)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            matriz3[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                matriz3[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

int main()
{
    int n, m, p;
    cin >> n >> m >> p;
    vector<vector<int>> matriz1(n, vector<int>(m));
    vector<vector<int>> matriz2(m, vector<int>(p));
    vector<vector<int>> matriz3(n, vector<int>(p));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matriz1[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> matriz2[i][j];
        }
    }
    multiplicar_matrices(matriz1, matriz2, matriz3, n, m, p);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << matriz3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
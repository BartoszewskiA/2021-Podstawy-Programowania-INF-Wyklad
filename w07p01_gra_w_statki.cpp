#include <iostream>

using namespace std;

int plansza[10][10] = {
    0, 1, 0, 0, 9, 0, 0, 0, 9, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 2, 0,
    0, 1, 0, 0, 9, 0, 0, 0, 3, 0,
    0, 2, 9, 0, 0, 0, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 2, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 0, 1,
    9, 0, 9, 0, 0, 9, 2, 3, 0, 0,
    9, 0, 9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 1, 0, 1, 1, 0};

// 0 - puste pole
// 1 - pudlo
// 2 - statek odkryty
// 3 - statek trafiony
// 9 - statek ukryty

void rysuj_plansze(bool odkryj_plansze = false);
void strzal(string w, int k);
void sprawdz_sasiednie(int x, int y);

int main()
{
    string wiersz;
    int kolumna;
    do
    {
        rysuj_plansze();
        cout << endl
             << "Podaj litere: ";
        cin >> wiersz;
        if (wiersz == "x")
        {
            rysuj_plansze();
            break;
        }
        cout << "Podaj liczbe: ";
        cin >> kolumna;
        strzal(wiersz, kolumna);
    } while (wiersz != "x");

    return 0;
}

void strzal(string w, int k)
{
    int x = k - 1;
    char wiersz = w[0];
    int y = (int)wiersz - 65;

    switch (plansza[y][x])
    {
    case 0:
        plansza[y][x] = 1;
        break;
    case 2:
        plansza[y][x] = 3;
        break;
    case 9:
        plansza[y][x] = 3;
    }
    sprawdz_sasiednie(x, y);
}

void sprawdz_sasiednie(int x, int y)
{
    if (y > 0 && plansza[y - 1][x] == 9)
        plansza[y - 1][x] = 2;
    if (y < 9 && plansza[y + 1][x] == 9)
        plansza[y + 1][x] = 2;
    if (x > 0 && plansza[y][x - 1] == 9)
        plansza[y][x - 1] = 2;
    if (x < 0 && plansza[y][x + 1] == 9)
        plansza[y][x + 1] = 2;
}

void rysuj_plansze(bool odkryj_plansze)
{
    system("cls");
    cout << endl;
    cout << "  ";
    for (int i = 1; i <= 10; i++)
        cout << " " << i << " ";
    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << (char)(65 + i) << " ";
        for (int j = 0; j < 10; j++)
        {
            switch (plansza[i][j])
            {
            case 0:
                cout << " . ";
                break;
            case 1:
                cout << " * ";
                break;
            case 2:
                cout << (char)176 << (char)176 << (char)176;
                break;
            case 3:
                cout << (char)176 << "#" << (char)176;
                break;
            case 9:
                if (odkryj_plansze)
                {
                    cout << (char)219 << (char)219 << (char)219;
                    break;
                }
                else
                {
                    cout << " . ";
                    break;
                }
            }
        }
        cout << endl;
    }
}
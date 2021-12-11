#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

// 0 - puste pole       ->1
// 1 - pudlo            --
// 2 - odkryty statek   ->3
// 3 - trafiony statek  --
// 7 - ukryty statek    ->3

int plansza[10][10] = {
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    7, 7, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 7, 0, 7, 7, 7, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 2, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
    0, 7, 0, 0, 0, 0, 7, 7, 7, 0,
    0, 7, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 7, 0, 0, 2, 3, 2, 7, 0, 0,
    0, 7, 0, 0, 0, 0, 0, 0, 0, 0};

void rysuj_plansze(bool odkryj = false);
void strzal(string w, int k);
void sprawdz_sasiednie(int x, int y);
bool sprawsz_czy_koniec();

bool kolizja(int y, int x);
void wyczysc_plansze();
bool ustaw_statek_1(int x, int y);
bool ustaw_statek_2(int x, int y, int kierunek);
bool ustaw_statek_3(int x, int y, int kierunek);
void wylosuj_plansze();

int main()
{
    string wiersz;
    int kolumna;
    wyczysc_plansze();
    wylosuj_plansze();
    //rysuj_plansze(true);

    // do
    // {
    //     rysuj_plansze();
    //     cout << "Podaj litere: ";
    //     cin >> wiersz;
    //     if (wiersz == "x")
    //     {
    //         rysuj_plansze(true);
    //         break;
    //     }
    //     cout << "Podaj liczbe: ";
    //     cin >> kolumna;
    //     strzal(wiersz, kolumna);
    // } while (!sprawsz_czy_koniec()); //while (wiersz != "x");

    do
    {
        rysuj_plansze();
        cout << "Podaj litere: ";
        cin >> wiersz;
        if (wiersz == "x")
        {
            rysuj_plansze(true);
            break;
        }
        cout << "Podaj liczbe: ";
        cin >> kolumna;
        strzal(wiersz, kolumna);
    } while (!sprawsz_czy_koniec()); //while (wiersz != "x");
    return 0;
}

void strzal(string w, int k)
{
    int x = k - 1;
    char znak = w[0];
    int y = (int)znak - 65;
    switch (plansza[y][x])
    {
    case 0:
        plansza[y][x] = 1;
        break;
    case 2:
        plansza[y][x] = 3;
        break;
    case 7:
        plansza[y][x] = 3;
        break;
    }
    sprawdz_sasiednie(x, y);
}

void sprawdz_sasiednie(int x, int y)
{
    if (x > 0 && plansza[y][x - 1] == 7)
        plansza[y][x - 1] = 2;
    if (x < 9 && plansza[y][x + 1] == 7)
        plansza[y][x + 1] = 2;
    if (y > 0 && plansza[y - 1][x] == 7)
        plansza[y - 1][x] = 2;
    if (y < 9 && plansza[y + 1][x] == 7)
        plansza[y + 1][x] = 2;
}

bool sprawsz_czy_koniec()
{

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            if (plansza[i][j] == 7)
            {
                return false;
            }
    return true;
}

void rysuj_plansze(bool odkryj)
{
    system("cls");

    cout << endl;
    cout << "  ";
    for (int i = 1; i <= 10; i++)
        cout << " " << i << " ";
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << (char)(i + 65) << " ";
        for (int j = 0; j < 10; j++)
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
            case 7:
                if (odkryj)
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
        cout << endl;
    }
}

void wyczysc_plansze()
{
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            plansza[i][j] = 0;
}

bool kolizja(int y, int x)
{
    if (y < 0 || y > 9 || x < 0 || x > 9)
        return true; //pole poza plansza
    if (plansza[y][x] != 0)
        return true; //pole zajete
    if (y - 1 >= 0 && plansza[y - 1][x] != 0)
        return true; //po lewej
    if (y + 1 <= 9 && plansza[y + 1][x] != 0)
        return true; //po prawej
    if (x + 1 <= 9 && plansza[y][x + 1] != 0)
        return true; //dol
    if (x - 1 >= 0 && plansza[y][x - 1] != 0)
        return true; //gora
    if (x - 1 >= 0 && y - 1 >= 0 && plansza[y - 1][x - 1] != 0)
        return true; //lewa gorna
    if (x - 1 >= 0 && y + 1 <= 9 && plansza[y + 1][x - 1] != 0)
        return true; //lewa dolna
    if (x + 1 <= 9 && y - 1 >=0 && plansza[y - 1][x + 1] != 0)
        return true; //prawa gorna
    if (x + 1 <= 9 && y + 1 <=9 && plansza[y + 1][x + 1] != 0)
        return true; //prawa dolna

    return false;
}

bool ustaw_statek_1(int x, int y)
{
    if (kolizja(x, y))
        return false;
    else
    {
        plansza[x][y] = 7;
        return true;
    }
}

bool ustaw_statek_2(int x, int y, int kierunek) //kierunek = 0 - poziomo w prawo
                                                //kierunek = 1 - pionowo w dol
{
    if (kierunek == 0 && !kolizja(x, y) && !kolizja(x + 1, y))
    {
        plansza[x][y] = 7;
        plansza[x + 1][y] = 7;
        return true;
    }
    if (kierunek == 1 && !kolizja(x, y) && !kolizja(x, y + 1))
    {
        plansza[x][y] = 7;
        plansza[x][y + 1] = 7;
        return true;
    }
    return false;
}

bool ustaw_statek_3(int x, int y, int kierunek) //kierunek = 0 - poziomo w prawo
                                                //kierunek = 1 - pionowo w dol
{
    if (kierunek == 0 && !kolizja(x, y) && !kolizja(x + 1, y) && !kolizja(x + 2, y))
    {
        plansza[x][y] = 7;
        plansza[x + 1][y] = 7;
        plansza[x + 2][y] = 7;
        return true;
    }
    if (kierunek == 1 && !kolizja(x, y) && !kolizja(x, y + 1) && !kolizja(x, y + 2))
    {
        plansza[x][y] = 7;
        plansza[x][y + 1] = 7;
        plansza[x][y + 2] = 7;
        return true;
    }
    return false;
}

void wylosuj_plansze()
{
    srand(time(NULL));
    //losowanie 2 okretkow trzymasztowych
    int x, y, k, n = 0;
    do
    {
        x = rand() % 10;
        y = rand() % 10;
        k = rand() % 2;
        if (ustaw_statek_3(y, x, k))
            n++;
    } while (n < 2);

    //losowanie 3 okretkow dwumasztowych
    n = 0;
    do
    {
        x = rand() % 10;
        y = rand() % 10;
        k = rand() % 2;
        if (ustaw_statek_2(y, x, k))
            n++;
    } while (n < 3);

    //losowanie 4 okretkow jednomasztowych
    n = 0;
    do
    {
        x = rand() % 10;
        y = rand() % 10;
        k = rand() % 2;
        if (ustaw_statek_1(y, x))
            n++;
    } while (n < 4);
}
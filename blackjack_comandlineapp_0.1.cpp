#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <fstream>
#include <string>

using namespace std;

int wartosc[27], krupier[10], suma[25], reszta[24], w, wynikkrupier, remis = 0;
float l, talia, lb, k, statystyka, wygrane = 0, przegrane = 0, gra;
double kasa, zaklad;

int main()
{
	cout << endl << "Podaj ilosc talii: ";
	cin >> talia;
	k = talia * 52;
	lb = 0;
	l = 0;
	gra = 1;

	Sleep(100);

start:
	for (;;)
	{
		Sleep(100);
		cout << endl << "Gra " << gra << endl;
		cout << endl << "Pozostale karty: " << k;
		cout << endl << "Zostalo talii: " << talia;
		cout << endl << "Wartosc talii: " << lb;
		cout << endl << "Wartosc rzeczywista talii: " << l;
		cout << endl << "Wartosc kart krupiera: " << wynikkrupier;
		cout << endl << "Wartosc kart gracza: " << w;
		cout << endl << "Statystyki:" << endl;
		cout << "Wygrane:   " << wygrane << endl;
		cout << "Przegrane: " << przegrane << endl;
		cout << "Wygranych: " << statystyka << "%" << endl;

		int wartosc[27] = { 0 };
		int krupier[10] = { 0 };
		int suma[25] = { 0 };
		int reszta[24] = { 0 };
		system("cls");
		cout << endl << "Wartosc karty 1 - ";
		cin >> wartosc[0];
		cout << endl << "Wartosc karty krupiera - ";
		cin >> krupier[0];
		cout << endl << "Wartosc karty 2 - ";
		cin >> wartosc[1];
		if (wartosc[0] == 11)
		{
			k--;
			lb--;
		}
		else if ((wartosc[0] == 10) || (wartosc[0] == 1))
		{
			k--;
			lb--;
		}
		else if ((wartosc[0] <= 6) && (wartosc[0] >= 2))
		{
			k--;
			lb++;
		}
		else if ((wartosc[0] >= 7) && (wartosc[0] <= 9))
		{
			k--;
		}
		if (wartosc[1] == 11)
		{
			k--;
			lb--;
		}
		else if ((wartosc[1] == 10) || (wartosc[1] == 1))
		{
			k--;
			lb--;
		}
		else if ((wartosc[1] <= 6) && (wartosc[1] >= 2))
		{
			k--;
			lb++;
		}
		else if ((wartosc[1] >= 7) && (wartosc[1] <= 9))
		{
			k--;
		}
		if (krupier[0] == 11)
		{
			k--;
			lb--;
		}
		else if ((krupier[0] == 10) || (krupier[0] == 1))
		{
			k--;
			lb--;
		}
		else if ((krupier[0] <= 6) && (krupier[0] >= 2))
		{
			k--;
			lb++;
		}
		else if ((krupier[0] >= 7) && (krupier[0] <= 9))
		{
			k--;
		}

		for (int i = 0; i <= 22; i++)
		{
			suma[1] = wartosc[0] + wartosc[1];

			w = suma[i + 1] + wartosc[i + 2];
			suma[i + 2] = w;

			talia = k / 52;
			l = lb / talia;

			Sleep(100);


			if (wartosc[i + 2] == 0)
			{

				//PARY
				//PARY
				if (wartosc[0] == wartosc[1])
				{
					w = wartosc[0] + wartosc[1];
					//2
					//2
					//2
					if ((krupier[0] == 2) && ((wartosc[0] == 11) && (wartosc[1] == 11)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 2) && ((wartosc[0] == 2) && (wartosc[1] == 2)))
					{
						if (l <= -4)
						{
							system("cls"); cout << endl << "DOBIERZ" << endl;
						}
						else
						{
							system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
						}
					}
					if ((krupier[0] == 2) && ((wartosc[0] == 3) && (wartosc[1] == 3)))
					{
						if (l <= 0)
						{
							system("cls"); cout << endl << "DOBIERZ" << endl;
						}
						else
						{
							system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
						}
					}
					if ((krupier[0] == 2) && ((wartosc[0] == 4) && (wartosc[1] == 4)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 2) && ((wartosc[0] == 5) && (wartosc[1] == 5)))
					{
						system("cls"); cout << endl << "PODWOJ" << endl;
						zaklad = zaklad * 2;
					}
					if ((krupier[0] == 2) && ((wartosc[0] == 6) && (wartosc[1] == 6)))
					{
						if (l <= -2)
						{
							system("cls"); cout << endl << "DOBIERZ" << endl;
						}
						else
						{
							system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
						}
					}
					if ((krupier[0] == 2) && ((wartosc[0] == 7) && (wartosc[1] == 7)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 2) && ((wartosc[0] == 8) && (wartosc[1] == 8)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 2) && ((wartosc[0] == 9) && (wartosc[1] == 9)))
					{
						if (l <= -3)
						{
							system("cls"); cout << endl << "DOBIERZ" << endl;
						}
						else
						{
							system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
						}
					}
					if ((krupier[0] == 2) && ((wartosc[0] == 10) && (wartosc[1] == 10)))
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
					//3
					//3
					//3
					if ((krupier[0] == 3) && ((wartosc[0] == 11) && (wartosc[1] == 11)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 3) && ((wartosc[0] == 2) && (wartosc[1] == 2)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 3) && ((wartosc[0] == 3) && (wartosc[1] == 3)))
					{
						if (l <= -5)
						{
							system("cls"); cout << endl << "DOBIERZ" << endl;
						}
						else
						{
							system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
						}
					}
					if ((krupier[0] == 3) && ((wartosc[0] == 4) && (wartosc[1] == 4)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 3) && ((wartosc[0] == 5) && (wartosc[1] == 5)))
					{
						system("cls"); cout << endl << "PODWOJ" << endl;
						zaklad = zaklad * 2;
					}
					if ((krupier[0] == 3) && ((wartosc[0] == 6) && (wartosc[1] == 6)))
					{
						if (l <= -2)
						{
							system("cls"); cout << endl << "DOBIERZ" << endl;
						}
						else
						{
							system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
						}
					}
					if ((krupier[0] == 3) && ((wartosc[0] == 7) && (wartosc[1] == 7)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 3) && ((wartosc[0] == 8) && (wartosc[1] == 8)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 3) && ((wartosc[0] == 9) && (wartosc[1] == 9)))
					{
						if (l <= -4)
						{
							system("cls"); cout << endl << "DOBIERZ" << endl;
						}
						else
						{
							system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
						}
					}
					if ((krupier[0] == 3) && ((wartosc[0] == 10) && (wartosc[1] == 10)))
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
					//4
					//4
					//4
					if ((krupier[0] == 4) && ((wartosc[0] == 11) && (wartosc[1] == 11)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 4) && ((wartosc[0] == 2) && (wartosc[1] == 2)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 4) && ((wartosc[0] == 3) && (wartosc[1] == 3)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 4) && ((wartosc[0] == 4) && (wartosc[1] == 4)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 4) && ((wartosc[0] == 5) && (wartosc[1] == 5)))
					{
						system("cls"); cout << endl << "PODWOJ" << endl;
						zaklad = zaklad * 2;
					}
					if ((krupier[0] == 4) && ((wartosc[0] == 6) && (wartosc[1] == 6)))
					{
						if (l <= -5)
						{
							system("cls"); cout << endl << "DOBIERZ" << endl;
						}
						else
						{
							system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
						}
					}
					if ((krupier[0] == 4) && ((wartosc[0] == 7) && (wartosc[1] == 7)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 4) && ((wartosc[0] == 8) && (wartosc[1] == 8)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 4) && ((wartosc[0] == 9) && (wartosc[1] == 9)))
					{
						if (l <= -6)
						{
							system("cls"); cout << endl << "DOBIERZ" << endl;
						}
						else
						{
							system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
						}
					}
					if ((krupier[0] == 4) && ((wartosc[0] == 10) && (wartosc[1] == 10)))
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
					//5
					//5
					//5
					if ((krupier[0] == 5) && ((wartosc[0] == 11) && (wartosc[1] == 11)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 5) && ((wartosc[0] == 2) && (wartosc[1] == 2)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 5) && ((wartosc[0] == 3) && (wartosc[1] == 3)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 5) && ((wartosc[0] == 4) && (wartosc[1] == 4)))
					{
						if (l <= -2)
						{
							system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
						}
						else
						{
							system("cls"); cout << endl << "DOBIERZ" << endl;
						}
					}
					if ((krupier[0] == 5) && ((wartosc[0] == 5) && (wartosc[1] == 5)))
					{
						system("cls"); cout << endl << "PODWOJ" << endl;
						zaklad = zaklad * 2;
					}
					if ((krupier[0] == 5) && ((wartosc[0] == 6) && (wartosc[1] == 6)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 5) && ((wartosc[0] == 7) && (wartosc[1] == 7)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 5) && ((wartosc[0] == 8) && (wartosc[1] == 8)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 5) && ((wartosc[0] == 9) && (wartosc[1] == 9)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 5) && ((wartosc[0] == 10) && (wartosc[1] == 10)))
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
					//6
					//6
					//6
					if ((krupier[0] == 6) && ((wartosc[0] == 11) && (wartosc[1] == 11)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 6) && ((wartosc[0] == 2) && (wartosc[1] == 2)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 6) && ((wartosc[0] == 3) && (wartosc[1] == 3)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 6) && ((wartosc[0] == 4) && (wartosc[1] == 4)))
					{
						if (l <= -5)
						{
							system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
						}
						else
						{
							system("cls"); cout << endl << "DOBIERZ" << endl;
						}
					}
					if ((krupier[0] == 6) && ((wartosc[0] == 5) && (wartosc[1] == 5)))
					{
						system("cls"); cout << endl << "PODWOJ" << endl;
						zaklad = zaklad * 2;
					}
					if ((krupier[0] == 6) && ((wartosc[0] == 6) && (wartosc[1] == 6)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 6) && ((wartosc[0] == 7) && (wartosc[1] == 7)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 6) && ((wartosc[0] == 8) && (wartosc[1] == 8)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 6) && ((wartosc[0] == 9) && (wartosc[1] == 9)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 6) && ((wartosc[0] == 10) && (wartosc[1] == 10)))
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
					//7
					//7
					//7
					if ((krupier[0] == 7) && ((wartosc[0] == 11) && (wartosc[1] == 11)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 7) && ((wartosc[0] == 2) && (wartosc[1] == 2)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 7) && ((wartosc[0] == 3) && (wartosc[1] == 3)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 7) && ((wartosc[0] == 4) && (wartosc[1] == 4)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 7) && ((wartosc[0] == 5) && (wartosc[1] == 5)))
					{
						system("cls"); cout << endl << "PODWOJ" << endl;
						zaklad = zaklad * 2;
					}
					if ((krupier[0] == 7) && ((wartosc[0] == 6) && (wartosc[1] == 6)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 7) && ((wartosc[0] == 7) && (wartosc[1] == 7)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 7) && ((wartosc[0] == 8) && (wartosc[1] == 8)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 7) && ((wartosc[0] == 9) && (wartosc[1] == 9)))
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
					if ((krupier[0] == 7) && ((wartosc[0] == 10) && (wartosc[1] == 10)))
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
					//8
					//8
					//8
					if ((krupier[0] == 8) && ((wartosc[0] == 11) && (wartosc[1] == 11)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 8) && ((wartosc[0] == 2) && (wartosc[1] == 2)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 8) && ((wartosc[0] == 3) && (wartosc[1] == 3)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 8) && ((wartosc[0] == 4) && (wartosc[1] == 4)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 8) && ((wartosc[0] == 5) && (wartosc[1] == 5)))
					{
						if (l <= -5)
						{
							system("cls"); cout << endl << "DOBIERZ" << endl;
						}
						else
						{
							system("cls"); cout << endl << "PODWOJ" << endl;
							zaklad = zaklad * 2;
						}
					}
					if ((krupier[0] == 8) && ((wartosc[0] == 6) && (wartosc[1] == 6)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 8) && ((wartosc[0] == 7) && (wartosc[1] == 7)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 8) && ((wartosc[0] == 8) && (wartosc[1] == 8)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 8) && ((wartosc[0] == 9) && (wartosc[1] == 9)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 8) && ((wartosc[0] == 10) && (wartosc[1] == 10)))
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
					//9
					//9
					//9
					if ((krupier[0] == 9) && ((wartosc[0] == 11) && (wartosc[1] == 11)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 9) && ((wartosc[0] == 2) && (wartosc[1] == 2)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 9) && ((wartosc[0] == 3) && (wartosc[1] == 3)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 9) && ((wartosc[0] == 4) && (wartosc[1] == 4)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 9) && ((wartosc[0] == 5) && (wartosc[1] == 5)))
					{
						system("cls"); cout << endl << "PODWOJ" << endl;
						zaklad = zaklad * 2;
					}
					if ((krupier[0] == 9) && ((wartosc[0] == 6) && (wartosc[1] == 6)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 9) && ((wartosc[0] == 7) && (wartosc[1] == 7)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 9) && ((wartosc[0] == 8) && (wartosc[1] == 8)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 9) && ((wartosc[0] == 9) && (wartosc[1] == 9)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 9) && ((wartosc[0] == 10) && (wartosc[1] == 10)))
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
					//10
					//10
					//10
					if ((krupier[0] == 10) && ((wartosc[0] == 11) && (wartosc[1] == 11)))
					{
						system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
					}
					if ((krupier[0] == 10) && ((wartosc[0] == 2) && (wartosc[1] == 2)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 10) && ((wartosc[0] == 3) && (wartosc[1] == 3)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 10) && ((wartosc[0] == 4) && (wartosc[1] == 4)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 10) && ((wartosc[0] == 5) && (wartosc[1] == 5)))
					{
						if (l >= 4)
						{
							system("cls"); cout << endl << "PODWOJ" << endl;
							zaklad = zaklad * 2;
						}
						else
						{
							system("cls"); cout << endl << "DOBIERZ" << endl;
						}
					}
					if ((krupier[0] == 10) && ((wartosc[0] == 6) && (wartosc[1] == 6)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 10) && ((wartosc[0] == 7) && (wartosc[1] == 7)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 10) && ((wartosc[0] == 8) && (wartosc[1] == 8)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 10) && ((wartosc[0] == 9) && (wartosc[1] == 9)))
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
					if ((krupier[0] == 10) && ((wartosc[0] == 10) && (wartosc[1] == 10)))
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
					//11
					//11
					//11
					if ((krupier[0] == 11) && ((wartosc[0] == 11) && (wartosc[1] == 11)))
					{
						if (l <= -4)
						{
							system("cls"); cout << endl << "DOBIERZ" << endl;
						}
						else
						{
							system("cls"); cout << endl << "ROZDWOJ" << endl; goto rozdwoj;
						}
					}
					if ((krupier[0] == 11) && ((wartosc[0] == 2) && (wartosc[1] == 2)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 11) && ((wartosc[0] == 3) && (wartosc[1] == 3)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 11) && ((wartosc[0] == 4) && (wartosc[1] == 4)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 11) && ((wartosc[0] == 5) && (wartosc[1] == 5)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 11) && ((wartosc[0] == 6) && (wartosc[1] == 6)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 11) && ((wartosc[0] == 7) && (wartosc[1] == 7)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 11) && ((wartosc[0] == 8) && (wartosc[1] == 8)))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 11) && ((wartosc[0] == 9) && (wartosc[1] == 9)))
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
					if ((krupier[0] == 11) && ((wartosc[0] == 10) && (wartosc[1] == 10)))
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
				}

				//PARY Z ASEM
				//PARY Z ASEM

				else if ((wartosc[0] == 11) || (wartosc[1] == 11))
				{
					w = wartosc[0] + wartosc[1];
					//2 
					//2
					//2
					if ((krupier[0] == 2) && (w <= 17))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 2) && (w >= 18))
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
					//3
					//3
					//3
					if ((krupier[0] == 3) && (w <= 16))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 3) && (w == 17))
					{
						if (l <= -4)
						{
							system("cls"); cout << endl << "DOBIERZ" << endl;
						}
						else
						{
							system("cls"); cout << endl << "PODWOJ" << endl;
							zaklad = zaklad * 2;
						}
					}
					if ((krupier[0] == 3) && (w == 18))
					{
						if (l <= -3)
						{
							system("cls"); cout << endl << "DOBIERZ" << endl;
						}
						else
						{
							system("cls"); cout << endl << "PODWOJ" << endl;
							zaklad = zaklad * 2;
						}
					}
					if ((krupier[0] == 3) && (w == 19))
					{
						if (l >= 5)
						{
							system("cls"); cout << endl << "DOBIERZ" << endl;
						}
						else
						{
							system("cls"); cout << endl << "PASS" << endl;

						}
					}
					if ((krupier[0] == 3) && (w >= 19))
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
					//4
					//4
					//4
					if ((krupier[0] == 4) && (w <= 14))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 4) && (w == 15))
					{
						if (l <= -1)
						{
							system("cls"); cout << endl << "DOBIERZ" << endl;
						}
						else
						{
							system("cls"); cout << endl << "PODWOJ" << endl;
							zaklad = zaklad * 2;
						}
					}
					if ((krupier[0] == 4) && (w == 16))
					{
						if (l <= -3)
						{
							system("cls"); cout << endl << "DOBIERZ" << endl;
						}
						else
						{
							system("cls"); cout << endl << "PODWOJ" << endl;
							zaklad = zaklad * 2;
						}
					}
					if ((krupier[0] == 4) && (w >= 17) && (w <= 18))
					{
						system("cls"); cout << endl << "PODWOJ" << endl;
						zaklad = zaklad * 2;
					}
					if ((krupier[0] == 4) && (w >= 19))
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
					//5
					//5
					//5
					if ((krupier[0] == 5) && (w == 13))
					{
						if (l <= -0)
						{
							system("cls"); cout << endl << "DOBIERZ" << endl;
						}
						else
						{
							system("cls"); cout << endl << "PODWOJ" << endl;
							zaklad = zaklad * 2;
						}
					}
					if ((krupier[0] == 5) && (w == 14))
					{
						if (l <= -2)
						{
							system("cls"); cout << endl << "DOBIERZ" << endl;
						}
						else
						{
							system("cls"); cout << endl << "PODWOJ" << endl;
							zaklad = zaklad * 2;
						}
					}
					if ((krupier[0] == 5) && (w >= 15) && (w <= 18))
					{
						system("cls"); cout << endl << "PODWOJ" << endl;
						zaklad = zaklad * 2;
					}
					if ((krupier[0] == 5) && (w >= 19))
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
					//6
					//6
					//6
					if ((krupier[0] == 6) && (w == 13))
					{
						if (l <= -2)
						{
							system("cls"); cout << endl << "DOBIERZ" << endl;
						}
						else
						{
							system("cls"); cout << endl << "PODWOJ" << endl;
							zaklad = zaklad * 2;
						}
					}
					if ((krupier[0] == 6) && (w == 15))
					{
						if (l <= -5)
						{
							system("cls"); cout << endl << "DOBIERZ" << endl;
						}
						else
						{
							system("cls"); cout << endl << "PODWOJ" << endl;
							zaklad = zaklad * 2;
						}
					}
					if ((krupier[0] == 6) && (w >= 16) && (w <= 18))
					{
						system("cls"); cout << endl << "PODWOJ" << endl;
						zaklad = zaklad * 2;
					}
					if ((krupier[0] == 6) && (w >= 19))
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
					//7
					//7
					//7
					if ((krupier[0] == 7) && (w <= 17))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 7) && (w >= 18))
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
					//8
					//8
					//8
					if ((krupier[0] == 8) && (w <= 17))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 8) && (w >= 18))
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
					//9
					//9
					//9
					if ((krupier[0] == 9) && (w <= 18))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 9) && (w >= 19))
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
					//10
					//10
					//10
					if ((krupier[0] == 10) && (w <= 18))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 10) && (w >= 19))
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
					//11
					//11
					//11
					if ((krupier[0] == 11) && (w <= 18))
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					if ((krupier[0] == 11) && (w >= 19))
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
				}

			}


			if ((wartosc[0] != 11) && (wartosc[1] != 11) && (wartosc[0] != wartosc[1]))
			{
				//2
				//2
				//2
				if ((krupier[0] == 2) && (w <= 8))
				{
					system("cls"); cout << endl << "DOBIERZ" << endl;
				}
				if ((krupier[0] == 2) && (w == 9))
				{
					if (l >= 1)
					{
						system("cls"); cout << endl << "PODOWJ" << endl;
						zaklad = zaklad * 2;
					}
					else
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
				}
				if ((krupier[0] == 2) && (w == 10))
				{
					system("cls"); cout << endl << "PODWOJ" << endl;
					zaklad = zaklad * 2;
				}
				if ((krupier[0] == 2) && (w == 11))
				{
					system("cls"); cout << endl << "PODWOJ" << endl;
					zaklad = zaklad * 2;
				}
				if ((krupier[0] == 2) && (w == 12))
				{
					if (l >= 3)
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
					else
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
				}
				if ((krupier[0] == 2) && (w == 13))
				{
					if (l <= -1)
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					else
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
				}
				if ((krupier[0] == 2) && (w == 14))
				{
					if (l <= -4)
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					else
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
				}
				if ((krupier[0] == 2) && (w >= 15))
				{
					system("cls"); cout << endl << "PASS" << endl;

				}
				//3
				//3
				//3
				if ((krupier[0] == 3) && (w <= 8))
				{
					system("cls"); cout << endl << "DOBIERZ" << endl;
				}
				if ((krupier[0] == 3) && (w == 9))
				{
					if (l <= -1)
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					else
					{
						system("cls"); cout << endl << "PODWOJ" << endl;
						zaklad = zaklad * 2;
					}
				}
				if ((krupier[0] == 3) && (w == 10))
				{
					system("cls"); cout << endl << "PODWOJ" << endl;
					zaklad = zaklad * 2;
				}
				if ((krupier[0] == 3) && (w == 11))
				{
					system("cls"); cout << endl << "PODWOJ" << endl;
					zaklad = zaklad * 2;
				}
				if ((krupier[0] == 3) && (w == 12))
				{
					if (l >= 2)
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
					else
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
				}
				if ((krupier[0] == 3) && (w == 13))
				{
					if (l <= -2)
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					else
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
				}
				if ((krupier[0] == 3) && (w == 14))
				{
					if (l <= -5)
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					else
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
				}
				if ((krupier[0] == 2) && (w >= 15))
				{
					system("cls"); cout << endl << "PASS" << endl;

				}
				//4
				//4
				//4
				if ((krupier[0] == 4) && (w <= 7))
				{
					system("cls"); cout << endl << "DOBIERZ" << endl;
				}
				if ((krupier[0] == 4) && (w == 8))
				{
					if (l >= 5)
					{
						system("cls"); cout << endl << "PODWOJ" << endl;
						zaklad = zaklad * 2;
					}
					else
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
				}
				if ((krupier[0] == 4) && (w == 9))
				{
					if (l <= -3)
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					else
					{
						system("cls"); cout << endl << "PODWOJ" << endl;
						zaklad = zaklad * 2;
					}
				}
				if ((krupier[0] == 4) && (w == 10))
				{
					system("cls"); cout << endl << "PODWOJ" << endl;
					zaklad = zaklad * 2;
				}
				if ((krupier[0] == 4) && (w == 11))
				{
					system("cls"); cout << endl << "PODWOJ" << endl;
					zaklad = zaklad * 2;
				}
				if ((krupier[0] == 4) && (w == 12))
				{
					if (l <= 0)
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					else
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
				}
				if ((krupier[0] == 4) && (w == 13))
				{
					if (l <= -4)
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					else
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
				}
				if ((krupier[0] == 4) && (w >= 14))
				{
					system("cls"); cout << endl << "PASS" << endl;

				}
				//5
				//5
				//5
				if ((krupier[0] == 5) && (w <= 7))
				{
					system("cls"); cout << endl << "DOBIERZ" << endl;
				}
				if ((krupier[0] == 5) && (w == 8))
				{
					if (l >= 3)
					{
						system("cls"); cout << endl << "PODWOJ" << endl;
						zaklad = zaklad * 2;
					}
					else
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
				}
				if ((krupier[0] == 5) && (w == 9))
				{
					if (l <= -5)
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					else
					{
						system("cls"); cout << endl << "PODWOJ" << endl;
						zaklad = zaklad * 2;
					}
				}
				if ((krupier[0] == 5) && (w == 10))
				{
					system("cls"); cout << endl << "PODWOJ" << endl;
					zaklad = zaklad * 2;
				}
				if ((krupier[0] == 5) && (w == 11))
				{
					system("cls"); cout << endl << "PODWOJ" << endl;
					zaklad = zaklad * 2;
				}
				if ((krupier[0] == 5) && (w == 12))
				{
					if (l <= -2)
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					else
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
				}
				if ((krupier[0] == 5) && (w == 13))
				{
					if (l <= -1)
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					else
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
				}
				if ((krupier[0] == 5) && (w >= 14))
				{
					system("cls"); cout << endl << "PASS" << endl;

				}
				//6
				//6
				//6
				if ((krupier[0] == 6) && (w <= 7))
				{
					system("cls"); cout << endl << "DOBIERZ" << endl;
				}
				if ((krupier[0] == 6) && (w == 8))
				{
					if (l >= 1)
					{
						system("cls"); cout << endl << "PODWOJ" << endl;
						zaklad = zaklad * 2;
					}
					else
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
				}
				if ((krupier[0] == 6) && (w == 9))
				{
					system("cls"); cout << endl << "PODWOJ" << endl;
					zaklad = zaklad * 2;
				}
				if ((krupier[0] == 6) && (w == 10))
				{
					system("cls"); cout << endl << "PODWOJ" << endl;
					zaklad = zaklad * 2;
				}
				if ((krupier[0] == 6) && (w == 11))
				{
					system("cls"); cout << endl << "PODWOJ" << endl;
					zaklad = zaklad * 2;
				}
				if ((krupier[0] == 6) && (w == 12))
				{
					if (l <= -1)
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					else
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
				}
				if ((krupier[0] == 6) && (w == 13))
				{
					if (l <= -5)
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					else
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
				}
				if ((krupier[0] == 6) && (w >= 14))
				{
					system("cls"); cout << endl << "PASS" << endl;

				}
				//7
				//7
				//7
				if ((krupier[0] == 7) && (w <= 8))
				{
					system("cls"); cout << endl << "DOBIERZ" << endl;
				}
				if ((krupier[0] == 7) && (w == 9))
				{
					if (l >= 3)
					{
						system("cls"); cout << endl << "PODWOJ" << endl;
						zaklad = zaklad * 2;
					}
					else
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
				}
				if ((krupier[0] == 7) && (w == 10))
				{
					system("cls"); cout << endl << "PODWOJ" << endl;
					zaklad = zaklad * 2;
				}
				if ((krupier[0] == 7) && (w == 11))
				{
					system("cls"); cout << endl << "PODWOJ" << endl;
					zaklad = zaklad * 2;
				}
				if ((krupier[0] == 7) && (w >= 12) && (w <= 16))
				{
					system("cls"); cout << endl << "DOBIERZ" << endl;
				}
				if ((krupier[0] == 7) && (w >= 17))
				{
					system("cls"); cout << endl << "PASS" << endl;

				}
				//8
				//8
				//8
				if ((krupier[0] == 8) && (w <= 9))
				{
					system("cls"); cout << endl << "DOBIERZ" << endl;
				}
				if ((krupier[0] == 8) && (w == 10))
				{
					if (l <= -5)
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					else
					{
						system("cls"); cout << endl << "PODWOJ" << endl;
						zaklad = zaklad * 2;
					}
				}
				if ((krupier[0] == 8) && (w == 11))
				{
					system("cls"); cout << endl << "PODWOJ" << endl;
					zaklad = zaklad * 2;
				}
				if ((krupier[0] == 8) && (w >= 12) && (w <= 16))
				{
					system("cls"); cout << endl << "DOBIERZ" << endl;
				}
				if ((krupier[0] == 8) && (w >= 17))
				{
					system("cls"); cout << endl << "PASS" << endl;

				}
				//9
				//9
				//9
				if ((krupier[0] == 9) && (w <= 9))
				{
					system("cls"); cout << endl << "DOBIERZ" << endl;
				}
				if ((krupier[0] == 9) && (w == 10))
				{
					if (l <= -2)
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					else
					{
						system("cls"); cout << endl << "PODWOJ" << endl;
						zaklad = zaklad * 2;
					}
				}
				if ((krupier[0] == 9) && (w == 11))
				{
					if (l <= -5)
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					else
					{
						system("cls"); cout << endl << "PODWOJ" << endl;
						zaklad = zaklad * 2;
					}
				}
				if ((krupier[0] == 9) && (w >= 12) && (w <= 15))
				{
					system("cls"); cout << endl << "DOBIERZ" << endl;
				}
				if ((krupier[0] == 9) && (w == 16))
				{
					if (l >= 5)
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
					else
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
				}
				if ((krupier[0] == 9) && (w >= 17))
				{
					system("cls"); cout << endl << "PASS" << endl;

				}
				//10
				//10
				//10
				if ((krupier[0] == 10) && (w <= 9))
				{
					system("cls"); cout << endl << "DOBIERZ" << endl;
				}
				if ((krupier[0] == 10) && (w == 10))
				{
					if (l >= 4)
					{
						system("cls"); cout << endl << "PODWOJ" << endl;
						zaklad = zaklad * 2;
					}
					else
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
				}
				if ((krupier[0] == 10) && (w == 11))
				{
					if (l <= -5)
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
					else
					{
						system("cls"); cout << endl << "PODWOJ" << endl;
						zaklad = zaklad * 2;
					}
				}
				if ((krupier[0] == 10) && (w >= 12) && (w <= 14))
				{
					system("cls"); cout << endl << "DOBIERZ" << endl;
				}
				if ((krupier[0] == 10) && (w == 15))
				{
					if (l >= 4)
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
					else
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
				}
				if ((krupier[0] == 10) && (w == 16))
				{
					if (l >= 0)
					{
						system("cls"); cout << endl << "PASS" << endl;

					}
					else
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
				}
				if ((krupier[0] == 10) && (w >= 17))
				{
					system("cls"); cout << endl << "PASS" << endl;

				}
				//11
				//11
				//11
				if ((krupier[0] == 11) && (w <= 9))
				{
					system("cls"); cout << endl << "DOBIERZ" << endl;
				}
				if ((krupier[0] == 11) && (w == 10))
				{
					if (l >= 4)
					{
						system("cls"); cout << endl << "PODWOJ" << endl;
						zaklad = zaklad * 2;
					}
					else
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
				}
				if ((krupier[0] == 11) && (w == 11))
				{
					if (l >= 5)
					{
						system("cls"); cout << endl << "PODWOJ" << endl;
						zaklad = zaklad * 2;
					}
					else
					{
						system("cls"); cout << endl << "DOBIERZ" << endl;
					}
				}
				if ((krupier[0] == 11) && (w >= 12) && (w <= 16))
				{
					system("cls"); cout << endl << "DOBIERZ" << endl;
				}
				if ((krupier[0] == 11) && (w >= 17))
				{
					system("cls"); cout << endl << "PASS" << endl;

				}
			}

			cout << endl << "Wartosc karty " << i + 3 << " - ";
			cin >> wartosc[i + 3];
			system("cls");

			w = suma[i + 1] + wartosc[i + 3];

			if (wartosc[i + 3] == 11)
			{
				k--;
				lb--;
			}
			else if ((wartosc[i + 3] >= 10) || (wartosc[i + 3] == 1))
			{
				k--;
				lb--;
			}
			else if ((wartosc[i + 3] <= 6) && (wartosc[i + 3] >= 2))
			{
				k--;
				lb++;
			}
			else if ((wartosc[i + 3] >= 7) && (wartosc[i + 3] <= 9))
			{
				k--;
			}
			else if (wartosc[i + 3] == 0)
			{
				break;
			}
			if ((wartosc[i + 3] == 0) || (w + wartosc[i + 3] >= 21))
			{
				break;
			}
		}
		cout << endl << "PASS" << endl;

	pozostale:
		for (int i = 0; i <= 23; i++)
		{
			cout << endl << "Pozostale kart - ";
			cin >> reszta[i];
			if (reszta[i] == 11)
			{
				k--;
				lb--;
			}
			else if ((reszta[i] >= 10) || (reszta[i] == 1))
			{
				k--;
				lb--;
			}
			else if ((reszta[i] <= 6) && (reszta[i] >= 2))
			{
				k--;
				lb++;
			}
			else if ((reszta[i] >= 7) && (reszta[i] <= 9))
			{
				k--;
			}

			else if (reszta[i] == 0)
			{
				system("cls");
				break;
			}
		}

		wynikkrupier = krupier[0];

		for (int i = 1; i <= 10; i++)
		{
			cout << endl << "Karta krupier " << i + 1 << " - ";
			cin >> krupier[i];
			if (krupier[i] == 11)
			{
				k--;
				lb--;
			}
			else if ((krupier[i] >= 10) || (krupier[i] == 1))
			{
				k--;
				lb--;
			}
			else if ((krupier[i] <= 6) && (krupier[i] >= 2))
			{
				k--;
				lb++;
			}
			else if ((krupier[i] >= 7) && (krupier[i] <= 9))
			{
				k--;
			}
			else if (krupier[i] == 0)
			{
				system("cls");
				break;
			}
		wyniki:
			wynikkrupier = wynikkrupier + krupier[i];

			if (wynikkrupier >= 17)
			{
				break;
			}
		}

		if (wartosc[0] + wartosc[1] == 21)
		{
			wygrane++;
			kasa = kasa + (zaklad * 1.5);
		}
		else if ((w <= 21) && (wynikkrupier < w))
		{
			wygrane++;
			kasa = kasa + zaklad;
		}
		else if ((w <= 21) && (wynikkrupier > 21))
		{
			wygrane++;
			kasa = kasa + zaklad;
		}
		else if ((w <= 21) && (wynikkrupier > w) && (wynikkrupier <= 21))
		{
			przegrane++;
			kasa = kasa - zaklad;
		}
		else if (w > 21)
		{
			przegrane++;
			kasa = kasa - zaklad;
		}
		else if ((w <= 21) && (w = wynikkrupier))
		{
			remis++;
		}

		talia = k / 52;
		l = lb / talia;

		system("cls");
		statystyka = (wygrane / gra) * 100;
		gra++;
		goto start;

	rozdwoj:

		if (wartosc[0] == 11)
		{
			k++;
			lb++;
		}
		else if ((wartosc[0] == 10) || (wartosc[0] == 1))
		{
			k++;
			lb++;
		}
		else if ((wartosc[0] <= 6) && (wartosc[0] >= 2))
		{
			k++;
			lb--;
		}
		if (wartosc[1] == 11)
		{
			k++;
			lb++;
		}
		else if ((wartosc[1] == 10) || (wartosc[1] == 1))
		{
			k++;
			lb++;
		}
		else if ((wartosc[1] <= 6) && (wartosc[1] >= 2))
		{
			k++;
			lb--;
		}
		if (krupier[0] == 11)
		{
			k++;
			lb++;
			k++;
			lb++;
		}
		else if ((krupier[0] == 10) || (krupier[0] == 1))
		{
			k++;
			lb++;
			k++;
			lb++;
		}
		else if ((krupier[0] <= 6) && (krupier[0] >= 2))
		{
			k++;
			lb--;
			k++;
			lb--;
		}
		talia = k / 52;
		l = lb / talia;
		system("cls");
		goto start;

	}
	return 0;
}
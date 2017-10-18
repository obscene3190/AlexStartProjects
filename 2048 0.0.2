#include <iostream>
#include <sstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int m = 0;

void add(int pole[4][4]) {
	int i = rand() % 4, j = rand() % 4, k = rand() % 10;
	if ((pole[i][j] == 0) && (k == 1)) pole[i][j] = 4;
	else if (pole[i][j] == 0) pole[i][j] = 2;
	else add(pole);
}

void left(int pole[4][4]) {
	for (int j = 0; j<4; j++) {
		int n = 0;
		for (int i = 0; i<4; i++) { if (pole[j][i] != 0) { pole[j][n] = pole[j][i]; if (n != i) pole[j][i] = 0; n++; } }
		for (int i = 0; i<4; i++) {
			if ((pole[j][i] == pole[j][i + 1]) && (pole[j][i] != 0))
			{
				pole[j][i] += pole[j][i + 1]; pole[j][i + 1] = 0; m += pole[j][i];
			}
		}
		for (int i = 0; i<3; i++) { if (pole[j][i] == 0) { pole[j][i] = pole[j][i + 1]; pole[j][i + 1] = 0; } }
	}
}

void right(int pole[4][4]) {
	for (int j = 0; j<4; j++) {
		int n = 3;
		for (int i = 3; i>-1; i--) { if (pole[j][i] != 0) { pole[j][n] = pole[j][i]; if (n != i) pole[j][i] = 0; n--; } }
		for (int i = 3; i>-1; i--) {
			if ((pole[j][i] == pole[j][i - 1]) && (pole[j][i] != 0))
			{
				pole[j][i] += pole[j][i - 1]; pole[j][i - 1] = 0; m += pole[j][i];
			}
		}
		for (int i = 3; i>0; i--) { if (pole[j][i] == 0) { pole[j][i] = pole[j][i - 1]; pole[j][i - 1] = 0; } }
	}
}

void up(int pole[4][4]) {
	for (int j = 0; j<4; j++) {
		int n = 0;
		for (int i = 0; i<4; i++) { if (pole[i][j] != 0) { pole[n][j] = pole[i][j]; if (n != i) pole[i][j] = 0; n++; } }
		for (int i = 0; i<4; i++) {
			if ((pole[i][j] == pole[i + 1][j]) && (pole[i][j] != 0))
			{
				pole[i][j] += pole[i + 1][j]; pole[i + 1][j] = 0; m += pole[i][j];
			}
		}
		for (int i = 0; i<3; i++) { if (pole[i][j] == 0) { pole[i][j] = pole[i + 1][j]; pole[i + 1][j] = 0; } }
	}
}

void down(int pole[4][4]) {
	for (int j = 0; j<4; j++) {
		int n = 3;
		for (int i = 3; i>-1; i--) { if (pole[i][j] != 0) { pole[n][j] = pole[i][j]; if (n != i) pole[i][j] = 0; n--; } }
		for (int i = 3; i>-1; i--) {
			if ((pole[i][j] == pole[i - 1][j]) && (pole[i][j] != 0))
			{
				pole[i][j] += pole[i - 1][j]; pole[i - 1][j] = 0; m += pole[i][j];
			}
		}
		for (int i = 3; i>0; i--) { if (pole[i][j] == 0) { pole[i][j] = pole[i - 1][j]; pole[i - 1][j] = 0; } }
	}
}

void printpole(int pole[4][4]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (pole[i][j] != 0) cout << pole[i][j] << " ";
			else cout << '*' << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int check(int pole[4][4]) {
	int l = 0;
	for (int i = 0; i<4; i++) {
		for (int j = 0; j<4; j++)
			if (pole[i][j] == pole[i + 1][j] || pole[i][j] == pole[i][j + 1] || pole[i][j] == 0) {
				l = 1;
				break;
			}
		if (l == 1) break;
	}

	if (l != 1) { cout << "No turns left. The End. Your result : " << m << endl; return -1; }
	return 0;
}

int ravenstvo(int pole1[4][4], int pole[4][4]) {
	int res = 1;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			if (pole1[i][j] != pole[i][j]) return res * 0;
			else res *= 1;
	}
	return res;
}
void zapis(int pole1[4][4], int pole[4][4]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			pole1[i][j] = pole[i][j];
	}
}

void dlyakrasoti(int pole1[4][4], int pole[4][4]) {
	if (!(ravenstvo(pole1, pole))) { add(pole); } printpole(pole); cout << "Your result: " << m << endl;
}
int main() {
	int pole[4][4] = { { 0,0,0,0 },{ 0,0,0,0 },{ 0,0,0,0 },{ 0,0,0,0 } }, pole1[4][4] = { { 0,0,0,0 },{ 0,0,0,0 },{ 0,0,0,0 },{ 0,0,0,0 } };
	char znak;
	srand(time(NULL));
	add(pole);
	add(pole);
	zapis(pole1, pole);
	printpole(pole);
	cout << "j - down; k - up; h - left; l - right q - quit" << endl << endl;
	for (; cin >> znak;) {
		check(pole);
		switch (znak) {
		case 'j': { down(pole); dlyakrasoti(pole1, pole); break; }
		case 'k': { up(pole); dlyakrasoti(pole1, pole); break; }
		case 'l': { right(pole); dlyakrasoti(pole1, pole); break; }
		case 'h': { left(pole); dlyakrasoti(pole1, pole); break; }
		case 'q': {cout << "End. Your result: " << m << endl; return -1; }
		default: { cout << "Incorrect simbol" << endl; break; }
		}
		zapis(pole1, pole);
	}
}

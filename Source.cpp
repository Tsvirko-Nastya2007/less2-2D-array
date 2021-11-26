#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;
int main(){
	//Matrix10.Дана матрица размера M × N.Вывести ее элементы, расположенные
	//в столбцах с нечетными номерами(1, 3, . . .).Вывод элементов производить по столбцам, условный оператор не использовать.
	/*const int n = 6;//str
	const int m = 8;//kol
	int k;
	int mas[n][m];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 101 - 50;
			cout << setw(4)<<mas[i][j];
		}
		cout << endl;
	}
	cout << "matrix\n";
	for (int i = 0; i < n; i += 1) {//stroki
		for (int j = 1; j < m; j+=2) {//stolbtsi
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}*/

	//
	
	//

	const int n = 3;
	char field[n][n];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int t = rand() % 2;
			if (t == 0) field[i][j] = 'x';
			else field[i][j] = 'o';
		}
	}
	for (int i = 0; i < n; i++) {
		cout << "|---|---|---|" << endl;
		for (int j = 0; j < n; j++) {
			cout << "| "<<field[i][j]<<' ';
		}
		cout << '|'<<endl;
	}
	cout << "|---|---|---|" << endl;
	//crosses
	//str
	if (field[0][0] == 'x' && field[0][1] == 'x' && field[0][2] == 'x') cout << "X win!" << endl;
	else if (field[1][0] == 'x' && field[1][1] == 'x' && field[1][2] == 'x') cout << "X win!" << endl;
	else if (field[2][0] == 'x' && field[2][1] == 'x' && field[2][2] == 'x') cout << "X win!" << endl;
	//kol
	else if (field[0][0] == 'x' && field[1][0] == 'x' && field[2][0] == 'x') cout << "X win!" << endl;
	else if (field[0][1] == 'x' && field[1][1] == 'x' && field[2][1] == 'x') cout << "X win!" << endl;
	else if (field[0][2] == 'x' && field[1][2] == 'x' && field[2][2] == 'x') cout << "X win!" << endl;
	//diag
	else if (field[0][0] == 'x' && field[1][1] == 'x' && field[2][2] == 'x') cout << "X win!" << endl;
	else if (field[0][2] == 'x' && field[1][1] == 'x' && field[2][0] == 'x') cout << "X win!" << endl;
	//zeros
	//str
	else if (field[0][0] == 'o' && field[0][1] == 'o' && field[0][2] == 'o') cout << "O win!" << endl;
	else if (field[1][0] == 'o' && field[1][1] == 'o' && field[1][2] == 'o') cout << "O win!" << endl;
	else if (field[2][0] == 'o' && field[2][1] == 'o' && field[2][2] == 'o') cout << "O win!" << endl;
	//kol									  									 
	else if (field[0][0] == 'o' && field[1][0] == 'o' && field[2][0] == 'o') cout << "O win!" << endl;
	else if (field[0][1] == 'o' && field[1][1] == 'o' && field[2][1] == 'o') cout << "O win!" << endl;
	else if (field[0][2] == 'o' && field[1][2] == 'o' && field[2][2] == 'o') cout << "O win!" << endl;
	//diag									  									 
	else if (field[0][0] == 'o' && field[1][1] == 'o' && field[2][2] == 'o') cout << "O win!" << endl;
	else if (field[0][2] == 'o' && field[1][1] == 'o' && field[2][0] == 'o') cout << "O win!" << endl;
	//else
	else cout << "nobody win!";
	return 0;
}
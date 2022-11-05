#include <iostream>
#include <ctime>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Russian");
	//01
	/*const int n = 10;
	int mas[n];
	srand(time(nullptr));
	for (int i=0; i < n; i++)
	{
		mas[i]=rand()%101;
		cout << mas[i] << ' ';
	}
	cout << endl << endl;
	for (int i = n-1; i >= 0; i-=2)
	{
			cout << mas[i] << endl;
	}*/

	//02
	/*const int n = 10;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % 41 - 20;
		cout << mas[i] << ' ';
	}
	cout << endl;
	int sum=0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] % 2 == 0)
		{
			sum = sum + mas[i];
		}
	}
	cout << sum;*/
	
	//1
	/*const int n = 10;
	int mas[n];
	srand(time(nullptr));
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % 11 - 10;
		cout << mas[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] % 2 == 0)
		{
			sum = sum + mas[i];
		}
	}
	cout << sum;*/

	/*Array6. Даны целые числа N (> 2), A и B. Сформировать и вывести целочисленный массив размера N, первый элемент которого равен A, второй
равен B, а каждый последующий элемент равен сумме всех предыдущих.*/
	/*const int n = 10;
	int mas[n];
	int a, b;
	cin >> a >> b;
	mas[0] = a;
	mas[1] = b;
	int s = a + b;
	for (int i = 2; i < n; i++)
	{
		mas[i] = s;
		s = mas[i] + s;
	}
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << endl;
	}*/

	/*Array7◦ Дан массив размера N. Вывести его элементы в обратном порядке.*/
	/*const int n = 10;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % 101;
		cout << mas[i] << ' ';
	}
	cout << endl;
	for (int i = n - 1; i >= 0; i--)
	{
		cout << mas[i] << ' ';
	}*/

	/*Array8. Дан целочисленный массив размера N. Вывести все содержащиеся в
данном массиве нечетные числа в порядке возрастания их индексов, а
также их количество K.*/
	
	/*const int n = 10;
	int mas[n];
	srand(time(nullptr));
	int k=0;
	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % 101;
		cout << mas[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] % 2 != 0)
		{
			cout << mas[i] << ' ';	
			k++;
		}
	}
	cout << endl << k;*/

/*Array9. Дан целочисленный массив размера N. Вывести все содержащиеся в
данном массиве четные числа в порядке убывания их индексов, а также
их количество K.*/
/*const int n = 10;
int mas[n];
srand(time(nullptr));
int k = 0;
for (int i = 0; i < n; i++)
{
	mas[i] = rand() % 101;
	cout << mas[i] << ' ';
}
cout << endl;
for (int i = n; i >= 0; i--)
{
	if (mas[i] % 2 == 0)
	{
		cout << mas[i] << ' ';
		k++;
	}
}
cout << endl << k;*/

/*/Сам2 Дан массив целых чисел размера N. Заполнить его случайными числами из диапазона от - 10 до 20.
Вывести на экран только те элементы, которые делятся на 3*/
/*const int n = 10;
int mas[n];
srand(time(nullptr));
for (int i = 0; i < n; i++)
{
	mas[i] = rand() % 21 - 10;
	cout << mas[i] << ' ';
}
cout << endl;
for (int i = 0; i < n; i++)
{
	if (mas[i] % 3 == 0)
	{
		cout << mas[i] << ' ';
	}
}*/

/* //Сам3 Дан массив целых чисел размера N. Заполнить его случайными числами из диапазона от - 30 до 20.
Найти произведение элементов, которые не делятся на 7*/
/*const int n = 10;
int mas[n];
srand(time(nullptr));
for (int i = 0; i < n; i++)
{
	mas[i] = rand() % 31 - 20;
	cout << mas[i] << ' ';
}
cout << endl;
for (int i = 0; i < n; i++)
{
	if (mas[i] % 7 != 0)
	{
		cout << mas[i] << ' ';
	}
}*/

/*//Сам4 Дан массив целых чисел размера N.Заполнить его случайными числами из диапазона от - 10 до 50. Найти среднее африметическое положительных элементов*/
/*const int n = 10;
int mas[n];
srand(time(nullptr));
int sr = 0;
for (int i = 0; i < n; i++)
{
	mas[i] = rand() % 51 - 10;
	cout << mas[i] << ' ';
	sr = sr + mas[i];
}
cout << endl << sr/10.0;*/

/*//Сам5 Дан массив целых чисел размера N. Заполнить его случайными числами из диапазона от 1 до 5.
Найти среднее геометрическое (квадратный корень из произведения)элементов, которые делятся на 3 и не делятся на 5.*/
/*const int n = 10;
int mas[n];
srand(time(nullptr));
long long pr = 1;
for (int i = 0; i < n; i++)
{
	mas[i] = rand() % 5 + 1;
	cout << mas[i] << ' ';
}
for (int i = 0; i < n; i++)
{
	pr = pr * mas[i];
}
cout << endl << sqrt(pr);*/

/*Array10. Дан целочисленный массив размера N. Вывести вначале все содержащиеся в данном массиве четные числа в порядке возрастания их индексов,
а затем — все нечетные числа в порядке убывания их индексов.*/
/*const int n = 10;
int mas[n];
srand(time(nullptr));
int k = 0;
for (int i = 0; i < n; i++)
{
	mas[i] = rand() % 101;
	cout << mas[i] << ' ';
}
cout << endl;
for (int i = 0; i < n; i++)
{
	if (mas[i] % 2 == 0)
	{
		cout << mas[i] << ' ';
	}
}
cout << endl;
for (int i = n; i >= 0; i--)
{
	if (mas[i] % 2 != 0)
	{
		cout << mas[i] << ' ';
	}
}*/

/*Array11. Дан массив A размера N и целое число K (1 ≤ K ≤ N). Вывести элементы массива с порядковыми номерами, кратными K: AK, A2·K, A3·K, . . . .
Условный оператор не использовать.*/
/*const int n = 10;
int mas[n];
srand(time(nullptr));
for (int i = 0; i < n; i++)
{
	mas[i] = rand() % 101;
	cout << mas[i] << ' ';
}
int k = rand() % n + 1;
cout << endl << k << endl;
for (int i = 0; i < n; i++)
{
	if (mas[i]%k==0)
	{
		cout << " номер " << i << " число " << mas[i] << ' ';
	}
}*/

}
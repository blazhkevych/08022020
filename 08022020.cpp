#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int a;
	cin >> a;
	int rez, i = 0;
	do
		rez = pow(2, i++);
	while (rez < a);
	if (rez == a) cout << "Yes i=" << i - 1 << endl;
	else cout << "No";
	return 0;
}

/*SetConsoleOutputCP(1251);
	int a;
	cin >> a;
	int rez, i = 0;
	do
		rez = pow(2, i++);
	while (rez < a);
	if (rez == a) cout << "Yes i=" << i-1 << endl;
	else cout << "No";
	return 0;*/

	/*SetConsoleOutputCP(1251);
		int a, k = 0;
		cin >> a;
		size_t begin = clock();
		bool IsSimple = true;
		for (int i = 2; i <= sqrt(a) && IsSimple; i++)
			if (a % i == 0) IsSimple = false;
		size_t end = clock();
		if (IsSimple) cout << "Simple\n";
		else cout << "not_simple\n";
		cout << "time= " << (end - begin) / 1000.00 << endl;
		return 0;*/

		/*SetConsoleOutputCP(1251); //
			int a, k = 0;
			cin >> a;
			size_t begin = clock();
			for (int i = 1; i <= a; i++)
				if (a % i == 0) k++;
			size_t end = clock();
			if (k == 2) cout << "simple\n";
			else cout << "not_simple\n";
			cout << "time= " << (end - begin) / 1000.00 << endl;
			return 0;*/

			/*SetConsoleOutputCP(1251); //вивести всі дільники числа
				int a;
				cin >> a;
				for (int i = 1; i <= a; i++)
					if (a % i == 0)
						cout << i << '\t';
				return 0;*/

				/*SetConsoleOutputCP(1251);
					int a;
					cin >> a;
					if (a != 0) {
						int max = a, maxold = a;
						do {
							if (max < a) { maxold = max; max = a; }
							if (a > maxold&& a < max) maxold = a;
							cin >> a;
						} while (a != 0);
						cout << "Максимальне 2ге = " << maxold << endl;
					}
					else cout << "Відсутні числа " << endl;
					return 0;*/

					/*SetConsoleOutputCP(1251);
						int a;
						cin >> a;
						if (a != 0) {
							int max = a;
							do {
								max = max < a ? a : max;
								cin >> a;
							} while (a != 0);
							cout << "Максимальне = " << max << endl;
						}
						else cout << "Відсутні числа " << endl;
						return 0;*/

						/*SetConsoleOutputCP(1251);
							int a;
							cin >> a;
							if (a != 0) {
								int dob = 1;
								do {
									dob = dob * a;
									cin >> a;
								} while (a != 0);
								cout << "dob= " << dob << endl;
							}
							else cout << "Відсутні числа " << endl;
							return 0;*/

							/*int a, sum = 1;
								do
								{
									cin >> a;
									if (a)
										if (0 * a) break;
									sum = sum * a;
								} while (a);
								cout << "sum= " << sum << endl;
								return 0;*/

								/*int a, sum = 1;
									do
									{
										cin >> a;
										if (a)
										sum = sum * a;
									} while (a); // while (a) те сам що і While (a!=0)
									cout << "sum= " << sum << endl;
									return 0;*/

									/*int a = 1, sum = 0;
										while (a != 0)
										{
											cin >> a;
											sum = sum + a;
										}
										cout << "sum= " << sum << endl;
										return 0;*/

										/*int n, sum = 0;
											do
											{
												cin >> n;
												sum = sum + n;
											} while (n != 0);
											cout << "sum= " << sum << endl;
											return 0;*/
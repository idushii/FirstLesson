#include <iostream> //ввод, вывод
/*#include<cmath> //математические функции
#include<ctime>//работа со временем
*/
using namespace std; //чтобы не писать std::
int main()
{
	int a = 10;
	int c;
	bool b = false;
	double d = 3.2e-5; // 3.2*10^-5
	cin >> a >> c;
	cout << a << " " << c << endl;
	int s = a + c;
	cout << s << endl;
	cout << a <<"\n"; // \n - переход на новую строку
	cout << a << " " << b << " " << d <<endl; // endl - переход на новую строку
    cout << "Hello World!" << endl; 
	cout << "print text\n"; //вывод текста на экран
	cout << "hello 2" << "\n";
	return 0; 
}

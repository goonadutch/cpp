#include<iostream.h>
#include<conio.h>
class Calc{
public:
	void add(int a, int b)
	{
		cout << a + b << endl;
	}
	void sub(int a, int b)
	{
		cout << a - b << endl;
	}
	void mul(int a, int b)
	{
		cout << a * b << endl;
	}
	void div(int a, int b)
	{
		cout << a / b << endl;
	}
};

void main()
{
    clrscr();
    Calc obj;
    int a, b, c;
    do{
	cout << "Enter the operation to perform : \n1. Addition\n2. Subtraction\n 3. Multiplication\n 4. Division\n";
	cin >> c;
	cout << "Enter the value of a : " << endl;
	cin >> a;
	cout << "Enter the value of b : " << endl;
	cin >> b;
	if(c == 1) obj.add(a, b);
	else if(c == 2) obj.sub(a, b);
	else if(c == 3) obj.mul(a, b);
	else if(c == 4) obj.div(a, b);
    }while(c != 0);
    getch();
}
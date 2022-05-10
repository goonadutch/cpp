# cgpa in cpp

``` cpp
#include<iostream.h>
#include<conio.h>
#include<math.h>

class Student{
public:
	char name[20];
	int m1,m2, m3, m4, m5;
	int c1, c2, c3, c4, c5;
	float total;
	Student()
	{
		cout << "Enter the name of the student : ";
		cin >> name;
		c1 = c2 = c3 = c4 = c5 = 3;
	}
	void calc(int m1, int m2, int m3, int m4, int m5)
	{
		    int num = (m1 + m2 + m3 + m4 + m5) * 3;
		    cout << m1 << m2 << m3 << m4 << m5 << endl;
		    total = num / 15.0;
		    cout << "Name : "<< name << endl << "CGPA : " << total << endl;

	}

};

void main()
{
	Student obj;
	clrscr();
	int m1, m2, m3, m4, m5;
	cout << "Enter the marks in the m1 subject : ";
	cin >> m1;
	cout << "Enter the marks in the m2 subject : ";
	cin >> m2;
	cout << "Enter the marks in the m3 subject : ";
	cin >> m3;
	cout << "Enter the marks in the m4 subject : ";
	cin >> m4;
	cout << "Enter the marks in the m5 subject : ";
	cin >> m5;
	m1 = ceil(m1 /10.0);
	m2 = ceil(m2 / 10.0);
	m3 = ceil(m3 / 10.0);
	m4 = ceil(m4 / 10.0);
	m5 = ceil(m5 / 10.0);

	obj.calc(m1, m2, m3, m4, m5);
	getch();




}

```
// PersonClass.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Person.h"
#include <iostream>
using namespace std;

int main()
{
	Person p("Alice", "770 Miller Ave");
	cout << p.getName() << endl;
	cout << p.getAddress() << endl;
	system("pause");
    return 0;
}


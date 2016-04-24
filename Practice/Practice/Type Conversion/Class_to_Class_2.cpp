/*
There are two ways to convert object data from 1 class to another
1. Define conversion funciton in source class
2. Define one-argument(source class will be the argument) ctor in destination	-- PREFERED
*/
#include"header.h"

class minutes{
	int m;
	public:
		minutes(){
			m = 240;
		}
		int get(){
			return m;
		}
		void show(){
			cout << "\nMinutes:" << m;
		}
};

class hours{
	int h;
	public:
		void operator = (minutes);
		void show(){
			cout << "\n Hours=" <<h;
		}
};

void hours::operator = (minutes x){
	h = x.get()/60;
}

int main(){
	minutes min;
	hours hr;
	hr = min;;
	min.show();
	hr.show();
	cout << "\n";
	system("pause");
	return 0;
}
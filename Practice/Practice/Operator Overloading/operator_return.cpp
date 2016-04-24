#include"header.h"

class plus{
	private:
		int num;
	public:
		plus(){ num = 0; }
		int getnum(){ return num; } 

		//plus operator ++();
		/*BUT instead of operator++() if we declare it as 
			operator++(int) than prefix increment will thorugh an error i.e. in main
			we can not do ++p1 or ++p2;*/

		plus operator ++(int);
};

/*plus plus::operator++(){
	plus tempObj;
	num = num + 1;
	tempObj.num = num;
	return tempObj;
}*/
plus plus::operator++(int){
	plus tempObj;
	num = num + 1;
	tempObj.num = num;
	return tempObj;
}

int main(){
	plus p1, p2;
	cout << "\n P1 :"<<p1.getnum();
	cout << "\n P2 :"<<p2.getnum();
	p1 = p2++;
	cout << "\n********************\n";
	cout << "\n P1 :"<<p1.getnum();
	cout << "\n P2 :"<<p2.getnum();
	p1++;
	cout << "\n********************\n";
	cout << "\n P1 :"<<p1.getnum();
	cout << "\n P2 :"<<p2.getnum();
	//++p2;								// If we want this to work than instead of operator++(int) we need to declare it as 
										//operator++()
	//cout << "\n********************\n";
	//cout << "\n P1 :"<<p1.getnum();
	//cout << "\n P2 :"<<p2.getnum();*/
	cout << "\n********************\n";
	system("pause");
	return 0;
}
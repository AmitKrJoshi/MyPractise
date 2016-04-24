#include<header.h>

class number{
	int num;
	public:
		void input(){
			cout << "\n Enter number: ";
			cin >> num;
		}
		void show(){
			cout << "\n The minimum Number: " << num;
		}

		number min (number t){
			if(t.num < num)
				return t;
			else
				return *this;
		}
};

void main(){
	number n,n1, n2;
	n1.input();
	n2.input();
	n = n1.min(n2);
	n.show();
	cout << endl;
	system("pause");
}

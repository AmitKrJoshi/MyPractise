#include<header.h>

class text{
	char str1[10];
	char str2[10];
	char str3[20];

	public:
		void get(){
			cout << "Enter String 1 :";
			cin.getline(str1,10);
			cout << "\nEnter String 2 :";
			cin.getline(str2,10);
		}
		int len(){
			return (strlen(str1));
		}
		void show(){
			cout << "\n 1st String :" << str1;
			cout << "\n 2nd String :" << str2;
			cout << "\n 3rd String :" << str3;
		}
		int combine(int x, int y){
			str3[x] = str1[x];
			if(x >= y)  str3[x] = str2[x-y];
			if(str2[x-y] == '\0')  return 0;
			else return 1;
		}
}; 

int main(){
	int k = 0, y;
	text obj;
	obj.get();
	y = obj.len();
	while(obj.combine(k++,y));
	obj.show();
	cout << newline;
	system("pause");
	return 0;
}
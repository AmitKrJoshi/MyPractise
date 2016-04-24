#include"header.h"

class Base_dmy{
	int d,m,y;
	public:
		Base_dmy(){
			d=m=y=0;
		}
		Base_dmy(int date, int month, int year){
			d =date;
			m = month;
			y =year;
		}
		int day(){ return d; }
		int month(){ return m; }
		int year(){ return y; }
		void show(){
			cout << d <<" " <<m << " "<<y;
		}
};

class Destination_Date{
	char date[9];
	public:
		Destination_Date(){ date[0]=0; }
		Destination_Date(char *areg_date){
			strcpy(date, areg_date);
		}
		void show(){
			cout << date;
		}
		Destination_Date(Base_dmy dts){
			int d = dts.day();
			int m = dts.month();
			int y = dts.year();

			char temp[3];
			itoa(d,date,10);
			strcat(date, "-");

			itoa(m,temp,10);
			strcat(date,temp);
			strcat(date, "-");
			
			itoa(y,temp,10);
			strcat(date,temp);
		}
};

int main(){
	Destination_Date obj_1;
	Base_dmy obj_2(1,3,77);

	obj_1 = obj_2;
	cout <<"\n Obj_1 = ";
	obj_1.show();
	cout <<"\n Obj_2 = ";
	obj_2.show();
	cout <<endl;
	system("pause");
	return 0;
}


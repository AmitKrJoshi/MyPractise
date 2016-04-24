#include<header.h>
#include<conio.h>

void main(){
	int k =0;
	class stud{
		public:
			char name[12];
			int rollno;
			char grade[2];
	};

	class stud st[3];
	while(k<3){
		cout << "Name:";
		cin>> st[k].name;
		cout << "Roll No:";
		cin>> st[k].rollno;
		cout << "Grade:";
		cin>> st[k].grade;
		st[k].grade[1] = '\0';
		puts("Press any key...");
		getch();
		k++;
	}
	k =0;
		cout << "Name\tRollNo\tGrade\n";
	while(k<3){
		cout << st[k].name<<"\t"<<st[k].rollno<<"\t"<<st[k].grade<<endl;
		k++;
	}
	system("pause");
}
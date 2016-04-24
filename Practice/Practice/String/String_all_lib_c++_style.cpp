#include<iostream>
using namespace std;
#include<string>

/********String Ctor********
*	string()					:		Produce an empty string
*	string(const char* str)		:		A string obj from a null-ended string
*	string(const string &str)	:		A string from another string obj
*/

/********************************Declaration**********************************
string text;					// Using ctor without arguments
string text("C++");				// Using ctor with one arguments
text1 = text2;					//Assignment
text = "c++" + test1;			//Concatenation

cin >> text						//Reading string WITHOUT spaces
getline (cin, text)				//Reading string WITH spaces
*****************************************************************************/

int main(){
	string text;
	string text_1 ("C++");
	string text_2 ("OOP");
	cout << text_1 << " " << text_2 << endl;
	text = text_2;
	cout << text << endl;
	text = text_1 +" "+ text_2;
	cout << "New : "<< text << endl;

	if(text==text_2)
		cout << "Wohh!!\n";
	else
		cout << "What Happen\n";

	if(text > text_2)
		cout << "So whose the boss\n";
	else
		cout << "Don't know\n";

	int comp = text.compare(text_1);
	cout << comp << endl;

	for(int i = 0; i< 50; i++)
		cout << ".";
	cout << endl;

	cout << "text_1:\t\t"<<text_1 <<endl<<"text_2:\t\t"<< text_2 << endl<<"text:\t\t"<<text<<endl;

	text_2.insert(3,text);
	cout << "insert()->text_2:\t\t"<<text_2<<endl;

	text_2.erase(3,8);
	cout << "erase()->text_2:\t\t"<<text_2<<endl;

	text_2.replace(0,3,text_1);
	cout << "replace()->text_2:\t\t"<<text_2<<endl;

	text_2.append(text);
	cout << "append()->text_2:\t\t"<<text_2<<endl;

	cout << "size()->text_2:\t\t"<<text_2.size()<<endl;
	cout << "length()->text_2:\t\t"<<text_2.length()<<endl;
	cout << "capacity to hold character()->text_2:\t\t"<<text_2.capacity()<<endl;
	cout << "Maximmun capacity to hold character()->text_2:\t\t"<<text_2.max_size()<<endl;

	cout << "is Empty ?()->text:\t\t"<<text.empty() ? cout<<"\tNot Empty\n" : cout << "\tEmpty\n"<<endl;

	cout << "at()->text_2:\t\t"<<text_2.at(2)<<endl;
	cout << "at()->text_2:\t\t"<<text_2.at(text.size())<<endl;
	cout << "at()->text_2:\t\t"<<text_2.at(text_2.size()-1)<<endl;

	cout << "find() C++ in text_2:\t\t"<<text_2.find(text_1)<<endl;

	cout << "find_first_of() + in text_2:\t\t"<<text_2.find_first_of('+')<<endl;
	cout << "find_last_of() + in text_2:\t\t"<<text_2.find_last_of('+')<<endl;

	for(int i = 0; i< 50; i++)
		cout << ".";
	cout << endl << "Before\n"<< "text_1:\t\t"<<text_1 <<endl<<"text_2:\t\t"<< text_2 << endl<<"text:\t\t"<<text<<endl;
	for(int i = 0; i< 50; i++)
		cout << ".";
	cout << endl << "After Calling Swap\n";
	text_1.swap(text_2);
	cout<< "text_1:\t\t"<<text_1 <<endl<<"text_2:\t\t"<< text_2 << endl<<"text:\t\t"<<text<<endl;

	string::iterator it = text_1.begin();
	cout << "text_1.begin():\t"<<*it << endl;
	it = text_1.end()-1;					//Without -1 it will crash
	cout << "text_1.end():\t"<<*it << endl;
	


	system("pause");
	return 0;
}
//: C16:StackTemplateTest.cpp
// Test simple stack template
//{L} fibonacci
#include "fibonacci.h"
#include "StackTemplate.h"
#include <iostream>
#include <fstream>
#include <string>
#include "require.h"

using namespace std;
int main() {
	StackTemplate<int> is;
	/*for(int i = 0; i < 20; i++)
		is.push(fibonacci(i));
	
	for(int k = 0; k < 20; k++)
		cout << is.pop() << endl;
	*/
	ifstream in("TICPP/StackTemplateTest.cpp");
	assure(in,"TICPP/StackTemplateTest.cpp");
	ofstream out("TICPP/StackTemplateTest.cpp_2");
	//ifstream in("File/File.txt");
	//assure(in,"File/File.txt");
	string line;
	while(in.eof()==0){
		getline(in,line);
		out << line << endl;
		//cout << line<<endl;
		
	}
	
	string line;
	StackTemplate<string> strings;

	while(getline(in, line))
		strings.push(line);
	while(strings.size() > 0)
		cout << strings.pop() << endl;

	system("pause");
} ///:~
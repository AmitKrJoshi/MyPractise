/*
	Manipulators does not return  the previous setting.

	Statement : cout << m1 << m2 << variable;

	setw(int i) , setbase, setprecision(int p), setfill(char f), endl ,
	skipws :skip white spaces on input,
	noskipws, 
	ends : Adds null char to close an output string, 
	flush :flush the buffer stream, 
	lock : lock the file associated with the file handle,
	ws : omits the leading white space present before the first field,
	hex, oct, dec,
	setiosflags(long L) : format flag is set to L,
	resetiosflags

*/
#include<header.h>

int main()
{
#if 0
	cout << setw(20) << "Hello world";
	endl(cout);//<<<------------------------We can give new line like this also

	cout << setprecision(2) << 2.55555 << endl;

	cout << setiosflags(ios::hex);	//NOT WORKING
	cout << "Hexa of 84 : " << 84 << endl;

	cout << "Hexa of 84: " << hex << 84 << endl;
	cout << "Octa of 84: " << oct << 84 << endl;
#endif
#if 0
	//READING A NUMBER IN HEXA FORMAT AND DISPLAYING IT IN DECIMAL
	int i ;
	cout << "Enter a Hexa no.";
	endl(cout);
	cin >> hex >> i;
	cout << dec << i << endl;
#endif
#if 0
	//USE OF FLUSH
	//<<http://stackoverflow.com/questions/14105650/how-does-stdflush-work>>
	char text[20];
	cout << "Enter text : " ;
	cin.getline(text,20);
	flush(cout);        //OR cout << flush
	cout << "Text Entered : " << text << endl;
#endif
	//SKIPWS    http://www.cplusplus.com/reference/ios/skipws/?kw=skipws

	char a,b,c;
	//char arr[4] = "123"; 
	//istringstream iss (arr);
	istringstream iss ("  123");
	iss >> skipws >> a >> b >> c;
	cout << a << endl << b << endl << c << endl;

	iss.seekg(0,1);
	int len = iss.tellg();
	cout << "len : " << len << endl;

	iss.seekg(0,2);
	len = iss.tellg();
	cout << "len : " << len << endl;

	iss.seekg(0,3);
	len = iss.tellg();
	cout << "len : " << len << endl;

	iss.seekg(0,1);
	iss >> noskipws >> a >> b >> c;
	cout << a << endl << b << endl << c << endl;
	system("pause");
	return 0;
}
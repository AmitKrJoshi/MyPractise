/*To use an istringstream, you populate it in its constructor, 
and then read from it with the usual stream reading methods
https://latedev.wordpress.com/2011/11/16/c-stringstreams/
*/

#include <sstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  istringstream is( "the quick brown fox" );
  string s;
  while( is >> s ) {
    cout << s << endl;
  }
  system("pause");
  return 0;
}
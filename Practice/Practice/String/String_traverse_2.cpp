#include <iostream>
#include<string>
#include<stack>
using namespace std;

/*
int main ()
{
std::stack<int> mystack;

for (int i=0; i<5; ++i) mystack.push(i);

std::cout << "Popping out elements...";
while (!mystack.empty())
{
std::cout << ' ' << mystack.top();
mystack.pop();
}
std::cout << '\n';

return 0;
}
*/
int matchBraces(string);
int main()
{
	string s = "{Hello[where(do u)}";
   //cout << "" << endl;
   int i = matchBraces(s);
   cout << i << endl;
   system("pause");
   return 0;
}

int matchBraces(string s){
        bool flag = true;
        //Stack<Character> st = new Stack();
		stack<char> st;

        for(int i=0; i < s.length();i++){
            char ch = s.at(i);
            if(ch == '[' || ch == '{' || ch == '('){
                st.push(ch);
                //System.out.println(ch +" "+st.elements());
            }
            else if(ch == ']' || ch == '}' || ch == ')'){
                char ch1 = st.pop();
				//st.pop();
                if((ch1 == '{' && ch == '}')||
                        (ch1 == '(' && ch == ')')||
                        (ch1 == '[' && ch == ']')){
                } else{
                    flag = false;
                    break;
                }
            }
        }
        return flag;
    }
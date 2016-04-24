/*http://www.cplusplus.com/reference/new/set_new_handler/
http://en.cppreference.com/w/cpp/memory/new/set_new_handler
std::set_new_handler

C++ 98 : new_handler set_new_handler (new_handler new_p) throw();
C++ 11 : new_handler set_new_handler (new_handler new_p) noexcept;

Explaination : Sets "new_p" as the new-handler function.
The new-handler function is a function which is called by the default allocation functions (operator new and operator new[])
when they fail to allocate storage. The new-handler function may try to make more storage available for a new attempt to 
allocate the storage. If -and only if- the function succeeds in making more storage available, it may return. Otherwise 
it shall either throw a bad_alloc exception (or a derived class) or terminate the program (such as by calling abort or exit).
If the new-handler function returns (i.e., it made more storage available), it may be called repeatedly for as long as the allocation 
function fails to allocate the requested storage, or until the new-handler function does not return or is replaced.Before this function 
is called by the program for the first time, or if new_p is a null-pointer, the default allocation functions directly throw bad_alloc on failure.


Parameters: new_p
    Function that takes no arguments and returns no value (void).
    The function can make more storage available, or throw an exception, or terminate the program.
    If this is a null-pointer, the new-handler function is reset to none (and bad_alloc is thrown instead).
    new_handler is a function pointer type for functions that take no arguments and return no value.

Return value :
The value of the current new-handler function if this has already been set by this function previously, or a null-pointer if this is 
the first call to set_new_handler (or if it was reset by a previous call).new_handler is a function pointer type taking no arguments 
and returning no value.


Data races :
Calling this function does not introduce data races, and any such call is synchronized with subsequent calls to set_new_handler and get_new_handler.
Notice that this requirement applies only to the set_new_handler function, but not necessarily to the new-handler function passed as argument (new_p).

Exception safety :
No-throw guarantee: this function (set_new_handler) never throws exceptions. 
Notice that if new_p is a function that does not implement the proper functionality (described above), or if new_p is an invalid pointer, it causes undefined behavior.
*/

#include"header.h"

void m_warn(){
	cerr << "\nCanNot Allocate !";
	//exit(1);
}

int main(){
	set_new_handler(m_warn);
	char *k = new char[50];

	cout << "\nFirst Allocation : k= "<< hex << long(k);

	k = new char[2147483647U];
	cout << "\nSecond Allocation : k= "<< hex << long(k);

	set_new_handler(0);
	cout << endl;
	system("pause");
	return 0;
}
/*std::set_new_handler

Defined in header <new> 

std::new_handler set_new_handler( std::new_handler new_p )   
   
		Makes new_p the new global new-handler function and returns the previously installed new-handler. 

		The new-handler function is the function called by allocation functions whenever a memory allocation attempt fails. 
		Its intended purpose is one of three things: 

			1) make more memory available
			2) terminate the program (e.g. by calling std::terminate)
			3) throw exception of type std::bad_alloc or derived from std::bad_alloc.
		The default implementation throws std::bad_alloc. The user can install his own new-handler, which may offer behavior different than the 
		default one. 

		If new-handler returns, the allocation function repeats the previously-failed allocation attempt and calls the new-handler again if the 
		allocation fails again. To end the loop, new-handler may call std::set_new_handler(nullptr): if, after a failed allocation attempt, 
		allocation function finds that std::get_new_handler returns a null pointer value, it will throw std::bad_alloc. 

		At program startup, new-handler is a null pointer. 

		This function is thread-safe. Every call to std::set_new_handler synchronizes-with (see std::memory_order) the subsequent std::set_new_handler
		and std::get_new_handler calls.  (since C++11) 

1 Parameters : new_p  -  pointer to function of type std::new_handler, or null pointer  
2 Return value : The previously-installed new handler, or a null pointer value if none was installed. 

3 Exceptions : (none) (until C++11) 
				noexcept specification:  noexcept   (since C++11) 
*/
#include "header.h"

void handler()
{
    cout << "Memory allocation failed, terminating\n";
    set_new_handler(nullptr);
}

int main()
{
    set_new_handler(handler);
    try {
        while (true) {
            new int[100000ul];
        }
    } catch (const std::bad_alloc& e) {
        cout << e.what() << '\n';
    }
}
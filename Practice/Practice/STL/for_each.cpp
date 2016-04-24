#include"header.h"
#include<vector>
#include<algorithm>

template <class S>

class show{
	public:
		void operator() (const S & sobj){
			cout << sobj;
		}
};

int main(){
	show<int> obj;
	vector<int> vint (4);
	for(int i = 0; i < 4 ; ++i){
		vint[i] = i;
	}
	cout << "for each\n";
	for_each(vint.begin(), vint.end(), obj);
	cout << "\n";
	system("pause");
	return 0;
}
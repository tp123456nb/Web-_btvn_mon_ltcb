#include <iostream>
using namespace std;
int main(){
	int i =0;
	cout << "do while \n";
	do
	{
		cout << i << endl;
			i = i + 1;
	}while (i < 0);
	cout << "while \n";
	int j = 0;
	while (j < 0){
		cout << j << endl;
		j = j + 1;
	}
	return 0;
}
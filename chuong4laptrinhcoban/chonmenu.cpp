//dumg do wwhile ddeer viet thuc don 
#include <iostream >
using namespace std;
int main(){
	//lua chon 1 chon ca 
	//chonj 2 la ga 
	//chon 3 la bo
	//chon 4 la thoat 
	int chon ;
	cout <<"menu nha hang cntt 1908 "<<endl;
	cout <<"1.ca "<<endl;
	cout <<"2.ga "<<endl;
	cout <<"3.bo "<<endl;
	cout <<"4.thoat "<<endl;
	cin >>chon;
	do{
		cin >>chon;
		switch (chon){
			case 1 : cout <<"ban vua chon ca "<<endl;
			  break;
			case 2 : cout <<"ban vua chon ga "<<endl;
			  break;
			case 3 : cout <<"ban chon bo "<<endl;
			  break ;
		default :cout <<"ban chon sai chon lai hoa don 4 de thoat "<<endl;
		}
	}while (chon !=4);
	return 0;
}
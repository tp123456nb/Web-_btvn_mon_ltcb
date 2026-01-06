//dumg do wwhile ddeer viet thuc don lua chon phep toan
#include <iostream >
using namespace std;
int main(){
	//khai bao ab 
	//lua chon 1 ra ket qua a+b 
	//chonj 2 la ga 
	//chon 3 la bo
	//chon 4 la thoat 
	int chon;
	int a=5,b=4 ;
	cout <<"a+b bang "<<a+b<<endl;
	cout <<"a-b bang  "<<a-b<<endl;
	cout <<"a nhan b "<<a*b<<endl;
	cout <<"4.thoat "<<endl;
	cin >>chon;
	do{
		cin >>chon;
		switch (chon){
			case 1 : cout <<"A+B= "<<a+b<<endl;
			  break;
			case 2 : cout <<"A-B= "<<a-b<<endl;
			  break;
			case 3 : cout <<"A *B = "<<a*b<<endl;
			  break ;
		default :cout <<"ban chon sai chon lai hoa don 4 de thoat "<<endl;
		}
	}while (chon !=4);
	return 0;
}
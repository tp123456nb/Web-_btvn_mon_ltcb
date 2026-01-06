// yêu cầu nhập vào một chuỗi kiểm tra xem chuỗi đó có phải mật khẩu là "yeu1908"
// nếu chưa đúng bắt nhập lại đến khi đúng thì thoát khỏi vòng lặp
// phân tích bài toán
// Đầu vào là chuỗi
// đâu ra kiểm tra mật khẩu đúng chuỗi nhập vào.
// bước 1: khai báo biến matkhau kiểu chuỗi
// bước 2: nhập giá trị cho biến matkhau
// bước 3: dùng while để kiểm tra matkhau nhập vào có đúng với chuỗi mật khẩu gốc không
// nếu đúng thì thoát
// nếu sai thì bắt nhập lại.
#include <iostream>
#include <string>
using namespace std;
int main(){
	string  matkhau;
	int i =0;
	// dùng vòng lăp while kiểm tra matkhau
	while (matkhau!="toiyeucntt1908")
	{
		if(i <5 ){
		cout << "moi ban nhap mat khau" << endl;
		cin >> matkhau;
		i = i + 1;
		}else
		{
			cout << "ban nhap qua 5 lan" << endl;
			break;
		}
	}
	cout << "ban da nhap dung mat khau goodbye" <<endl;
	
	return 0;
}
// 예외처리
// try-catch
//#include <iostream>
//using namespace std;

//int main() {
//
//	// 숫자 2개를 입력 받아서, 나눗셈을 하는 프로그램
//	int num1, num2;
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "숫자를 입력해 주세요 : ";
//		cin >> num1;
//
//		cout << "몇으로 나눌까요? : ";
//		cin >> num2;
//
//		if (num2 == 0) { // 기본적인 예외처리 방법
//			cout << "0으로는 나눌 수 없습니다." << endl;
//		}
//		else {
//			cout << num1 << " 나누기 " << num2 << "의 값은 : " << num1 / num2 << endl;
//			//cout << num1 << " 나누기 " << num2 << "의 값은 : " << static_cast<double>(num1) / num2 << endl; 
//		    //실수 결과를 얻기 위해 한 개의 변수를 캐스팅
//		}
//	}
//	return 0;
//}

// 모든 예외처리는 위 방법처럼 일일히 해줄 수 있음
// 1.아무튼 프로그램에 예외가 발생하는데, 예외 상황을 정확하게 모를 때
// 2.발생할 수 있는 예외가 너무 많아서, 일일히 처리하기 좀 귀찮을 때
// 3.의미상 정확하게 예외처리라는 것을 알려주기 위해




// 3.의미상 정확하게 예외처리라는 것을 알려주기 위해
//int main() {
//	// 숫자 2개를 입력 받아서, 나눗셈을 하는 프로그램
//
//	int num1, num2;
//
//	string messages[2] = { "Divided by 0","Program Exit" };
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "숫자를 입력해 주세요(9999 입력시 종료) : ";
//		cin >> num1;
//
//		try {
//			if (num1 == 9999) {
//				throw 101;
//			}
//			cout << "몇으로 나눌까요? : ";
//			cin >> num2;
//
//			if (num2 == 0) {
//				throw 100; // throw를 통해, 예외 상황에 대해서 원하는 값을 catch쪽에 보낼 수 있음
//			}
//			cout << num1 << " 나누기 " << num2 << "의 값은 : " << num1 / num2 << endl;
//		}
//		catch (int err_code) {
//			cout << messages[err_code % 100] << endl;
//			if (err_code == 101) {
//				break;
//			}
//		}
//		//catch (char* err_code) { // catch를 이용한 예외처리를 몇 개던 추가할 수 있음
//
//		//}
//	}
//	return 0;
//}

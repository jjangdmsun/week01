//���� ���1
//#include <random>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    random_device rd; 
//    mt19937 gen(rd());
//    uniform_real_distribution<> dis(1, 20); //��ȣ�� : ����
//    for (int i = 0; i < 10; i++) {
//        cout << static_cast<int>(dis(gen)) << ' ';
//    }
//    cout << '\n';
//}

//���� ���2
//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//using namespace std;
//
//int main() {
//	srand(time(0));
//	for (int i = 0; i < 10; i++) {
//		int temp = rand() % ((100 - 1) + 1); // 0~99 ����
//		int result = temp + 5; // �����̵� (5~104);
//		cout << result << " ";
//	}
//	return 0;
//}
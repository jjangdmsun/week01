//랜덤 방법1
//#include <random>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    random_device rd; 
//    mt19937 gen(rd());
//    uniform_real_distribution<> dis(1, 20); //괄호안 : 범위
//    for (int i = 0; i < 10; i++) {
//        cout << static_cast<int>(dis(gen)) << ' ';
//    }
//    cout << '\n';
//}

//랜덤 방법2
//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//using namespace std;
//
//int main() {
//	srand(time(0));
//	for (int i = 0; i < 10; i++) {
//		int temp = rand() % ((100 - 1) + 1); // 0~99 범위
//		int result = temp + 5; // 범위이동 (5~104);
//		cout << result << " ";
//	}
//	return 0;
//}
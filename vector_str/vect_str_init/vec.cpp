#include "vec.h"

extern void vec_init() {
	vector<int> vec1;
	vector<float> vec2(3);
	vector<char> vec3(3, 'a');
	vector<char> vec4(vec3);
	printVec(vec1);
	printVec(vec2);
	printVec(vec3);
	printVec(vec4);
}

template <typename T>
extern void printVec(const vector<T> vec) {
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	cout << endl;
}

extern void vec_pb_fuc() {
	vector<string> str_vec = {"One"};
	unsigned short choice = 0;
	do {
		cout << "1. Read\n2. Write\n0. Exit\n Choice:" << endl;
		cin >> choice;
	
	} while (choice == 0);

}

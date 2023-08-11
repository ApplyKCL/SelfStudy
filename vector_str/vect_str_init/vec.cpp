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
	string str = "";
	do {
		cout << "1. Write\n2. Remove\n0. Exit\n Choice:" << endl;
		cin >> choice;
		switch (choice) {
		case 0:
			cout << "Exit The Program" << endl;
			break;
		case 1:
			cout << "Input String:" << endl;
			cin >> str;
			str_vec.push_back(str);
			break;
		case 2:
			if (str_vec.empty())
				break;
			str_vec.pop_back();
			break;
		}
		printVec(str_vec);
	} while (choice != 0);

}


extern void string_pb() {
	string str = "a";
	char choice = 0;
	char chr = 'a';
	do {
		cout << "1. Write\n2. Remove\n0. Exit\n Choice:" << endl;
		cin >> choice;
		switch (choice) {
		case '0':
			cout << "Exit The Program" << endl;
			break;
		case '1':
			cout << "Input String:" << endl;
			cin >> chr;
			str.push_back(chr);
			break;
		case '2':
			if (str.empty())
				break;
			str.pop_back();
			break;
		}
		cout << str << endl;
		cout << choice << endl;
	} while (choice != '0');


}

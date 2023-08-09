#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> vect1;
	vector<float> vec2(3);
	vector<char> vec3(3, 'a');
	vector<char> vec4(vec3);

	cout << "Vector 2: " << endl;
	for (int i = 0; i < vec2.size(); i++) {
		cout << vec2[i] << " ";
	}
	cout << endl;
	cout << "Vector 3: " << endl;
	for (int i = 0; i < vec3.size(); i++) {
		cout << vec3[i] << " ";
	}
	cout << endl;
	cout << "Vector 4: " << endl;
	for (int i = 0; i < vec4.size(); i++) {
		cout << vec4[i] << " ";
	}
	return 0;
}
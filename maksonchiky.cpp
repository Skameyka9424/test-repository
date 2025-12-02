#include <iostream>
#include <vector>

using namespace std;

vector<string> File_read() {
    vector<string> file;
    return file;
}

void Cout_file(vector<string> file) {

}

void File_write(vector<string> file) {

}

int main() {
vector<string> file = File_read();
Cout_file(file);
File_write(file);
}
int brbr_patapim() {

	string word;
	cin >> word;

	int length = word.length();
	string form;

	for (int i = 0; i < length; i++) {
		int counter = 0;
		for (int x = 0; x < length; x++)
			if (word[i] == word[x]) {
				counter++;
			}
		}
		if (counter > 1) {
			form += ')';
		}
		else form += '(';
		}

	cout << form;

	return 0;
}

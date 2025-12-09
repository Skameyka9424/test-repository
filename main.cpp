#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

vector<char> File_read() {
    ifstream txt_file("Текстовый файл.txt");
    if(!txt_file.is_open()) {
        cout << "File open error \n";
        exit(0);
    }
    else {
        vector<char> file;
        return file;
    }
}

void Cout_file(vector<char> file) {

}

void File_write(vector<char> file) {

}

int main() {
vector<char> file = File_read();
Cout_file(file);
File_write(file);
}
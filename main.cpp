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
        txt_file.seekg(0, ios::end);
        int fileSize = txt_file.tellg();
        txt_file.seekg(0, ios::beg);

        vector<char> file(fileSize, 0);
        txt_file.read(file.data(), fileSize);
        return file;
    }
}

void Cout_file(vector<char> file) {

    for (const auto &i:file) {
        cout << i;
    }
    cout << endl;
}

void File_write(vector<char> file) {

    ofstream NewFile("New.txt");
    NewFile.write(file.data(), file.size());
    NewFile.close();
}

int main() {
vector<char> file = File_read();
Cout_file(file);
File_write(file);
}
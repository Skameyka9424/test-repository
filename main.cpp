#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

vector<char> File_read() {
    vector<char> file;
    return file;
}

void Cout_file(vector<char> file) {

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
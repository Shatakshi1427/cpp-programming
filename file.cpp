#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string data;
    ofstream outfile("data.txt");

    cout << "Enter some data:";
    getline(cin, data);

    outfile << data;
    outfile.close();

    ifstream infile("data.txt");
    cout << "\n Data read from file:";
    getline(infile, data);
    cout << data;

    infile.close();

    return 0;
}


#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
    string ip;
    string part;
    vector<int> octet;

    cout << "Enter IPv4 Address in decimal form: ";
    cin >> ip;

    // Separate IP address using '.'
    stringstream ss(ip);

    while (getline(ss, part, '.'))
    {
        // Check whether part is empty
        if (part.empty())
        {
            cout << "Invalid IP Address!" << endl;
            return 0;
        }

        // Check whether part contains only digits
        for (char ch : part)
        {
            if (!isdigit(ch))
            {
                cout << "Invalid IP Address!" << endl;
                return 0;
            }
        }

        // Convert string into integer
        int value = stoi(part);

        // Check range of octet
        if (value < 0 || value > 255)
        {
            cout << "Invalid IP Address!" << endl;
            return 0;
        }

        // Store integer in vector
        octet.push_back(value);
    }

    // IPv4 must contain exactly 4 octets
    if (octet.size() != 4)
    {
        cout << "Invalid IP Address!" << endl;
        return 0;
    }

    cout << "\nIP Address is Valid." << endl;

    // Display separated octets
    cout << "Separated IP: ";

    for (int i = 0; i < 4; i++)
    {
        cout << octet[i];

        if (i < 3)
            cout << " | ";
    }

    cout << endl;

    // Check IP Class using first octet
    int first = octet[0];

    if (first >= 1 && first <= 126)
    {
        cout << "Class : A" << endl;

        cout << "Net ID : "
             << octet[0] << ".0.0.0" << endl;

        cout << "Host ID : "
             << octet[1] << "."
             << octet[2] << "."
             << octet[3] << endl;
    }

    else if (first >= 128 && first <= 191)
    {
        cout << "Class : B" << endl;

        cout << "Net ID : "
             << octet[0] << "."
             << octet[1] << ".0.0" << endl;

        cout << "Host ID : "
             << octet[2] << "."
             << octet[3] << endl;
    }

    else if (first >= 192 && first <= 223)
    {
        cout << "Class : C" << endl;

        cout << "Net ID : "
             << octet[0] << "."
             << octet[1] << "."
             << octet[2] << ".0" << endl;

        cout << "Host ID : "
             << octet[3] << endl;
    }

    else if (first >= 224 && first <= 239)
    {
        cout << "Class : D" << endl;
        cout << "Multicast Address" << endl;
        cout << "No Net ID and Host ID." << endl;
    }

    else if (first >= 240 && first <= 255)
    {
        cout << "Class : E" << endl;
        cout << "Experimental/Reserved Address" << endl;
        cout << "No Net ID and Host ID." << endl;
    }

    else
    {
        cout << "Invalid/Special IP Address!" << endl;
    }

    return 0;
}

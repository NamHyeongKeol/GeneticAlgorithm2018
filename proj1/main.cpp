#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    string filePath = "../proj1_instances/unweighted_50.txt";

    // read File
    ifstream openFile(filePath.data());
    if( openFile.is_open() ){
        string line;
        int n, k;
        openFile >> n >> k;

        while(getline(openFile, line)){
            cout << line << endl;
        }
        openFile.close();
    }

    return 0;
}
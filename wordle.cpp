#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
   
    srand(time(0));
    ifstream inFS("words.txt");
    string word;
    vector <string> list;

    if(!inFS.is_open()){
        cerr << "Error opening file" << endl;
        exit(1);
    }
    while(inFS>>word){
        list.push_back(word);
       }
       cout << list[rand()%list.size()]<<endl;
       return 0;
}

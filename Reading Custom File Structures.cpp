#include <iostream>
#include <fstream>
using namespace std;
int main(){

    ifstream hamFile("players.txt");

    int ID;
    string name;
    double Acc;

    while(hamFile >> ID >> name >> Acc){
        cout << ID << ", " << name << ", " << Acc << endl;
    }
}
/*
- ifstream reads data from a file object.

- Optional constructors takes name of file as a parameter.

- Our document has 3 pieces of info.

- So we create 3 variables with respective
data types to read from th file.

- In order to take data from that file and
store it on our program, we need a while loop which
takes in information from the file
using a stream exaction extraction operator >>

- File pointer is gonna read the first piece of info and
store it i the respective data type's variable.

- File pointer is gonna loop through all the
data on file one by one.

- Next we use an output stream object to make
our program print the data on the file onto our screen.

- End of file marker makes our program returns
null pointer, changing the boolean in the
while loop false.

- Whenever file pointer reaches null pointer, the object file
is gonna deconstruct/close automatically.

*/


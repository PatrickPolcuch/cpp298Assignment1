#include <iostream>
using namespace std;
int main(int argc,char** argv);
int main(int argc,char** argv){
    float oz;
    cout<<"How many oz are in a the package of cereal?"<<endl;
    cin>>oz;
    cout<<"One package is "<<oz/35273.92<<" metric ton.\n"<<35273.92/oz<<" packages are required to make one ton of cereal."<<endl;

    return 1;
}

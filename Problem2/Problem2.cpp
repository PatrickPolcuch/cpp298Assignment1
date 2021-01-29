#include <iostream>
using namespace std;
int main(int argc,char** argv);
int main(int argc,char** argv){
  int capasity=stoi(argv[1]);
  int people = stoi(argv[2]);

  if(capasity<people){
    cout<<"This meeting cannot be held as planned due to fire regulations. "<<people-capasity<<" people must be excluded to meet fire regulation."<<endl;
  }else{
    cout<<"It is legal to hold the meeting, and up to "<<capasity-people<<" aditional people can attend this meeting."<<endl;
  }

  return 1;
}

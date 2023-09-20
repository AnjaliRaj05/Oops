// Object--> instance of class
#include<iostream>
using namespace std;
class hero {
     // class ki properties
     public: // access identifier --> it can be accessed anywhere inside or outside of the class

      int health;
      private: // only can be accessed throgh inside of the class
      char level;
      void print(){
        cout<<level<<endl;
      }
      
};
int main()
{
   hero anjali;
   anjali.health =100;
  cout<<"anjali ka health:"<<anjali.health<<endl;
    return 0;
}
// Object--> instance of class
// getter and setter methods
#include<iostream>
using namespace std;
class hero {
     // class ki properties
     private: // access identifier --> it can be accessed anywhere inside or outside of the class

      int health;
      public: // only can be accessed throgh inside of the class
      char level;
      void print(){
        cout<<level<<endl;
      }

      int getHealth(){
      return health;
      }
      char getLevel(){
        return level;
      }
      void setHealth(int h)
      {
        health = h;
      }

void setLevel(char ch)
{
    level = ch;
}
      
};
int main()
{
  hero a; // static allocation
  a.setHealth(80);
  a.setLevel('B');
  cout<<"level is"<<a.level<<endl;
  cout<<"health is"<<a.getHealth()<<endl;
  hero *b=new hero; // dynamically allocation
  b->setLevel('A');
  b->setHealth(50);
  cout<<"level is:"<<(*b).level<<endl;
  cout<<"health is:"<<(*b).getHealth()<<endl;
   hero anjali;
   cout<<"anjali ka health:"<<anjali.getHealth()<<endl; // it will give uh garbase value bcz we didnot assign anything

   //anjali.health =100;
  // if you want to set the health and then access
  anjali.setHealth(100);

  anjali.level ='A';
  cout<<"anjali ka health:"<<anjali.getHealth()<<endl;
  cout<<"anjali ka level:"<<anjali.level<<endl;
    return 0;
}
#include<iostream>
#include<cstring>
using namespace std;

class Hero
{
    private:
    int health;
    public:
    char level;
    char *name;
    static int timetocomplete;
    
    Hero(){
        cout<<"Constructor is called"<<endl;
        name=new char[100];
        
        
    }
    
    //parametrized Constructor
    
    Hero(int health,int level)
   
    {
         cout<<"this"<<this<<endl;
        this->health=health;
        this->level=level;
    }
    
    //copy Constructor
    
    Hero(Hero& temp)
    {
        char *ch=new char[strlen(temp.name)+1];
        
        strcpy(ch,temp.name);
        this->name=ch;
        
        this->health=temp.health;
        this->level=temp.level;
   }
    
    void print()
    {
        cout<<"name is:"<<this->name<<endl;
        cout<<"level is :"<<this->level<<endl;
        cout<<"health is :"<<this->health<<endl;
    }
    
    
    int getHealth()
    {
       return health;
    }
    char getlevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health=h;
    }
    void setlevel(char l)
{
    level=l;
}
 void setname(char name[])
{
    strcpy(this->name,name);
}
//random 
static int random()
{
 return timetocomplete;
//destructor
~Hero()
{
    cout<<"Destctor is called:"<<endl;
    
}
    
};
int Hero::timetocomplete = 5;


int main()
{
    //static member can acces only static member functions
    cout<<Hero::timetocomplete<<endl;
    
    
    
    
    //static data member allocation
  //  cout<<Hero::timetocomplete<<endl;
    
    
    
    
   // Hero a;
    
   // cout<<"hello world"<<endl;
    //manually calling destuctor in the dynamic memory allocation
   // Hero *b=new Hero();
    //delete b;
    
    
    
    
    
    
    
    
    
   // Hero hero1;
   // hero1.setHealth(20);
  //  hero1.setlevel('c');
  //  char name[8] = "vaishak";
  //  hero1.setname(name);
    
  //  hero1.print();
    
  //  Hero hero2(hero1);
  //  hero2.print();
    
  //  hero1.name[0]='G';
  //  hero1.print();
  //  hero2.print();
    
    
    
    
    
    
    
    //statically
    //object created statically
   // cout<<"HI"<<endl;
   // Hero h1(10);
  //  cout<<"hello"<<endl;
//  Hero suresh(10,'c');
  
 // suresh.print();
  
 // Hero R(suresh);
 // R.print();
  
    
    //dynamically
    
   // cout<<"hi"<<endl;
   // Hero *b =new Hero;
   // cout<<"hello"<<endl;
    
  //  cout<<"adress of the h1 is :"<<&h1<<endl;
    
    
    
    
    
    
    
    
    
   // h1.setHealth(30);
   // h1.setlevel('b');
  //  cout<<"size of h1 is:"<<sizeof(h1)<<endl;
   // h1.setHealth(50);
   /// h1.setlevel('a');
  // cout<<"level is:"<<h1.level<<endl;
  // cout<<"health is:"<<h1.getHealth()<<endl;
    
    //dynamically
    
   // Hero *b=new Hero;
    
   // b->setlevel('a');
   // b->setHealth(20);
    
  //  cout<<"level is:"<<(*b).level<<endl;
  //  cout<<"health is:"<<(*b).getHealth()<<endl;
    
  //  cout<<"level is:"<<b->level<<endl;
  //  cout<<"health is:"<<b->getHealth()<<endl;
   
   // cout<<"helath of h1:"<<h1.getHealth()<<endl;
    //cout<<"Level of the h1:"<<h1.getlevel()<<endl;
    return 0;
}

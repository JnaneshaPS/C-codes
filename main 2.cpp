#include <iostream>
using namespace std;

//class Human{
  //  public:
    //string name;
//    int age;
  //  int height;

//int getage()
//{
  //  return this->age;
//}

//void setheight(int w)
//{
  //  this->height=w; 
//}
//void speak()
//{
  //  cout<<"human is speaking"<<endl;
//}
//};

//multilevel inheritense
//class Male:public Human{
//    public:
//    string color;
    
//    void sleep()
//    {
 //       cout<<"male sleeping is good"<<endl;
 //   }
 //   int getheight()
 //   {
 //       return this->height;
//    }
//};

//class vaishak:public Male{
    
//};

//class Animal
//{
 // public:
 // string color;
  
//  public:
//  void bark()
//  {
   //   cout<<"animal is barking"<<endl; 
 // }
//};

//multiple inheritense

// Hybrid:public Human,public Animal
//{
    
//};

//Hierchial inheritense

//class A{
 // public:
 // void func1()
 // {
 //     cout<<"This is function 1\n"<<endl;
 // }
//};

//class B:public A{
//  public:
//  void func2()
 // {
  //    cout<<"This is function 2 \n"<<endl;
 // }
//};

//class C:public A{
//  public:
//  void func3()
//  {
//      cout<<"This is function 3 \n"<<endl;
//  }
//};

//Hybrid inheritence

//inheritense ambigity

//class A{
  //public:
  //void func()
  //{
   //   cout<<"I am A"<<endl;
  //}
//};

//class B{
  //public:
  //void func()
  //{
    //  cout<<"I am B"<<endl;
  //}
//};

 //class C:public A,public B{
    
    
//};

//run time polymorphism

class Animal{
  public:
  void speak()
  {
      cout<<"Speaking"<<endl;
  }
};

class Dog:public Animal{
  public:
  void speak()
  {
      cout<<"barking"<<endl;
  }
};

int main() {

Dog d1;
d1.speak();


Animal a1;
a1.speak();








//inheritnse ambuiguity
//C obj;
//obj.A::func();
//obj.B::func();







//A a1;
//a1.func1();

//cout<<"entering to the class B"<<endl;

//B b1;
//b1.func1();
//b1.func2();

//C c1;
//c1.func1();
//c1.func3();





//Hybrid h1;
//h1.speak();
//h1.bark();





    
//vaishak v1;
//cout<<v1.age<<endl;
//v1.speak();
//v1.sleep();







//    Male m1;
  //  cout<<m1.height<<endl;
   // m1.getheight();
    //m1.speak();
    
    
    
    
    
   // Male vaishak;
    //cout<<vaishak.age<<endl;
    //cout<<vaishak.color<<endl;
    //vaishak.sleep();

     
    
    
	return 0;
}
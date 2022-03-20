#include<iostream>
using namespace std;
void print_menu();
class Question {
    public: 
    string Ques;
    string opt_A;
    string opt_B;
    string opt_C;
    string opt_D;
    string ans;
    string description;
    
};

void print_question(Question ques_obj){
    string answer;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"Ques: "<<ques_obj.Ques<<endl;
    cout<<"A: "<<ques_obj.opt_A<<endl;
    cout<<"B: "<<ques_obj.opt_B<<endl;
    cout<<"C: "<< ques_obj.opt_C<<endl;
    cout<<"D: " <<ques_obj.opt_D<<endl;
    cin>>answer;
    if(answer==ques_obj.ans ){
        cout<<"Correct!"<<endl;
    }
    else{
        cout<<"Sorry InCorrect!"<<endl;
    }
    cout<<endl<<ques_obj.description<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    print_menu();
}



void class_question(){
Question Obj;
Obj.Ques="Who can access all the private members of a class? ";
Obj.opt_A="The class and its Friend classes";
Obj.opt_B="Public classes";
Obj.opt_C="The class and its derived classes";
Obj.opt_D="The class, Friend class and derived classes";
Obj.ans="A";
Obj.description= "Only the Friend classes can access the private members of the class";
print_question(Obj);
};


void object_question(){
Question Obj;
Obj.Ques="What is the correct way to create an object in C++ ? ";
Obj.opt_A="Myclass *object = new Myclass();";
Obj.opt_B="Myclass object;";
Obj.opt_C="MyClass myclass(12);";
Obj.opt_D="All of the above";
Obj.ans="D";
Obj.description= "Vehicle is the only base class and rest are all derived ones";
print_question(Obj);
};


void inheritence_question(){
Question Obj;
Obj.Ques="If you wish to create following classes: Vehicle,Car,Truck,Cycle,E-Rickshaw, how many base and derived classes should be there respectively?";
Obj.opt_A="1,4";
Obj.opt_B="2,3";
Obj.opt_C="3,2";
Obj.opt_D="None ";
Obj.ans="A";
Obj.description= "Vehicle is the only base class and rest are all derived ones";
print_question(Obj);
};


void polymorphism_question(){
Question Obj;
Obj.Ques="If you are to create an add function to add two strings and two integers, what solution u will use? ";
Obj.opt_A="int ADD(int,int)";
Obj.opt_B="string ADD(string,string)";
Obj.opt_C="Both A and B";
Obj.opt_D="Not possible to create ADD fuction to add string and integer";
Obj.ans="C";
Obj.description= "Static Polymorphism is a phenomenon where we can define two functions of same fuction name and compiler will decide at compile time which function should be invoked \n Also referred to as Function overloading when we have multiple function signature with same fuction name ";
print_question(Obj);

};

void Dynamic_Polymorphism_question(){
Question Obj1;
Obj1.Ques="If we have a base class vehicle and a child class car extending vehicle, if we create a pointer of type vehicle pointing to an object of car then which funtion will be invoked at runtime? ";
Obj1.opt_A="Functions from base class vehicle";
Obj1.opt_B="Funtiions from chlid class car";
Obj1.opt_C="Only virtual functions in base class will be invoked from child class others will be invoked from base class";
Obj1.opt_D="Only virtual functions in child class will be invoked from base class others will be invoked from base class";
Obj1.ans="C";
Obj1.description= "Dynamic Polymorphism is a phenomenon where we can define a virtual function in base class and child class can define its own definition of base class \n This is an example of function overriding ";
print_question(Obj1);
}



void encapsulation_question(){
Question Obj;
Obj.Ques="If you have to create a rectangle object where width of rectangle is double of the height of the rectangle, how will you ensure this property in your class object? ";
Obj.opt_A="Encapsulate only height under getters and setters and make it public property";
Obj.opt_B="Encapsulate the width and height under getters and setters and make width and height private properties";
Obj.opt_C="Encapsulate the width and height under getters and setters and make width and height public properties";
Obj.opt_D="Avoid using getters and setters";
Obj.ans="B";
Obj.description="To ensure width is double of height we don't want to give control to someone else to edit width and height, so make width and height private and provide getters and setters for them ";
print_question(Obj);
};


void abstraction_question(){
Question Obj;
Obj.Ques="Which of the following is ture?";
Obj.opt_A="Making use of access specifiers public,private and protected";
Obj.opt_B="Making use of inheritence and code reusability";
Obj.opt_C="Subclasses can define their specific behaviour where Subclass will have all the reusable code ";
Obj.opt_D="All of the above";
Obj.ans="D";
Obj.description="";
print_question(Obj);
};

void print_menu(){

 int input;
cout<<"Enter a topic index to continue"<<endl;
cout<<"1. Class"<<endl;
cout<<"2. Object"<<endl;
cout<<"3. Inheritence"<<endl;
cout<<"4. Static Polymorphism"<<endl;
cout<<"5. Dynamic Polymorphism"<<endl;
cout<<"6. Encapsulation"<<endl;
cout<<"7. Abstraction"<<endl;
cout<<"8. Exit"<<endl;
cin>>input;
//TODO: using enum 

switch(input){
case 1: 
class_question();
break;

case 2:
object_question();
break;

case 3: 
inheritence_question();
break;

case 4:
polymorphism_question();
break;

case 5:
Dynamic_Polymorphism_question();
break;

case 6:
encapsulation_question();
break;

case 7:
abstraction_question();
break;

case 8: 
exit(0);
break;

}
}
// driver code
int main()
{
    print_menu();
    return 0;
}

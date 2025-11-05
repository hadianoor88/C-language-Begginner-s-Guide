#include<iostream>
using namespace std;
class Student{
	protected:
		string name;
		string background;
	public: 
	    static int studentCount;

	Student():name("unknown"),background("unknown"){
		studentCount++;
	}//default constructor
	Student(string n, string bg):name(n),background(bg){ studentCount++;}//Parametarized constructor
	void  Choice(){//Function for Choice
	    cout<<"..............Welcome to Beginner's Guide................."<<endl;
		string c;
		cout<<"Would you like a small quiz to test your knowlege"<<endl;
		cin>>c;
		if (c=="yes"){
		
		int S=Quiz();
		GeneralRecommendations(S);
	}
		if(c=="no"||c== "No"){
		
		GeneralRecommendations(0);
	}
	}
	int  Quiz(){   //Function for Quiz 
		string choice;
		int score=0;
		cout << "Q1. What is the correct syntax to print a message on the screen in C++?"<<endl;
        cout << "   A. print('Hello');"<<endl;
        cout << "   B. printf('Hello');"<<endl;
        cout << "   C. cout << 'Hello';"<<endl;
        cout << "   D. System.out.println('Hello');"<<endl;
        cin>>choice;
        if(choice == "C" || choice=="c")
        score++;
        cout << "Q2. Which data type is used to store decimal numbers in C++?"<<endl;
        cout << "   A. int"<<endl;
        cout << "   B. float"<<endl;
        cout << "   C. char"<<endl;
        cout << "   D. bool"<<endl;
        cin>>choice;
        if(choice=="B" || choice=="b")
        score++;
        cout << "Q3. What is the purpose of the 'for' loop in C++?"<<endl;
        cout << "   A. To make decisions"<<endl;
        cout << "   B. To repeat a block of code multiple times"<<endl;
        cout << "   C. To define a new function"<<endl;
        cout << "   D. To terminate the program"<<endl;
        cin>>choice;
        if(choice=="B"|| choice=="b")
        score++;
        cout << "Q4. Which of the following symbols is used to access members of a class in C++?"<<endl;
        cout << "   A. * (asterisk)"<<endl;
        cout << "   B. -> (arrow)"<<endl;
        cout << "   C. . (dot)"<<endl;
        cout << "   D. Both B and C depending on usage"<<endl;
        cin>>choice;
        if(choice=="D"|| choice=="d")
        score++;
        cout << "Q5. What will be the output of this code?"<<endl;
        cout << "   int a = 5, b = 2;"<<endl;
        cout << "   cout << a / b;"<<endl;
        cout << "   A. 2.5"<<endl;
        cout << "   B. 2"<<endl;
        cout << "   C. 3"<<endl;
        cout << "   D. Error"<<endl;
        cin>>choice;
        if(choice=="B"|| choice=="b")
        score++;
        return score;
    }
 static   int StudentCount(){ //for count of objects created
		return studentCount;
	}
    //Function for general recommendations for ics and non ics both
       void GeneralRecommendations(int s){
       	if(s<=2){
       		cout<<"Seems you are new to programming!"<<endl;
       		cout<<endl;
       		cout<<"Kindly refer to the following Youtube link"<<endl;
       		cout<<endl;
       		cout<<"https://www.youtube.com/playlist?list=PLdo5W4Nhv31YU5Wx1dopka58teWP9aCee"<<endl;
       		cout<<endl;
       		cout<<"Kindly refer to book:  C++ Primer,5th Edition by Stanley B Lippman book"<<endl;
       		cout<<endl;
		}
		if(s>2){
			cout<<"You seem to have some prior knowledge of programming"<<endl;
			cout<<"Kindly refer to the following Youtube link, to become more pro in OOP"<<endl;
			cout<<"https://www.youtube.com/watch?v=vLnPwxZdW4Y"<<endl;
			cout<<"Kindly refer to book:Programming, Principles and Practice Using C++ by Bjarne Stroustrup "<<endl;
		}
   }
   void SetData(){ 
   	cout<<"Enter your name: "<<endl;
    cin>>name;
    cout<<"Enter your background: "<<endl;
    cin>>background;
   }
   void GetData(){
    cout<<"Name is: "<<name<<endl;
    cout<<"Background is: "<<background<<endl;
   }
};
class NonICS:public Student{
	public: 
	NonICS() : Student() {}  
	NonICS(string n1,string bg1):Student(n1,bg1){}
	void GeneralRecommendations(int s){
		string choice;
		Student::GeneralRecommendations(s);
		cout<<"Would you also like a personalized study plan?"<<endl;
		cin>>choice;
		if(choice=="yes" || choice=="Yes"){
			cout<<"Learn one concept from the book mentioned and practice the questions daily!"<<endl;
			cout<<endl;
			cout<<"Avoid copy pasting code from  AI tools as it kills logic building"<<endl;
			cout<<endl;
			cout<<"Always dry run your codes, learn the syntax and debug whenever an error comes, yourself"<<endl;
			cout<<endl;
		}
	}
	
};
class ICS:public Student{
	public:
	ICS(string n2, string bg2):Student(n2,bg2){	}
	 void GeneralRecommendations(int s){
		string choice;
		Student::GeneralRecommendations(s);
		cout<<"Would you like a personalized study plan? ";
		cin>>choice;
	if(choice=="yes" || choice=="Yes"){
		cout<<"As you already have some prior knowlege, learn the topics you are weak in and revise them"<<endl;
		cout<<endl;
		cout<<"Work on small side projects"<<endl;
		cout<<endl;
		cout<<"Explore more programming languages"<<endl;
		cout<<endl;
	}
	}
	
};
int Student::studentCount=0;
int main(){
	NonICS student1;
	student1.SetData();
	student1.GetData();
	student1.Choice();
//	NonICS student3("Zain Ali","Non Ics");
//	student3.GetData();
//	student3.Choice();
    ICS student("Ali","ICS");
    student.GetData();
    student.GeneralRecommendations(4);
	ICS student2("Hadia Noor","ICS");
	student2.GetData();
	student2.Choice();
	cout<<"Thanks you for using our platform!!!"<<endl;
	int s= Student::StudentCount();
	cout<<"Number of objects created "+s<<endl;
	return 0;
	
	
}
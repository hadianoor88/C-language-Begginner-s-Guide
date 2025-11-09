#include<iostream>
#include<fstream>
using namespace std;

// Function to Save data into the file
void SaveData(string name,string background,int score){
    ofstream InputDatainFile("BeginnerGuide.txt",ios::app);
    if(!InputDatainFile){
        cout<<"File did not open properly!"<<endl;
        return;
    }
    cout<<"...............Saving data into file................"<<endl;
    InputDatainFile<<"Name is: "<<name<<" with background: "<<background<<" with scored: "<<score<<endl;
    InputDatainFile.close();
}

// Function to Display the data from the file 
void DisplayData(){
    ifstream GetInputDataOfFile("BeginnerGuide.txt");
    if(!GetInputDataOfFile){ 
        cout<<"Failed to open file! "<<endl; 
        return;
    }
    string line;
    cout<<"Reading from the file"<<endl;
    while (getline(GetInputDataOfFile,line)){
        cout<<line<<endl;
    }
    GetInputDataOfFile.close();                  
}

class Quiz {
public:
    int quiz() {
        string choice;
        int score = 0;
        cout << "Q1. What is the correct syntax to print a message on the screen in C++?" << endl;
        cout << "   A. print('Hello');" << endl;
        cout << "   B. printf('Hello');" << endl;
        cout << "   C. cout << 'Hello';" << endl;
        cout << "   D. System.out.println('Hello');" << endl;
        getline(cin, choice);
        if (choice == "C" || choice == "c")
            score++;

        cout << "Q2. Which data type is used to store decimal numbers in C++?" << endl;
        cout << "   A. int" << endl;
        cout << "   B. float" << endl;
        cout << "   C. char" << endl;
        cout << "   D. bool" << endl;
        getline(cin, choice);
        if (choice == "B" || choice == "b")
            score++;

        cout << "Q3. What is the purpose of the 'for' loop in C++?" << endl;
        cout << "   A. To make decisions" << endl;
        cout << "   B. To repeat a block of code multiple times" << endl;
        cout << "   C. To define a new function" << endl;
        cout << "   D. To terminate the program" << endl;
        getline(cin, choice);
        if (choice == "B" || choice == "b")
            score++;

        cout << "Q4. Which of the following symbols is used to access members of a class in C++?" << endl;
        cout << "   A. * (asterisk)" << endl;
        cout << "   B. -> (arrow)" << endl;
        cout << "   C. . (dot)" << endl;
        cout << "   D. Both B and C depending on usage" << endl;
        getline(cin, choice);
        if (choice == "D" || choice == "d")
            score++;

        cout << "Q5. What will be the output of this code?" << endl;
        cout << "   int a = 5, b = 2;" << endl;
        cout << "   cout << a / b;" << endl;
        cout << "   A. 2.5" << endl;
        cout << "   B. 2" << endl;
        cout << "   C. 3" << endl;
        cout << "   D. Error" << endl;
        getline(cin, choice);
        if (choice == "B" || choice == "b")
            score++;
        return score;
    }
};

class Recommendations {
public:
    void Recommendationss(int score) {
        if (score < 2)
            GeneralRecommendations();
        else
            AdvancedRecommendations();
    }
    void GeneralRecommendations() {
        cout << "Seems you are new to programming!" << endl;
        cout << "Follow this Youtube playlist:" << endl;
        cout << "https://www.youtube.com/playlist?list=PLdo5W4Nhv31YU5Wx1dopka58teWP9aCee" << endl;
        cout << "Book: C++ Primer (5th Edition) by Stanley B. Lippman" << endl;
    }
    void AdvancedRecommendations() {
        cout << "You seem to have some prior knowledge of programming" << endl;
        cout << "Youtube: https://www.youtube.com/watch?v=vLnPwxZdW4Y" << endl;
        cout << "Book: Programming Principles and Practice Using C++ by Bjarne Stroustrup" << endl;
    }
};

class Choice {
public:
    string choice;
    int c() {
        cout << "Would you like a quiz?" << endl;
        getline(cin, choice);
        if (choice == "yes" || choice == "Yes") {
            Quiz q;
            int q1 = q.quiz();
            Recommendations R;
            R.Recommendationss(q1);
            return q1;
        }
        else {
            Recommendations R1;
            R1.Recommendationss(0);
            return 0;
        }
    }
};

class Student {
protected:
    string name;
    string background;
public:
    static int studentCount;
    Student(string n, string bg) : name(n), background(bg) { studentCount++; }
    virtual void PersonalizedStudyPlan() {
        cout << "In order to learn Programming you need to: " << endl;
        cout << "Follow a suitable Youtube playlist, along side with a beginner friendly book" << endl;
        cout << "Avoid overusing AI; focus on logic building and practice." << endl;
    }
    void Count() {
        cout << "Number of students who used our app: " << studentCount << endl;
    }
};
int Student::studentCount = 0;

class NonICS : public Student {
public:
    NonICS(string n1, string bg1) : Student(n1, bg1) {}
    void PersonalizedStudyPlan() override {
        cout << "**** Buckle up new Programmer!!!! ****" << endl;
        cout << "Start by watching the recommended Youtube playlist and following book chapters." << endl;
        cout << "Be careful using AI tools — build logic by yourself!" << endl;
        cout << "Never give up! ^.^" << endl;
        cout << "__________________________________________________________" << endl;
    }
};

class ICS : public Student {
public:
    ICS(string n2, string bg2) : Student(n2, bg2) {}
    void PersonalizedStudyPlan() override {
        cout << "You have prior knowledge. Focus on your weak areas!" << endl;
        cout << "Work on projects and follow the recommended playlist and book." << endl;
        cout << "Best of luck!" << endl;
    }
};

class BeginnersGuide {
public:
    string n, bG, E;
    void Menu() {
        DisplayData(); 
        do {
            cout << "\nWelcome to Beginner's Guide ! ^.^ " << endl;
            cout << "Please enter your name: ";
            getline(cin, n);
            cout << "Please enter your background: ";
            getline(cin, bG);

            if (bG == "ICS" || bG == "Ics" || bG == "ics") {
                ICS student(n, bG);
                Choice c1;
                int q = c1.c();
                SaveData(n, bG, q);
                student.PersonalizedStudyPlan();
            }
            else if (bG == "Non Ics" || bG == "non ics" || bG == "Non ics") {
                NonICS student(n, bG);
                Choice c1;
                int q = c1.c();
                SaveData(n, bG, q);
                student.PersonalizedStudyPlan();
            }

            cout << "\nThank you for using our app!" << endl;
            cout << "Type EXIT to end Program or any key to continue: ";
            getline(cin, E);
        } while (E != "EXIT");
    }
};

int main() {
    BeginnersGuide BG;
    BG.Menu();
    return 0;
}

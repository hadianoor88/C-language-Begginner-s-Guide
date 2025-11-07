#include<iostream>
using namespace std;

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
        cin >> choice;
        if (choice == "C" || choice == "c")
            score++;
        cout << "Q2. Which data type is used to store decimal numbers in C++?" << endl;
        cout << "   A. int" << endl;
        cout << "   B. float" << endl;
        cout << "   C. char" << endl;
        cout << "   D. bool" << endl;
        cin >> choice;
        if (choice == "B" || choice == "b")
            score++;
        cout << "Q3. What is the purpose of the 'for' loop in C++?" << endl;
        cout << "   A. To make decisions" << endl;
        cout << "   B. To repeat a block of code multiple times" << endl;
        cout << "   C. To define a new function" << endl;
        cout << "   D. To terminate the program" << endl;
        cin >> choice;
        if (choice == "B" || choice == "b")
            score++;
        cout << "Q4. Which of the following symbols is used to access members of a class in C++?" << endl;
        cout << "   A. * (asterisk)" << endl;
        cout << "   B. -> (arrow)" << endl;
        cout << "   C. . (dot)" << endl;
        cout << "   D. Both B and C depending on usage" << endl;
        cin >> choice;
        if (choice == "D" || choice == "d")
            score++;
        cout << "Q5. What will be the output of this code?" << endl;
        cout << "   int a = 5, b = 2;" << endl;
        cout << "   cout << a / b;" << endl;
        cout << "   A. 2.5" << endl;
        cout << "   B. 2" << endl;
        cout << "   C. 3" << endl;
        cout << "   D. Error" << endl;
        cin >> choice;
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
        cout << endl;
        cout << "Follow the following Youtube link" << endl;
        cout << endl;
        cout << "https://www.youtube.com/playlist?list=PLdo5W4Nhv31YU5Wx1dopka58teWP9aCee" << endl;
        cout << endl;
        cout << "Kindly refer to book:  C++ Primer,5th Edition by Stanley B Lippman book" << endl;
        cout << endl;
    }
    void AdvancedRecommendations() {
        cout << "You seem to have some prior knowledge of programming" << endl;
        cout << "Kindly refer to the following Youtube link, to become more pro in OOP" << endl;
        cout << "https://www.youtube.com/watch?v=vLnPwxZdW4Y" << endl;
        cout << "Kindly refer to book:Programming, Principles and Practice Using C++ by Bjarne Stroustrup " << endl;
    }
};

class Choice {
public:
    string choice;
    void c() {
        cout << "Would you like a quiz?" << endl;
        cin >> choice;
        if (choice == "yes" || choice == "Yes") {
            Quiz q;
            int q1 = q.quiz();
            Recommendations R;
            R.Recommendationss(q1);
        }
        if (choice == "No" || choice == "no") {
            Recommendations R1;
            R1.Recommendationss(0);
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
    void SetData() {
        cout << "Enter your name: " << endl;
        cin >> name;
        cout << "Enter your background: " << endl;
        cin >> background;
    }
    void GetData() {
        cout << "Name is: " << name << " has background: " << background << endl;
    }
    virtual void PersonalizedStudyPlan() {
        cout << "In order to learn Programming you need to: " << endl;
        cout << "Follow a suitable Youtube playlist, along side with a beginner friendly book" << endl;
        cout << "You must be warned against the use of AI and focus on logic bulding and practice" << endl;
    }
    void Count() {
        cout << "Number of student used our app are: " << studentCount << endl;
    }
};
int Student::studentCount = 0;

class NonICS : public Student {
public:
    NonICS(string n1, string bg1) : Student(n1, bg1) {}
    void askPersonalPlan() {
        cout << "Do you want personalized study plan? ";
        string Ps; cin >> Ps;
        if (Ps == "yes" || Ps == "Yes") PersonalizedStudyPlan();
    }
    void PersonalizedStudyPlan() override {
        cout << "**** Buckle up new Programmer!!!! ****" << endl;
        cout << "Start by watching Youtube playlist and follow the book chapters" << endl;
        cout << "Practice and understand each question and example and try different approaches to solve the same problem" << endl;
        cout << "We very careful is using AI tools" << endl;
        cout << "Try logic building yourself and must dry run your codes before running them" << endl;
        cout << "And most importantly remember you might fall, but never give up!!" << endl;
        cout << "Hope you enjoy this hard journey ^.^ " << endl;
        cout << "_____________________________________________________________________________________________________________" << endl;
    }
};

class ICS : public Student {
public:
    ICS(string n2, string bg2) : Student(n2, bg2) {}
    void askPersonalPlan() {
        cout << "Do you want personalized study plan? ";
        string Ps; cin >> Ps;
        if (Ps == "yes" || Ps == "Yes") PersonalizedStudyPlan();
    }
    void PersonalizedStudyPlan() override {
        cout << "It is good that you have some prior knowledge" << endl;
        cout << "You must look the places you are weak in and work in those areas" << endl;
        cout << "Working on side projects is always a good idea too!" << endl;
        cout << "Follow the Youtube link you have been recommended and follow along with book" << endl;
        cout << "Best of luck !!! ^.^" << endl;
    }
};

class BeginnersGuide {
public:
    string n, bG, E;
    void Menu() {
        do {
            cout << "Welcome to Beginner's Guide ! ^.^ " << endl;
            cout << "Please enter your name: " << endl;
            cin >> n;
            cout << "Please enter your background: " << endl;
            cin >> bG;
            if (bG == "ICS" || bG == "Ics" || bG == "ics") {
                ICS student(n, bG);
                Choice c1;
                c1.c();
                student.PersonalizedStudyPlan();
            }
            if (bG == "Non Ics" || bG == "non ics" || bG == "Non ics") {
                NonICS student(n, bG);
                Choice c1;
                c1.c();
                student.PersonalizedStudyPlan();
            }
            cout << "Thank you for using our app !" << endl;
            cout << "Please enter EXIT to end Program" << endl;
            cin >> E;
        } while (E != "EXIT");
    }
};

int main() {
    BeginnersGuide BG;
    BG.Menu();
    return 0;
}

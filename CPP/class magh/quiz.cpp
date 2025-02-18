#include <iostream>
#include <conio.h>
using namespace std;
class Option
{
  int id;
  string descp;

public:
  Option()
  {
    id = 0;
    descp = "";
  }
  Option(int i, string d)
  {
    id = i;
    descp = d;
  }

  int getId() { return id; }
  string getdescription() { return descp; }

  void setId(int i) { id = i; }
  void setdescription(string s) { descp = s; }
};

class Question
{
  int id;
  string descp;
  Option op1, op2, op3, op4, op5;

public:
  Question()
  {
    id = 0;
    descp = "";
  }
  Question(int i, string d, Option o1, Option o2, Option o3, Option o4, Option o5)
  {
    id = i;
    descp = d;
    op1 = o1;
    op2 = o2;
    op3 = o3;
    op4 = o4;
    op5 = o5;
  }

  int getId() { return id; }
  string getdescription() { return descp; }
  Option getOption1() { return op1; }
  Option getOption2() { return op2; }
  Option getOption3() { return op3; }
  Option getOption4() { return op4; }
  Option getCorrectAnswer() { return op5; }

  void setId(int i) { id = i; }
  void setdescription(string s) { descp = s; }
  void setOption1(Option o1) { op1 = o1; }
  void setOption2(Option o1) { op2 = o1; }
  void setOption3(Option o1) { op3 = o1; }
  void setOption4(Option o1) { op4 = o1; }
  void setCorrectOption(Option o1) { op5 = o1; }
};

class QuestionBank
{
  int id, totalq;
  Question list[100];

public:
  QuestionBank()
  {
    id = 0;
    totalq = 0;
  }

  int getId() { return id; }
  Question *getQuestionList() { return list; }
  int gettotalquestions() { return totalq; }

  void setId(int i) { id = i; }
  void setQuestionList(Question ls[]) {}
  void settotalquestions(int i) { totalq = i; }
  void addQuestion()
  {
    Question q;
    int idd;
    string s;
    Option op1, op2, op3, op4, op5;
    cout << "Enter id:";
    cin >> idd;
    q.setId(idd);
    cout << "Enter description:";
    getline(cin, s);
    q.setdescription(s);
    cout << "Enter Option1: \n\n";
    cout << "id: ";
    cin >> idd;
    op1.setId(idd);
    cout << "description: ";
    getline(cin, s);
    op1.setdescription(s);
    cout << "\n\nEnter Option2: \n\n";
    cout << "id: ";
    cin >> idd;
    op2.setId(idd);
    cout << "description: ";
    getline(cin, s);
    op2.setdescription(s);
    cout << "\n\nEnter Option3: \n\n";
    cout << "id: ";
    cin >> idd;
    op3.setId(idd);
    cout << "description: ";
    getline(cin, s);
    op3.setdescription(s);
    cout << "\n\nEnter Option4: \n\n";
    cout << "id: ";
    cin >> idd;
    op4.setId(idd);
    cout << "description: ";
    getline(cin, s);
    op4.setdescription(s);
    cout << "\n\nEnter Correct option: \n\n";
    cout << "id: ";
    cin >> idd;
    op5.setId(idd);
    cout << "description: ";
    getline(cin, s);
    op5.setdescription(s);

    q.setOption1(op1);
    q.setOption2(op2);
    q.setOption3(op3);
    q.setOption4(op4);
    q.setCorrectOption(op5);

    list[++totalq] = q;
  }
};

class Quiz
{
  int score;
  QuestionBank qbank;

public:
  Quiz()
  {
    score = 0;
  }
  Quiz(QuestionBank b, int s)
  {
    score = s;
    qbank = b;
  }

  int getScore() { return score; }
  QuestionBank getQuestionBank() { return qbank; }

  void setScore(int i) { score = i; }
  void setQuestionBank(QuestionBank ls) { qbank = ls; }
};

int main()
{
  Question q1;
  int choice;
  Quiz quiz;
  do
  {
    system("cls");
    cout << "Quizz Application" << endl;
    cout << "-----------------" << endl;
    cout << "1. Display Question Bank" << endl;
    cout << "2. Play quiz" << endl;
    cout << "3. Display score" << endl;
    cout << "4. Add question" << endl;
    cout << "5. Delete Question" << endl;
    cout << "6. Exit" << endl;
    cout << "\n\nWhich operation?" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
      break;
    case 2:
      break;
    case 3:
      cout << "Current score: " << quiz.getScore() << endl;
      getch();
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      cout << "Thanks and BYE!!\n\n"
           << endl;
      return 0;
    default:
      cout << "invalid choice. Enter [1-6]\n\n"
           << endl;
      continue;
    }
  } while (1);
}

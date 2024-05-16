#include<iostream>
#include<vector>
#include<string>

using namespace std;
class Student{
    private:
        string id;
        int acscore;
        int exscore;
    public:
        Student(string id, int acscore, int exscore)
            : id(id), acscore(acscore), exscore(exscore) {}
        int ifExcellent(){
            if(((acscore*7 + exscore*3) >= 800)&&(acscore+exscore > 140)){
                return 1;
            }
            return 0;
        }
};
int main(){
    vector<Student> students;
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        string id;
        int acscore, exscore;
        cin >> id >> acscore >> exscore;
        students.push_back(Student(id, acscore, exscore));
        if(students[i].ifExcellent()){
            cout<<"Excellent"<<endl;
        }
        else{
            cout<<"Not excellent"<<endl;
        }
    }
    return 0;
}
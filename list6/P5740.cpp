#include<iostream>
#include<vector>
using namespace std;
class Student{
    private:
        string name;
        int Chinese;
        int Math;
        int English;
    public:
        Student(string name,int Chinese,int Math,int English):name(name),Chinese(Chinese),Math(Math),English(English){}
        int getSum(){
            return Chinese + Math + English;
        }
        string getName(){
            return name;
        }
        int getChinese(){
            return Chinese;
        }
        int getMath(){
            return Math;
        }
        int getEnglish(){
            return English;
        }
};
int main(){
    vector<Student> students;
    int n;
    int topScore = 0;
    cin>>n;
    for(int i = 0;i < n;i++){
        string name;
        int Chinese,Math,English;
        cin>>name>>Chinese>>Math>>English;
        students.push_back(Student(name,Chinese,Math,English));
        topScore = max(topScore,students[i].getSum());
    }
    for(int i = 0;i < n;i++){
        if(students[i].getSum() == topScore){
            cout<<students[i].getName()<<" "<<students[i].getChinese()<<" "<<students[i].getMath()<<" "<<students[i].getEnglish()<<endl;
            break;
        }
    }
    return 0;
}
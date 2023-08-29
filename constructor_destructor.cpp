#include<iostream>
using namespace std;
 class HumanBeing{
    private:
        string name;
        int age;
    public:
    //Default Constructor
        HumanBeing(){
             name="No word to be print";
            age=0;
        }
    //Parametarized Constructor
        HumanBeing(string word,int val ){  //These are formal arguments 
            name=word;
            age=val;
        }
    //Parametarized Constructor
        HumanBeing(string word){
            name=word;
            age=0;
        }
    //Parametarized Constructor
        HumanBeing(int val){
            name="No word to be print";
            age=val;
        }
    //Copy Constructor
        HumanBeing(HumanBeing &vijaya){
            name=vijaya.name;
            age=vijaya.age;
        }
        void display(){
            cout<<name<<"  "<<age<<"  "<<endl;
        }
 };

int main()
{
    HumanBeing vijaya;
    vijaya.display();
    HumanBeing v("Srinadh",18);     //Actual arguments
    v.display();
    HumanBeing S("Srinadh");
    S.display();
    HumanBeing k(18);
    k.display();
    HumanBeing gopala(v);
    gopala.display();
}
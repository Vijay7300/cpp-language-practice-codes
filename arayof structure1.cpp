#include<bits/stdc++.h>
using namespace std;

struct student{
    int rollNo;
    char name[20];
    float marks;
};
int main(){
struct student s[3]; 
cout<<"Please enter the student Info "<<endl;
for (int i=0;i<3;i++){
    cin>>s[i].rollNo>>s[i].name>>s[i].marks;
}
cout<<"St Roll# - Name - Marks: "<<"\n";
for(int i=0;i<3;i++){
cout<<s[i].rollNo<<"\t"<<s[i].name<<"\t "<<s[i].marks<<"%" <<endl;
}
    return 0;
}

#include<iostream>

using namespace std;
class animal{
	
	public:
		string name;
		int age ;
		void set_value(string n,int a){
			name=n;
			age=a;
			
		}
		
	
};
class zebra:public animal {
	public:
		string origine="l`frique ";
		void dis(){
		cout<<"  le nome est :  "<< name <<endl;
		cout<<"  l`age de zebra est :  "<<age << endl ;
		cout<<"  l`origine est : "<<origine <<endl ;
}
	
	
	
	
	
};
class dolphi : public animal{
	
	public :
	string origine="brazil";
	void dis(){
        cout<<"  le nome est :"<< name<< endl;
		cout<<"  l`age dolphi est :"<<age<<endl ;
		cout<<"  l origine dolphi est :"<<origine <<endl ; }	
};
	
	

int main(){
	

	zebra z;
	z.set_value("zebra",34);
	z.dis();
    dolphi d;
    d.set_value("dolphi",56);
    d.dis();
	return 0 ;
	
}

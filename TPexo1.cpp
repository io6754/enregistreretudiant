#include <iostream>
#include<string>
using namespace std;
class Etudiant
{
   private:
         string nom;
		 string prenom;
		 int age;
	public:
		void setnom(string nom)
		{
			this->nom=nom;
		}
		string getnom() const
		{
			return nom;
		}
		void setprenom(string prenom)
		{
			this->prenom=prenom;
		}
		string getprenom() const
		{
			return prenom;
		} 
		void setage(int age)
		{
			this->age=age;
		}
		int getage() const
		{
			return age;
		}
		
 void saisir()
 {
 	 cout<<"entrer le nom de l'etudiant:"<<endl;
 	 cin>>nom;
 	 cout<<"entrer le prenom de l'etudiant:"<<endl;
 	 cin>>prenom;
 	 cout<<"entrer l'age de l'etudiant:"<<endl;
 	 cin>>age;
 }
 void afficher()
 { 
   cout<<"Nom de l'etudiant :" <<nom<<endl;
 	cout<<"Prenom de l'etudiant :" <<prenom<<endl; 
 	cout<<"Age de l'etudiant :" <<age<<endl;
 }
};

int main() 
{
	Etudiant E1;
	E1.saisir();
	E1.afficher();
	return 0;
}
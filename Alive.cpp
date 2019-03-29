#include <iostream>
#include <string.h>

using namespace std;
//Alive
class  Alive{
    private:
        string name;
    public:
        Alive(string name = "");
        ~Alive();
        void setName(string name);
        string getName();


        void importAlive();
        void displayAlive();

};

void Alive :: setName(string name){
    this->name = name;
}

string Alive :: getName(){
    return this->name;
}

Alive :: Alive(string name){
    this->setName(name);
}

Alive :: ~Alive(){
    delete(this);
}

void Alive :: importAlive(){
    cout << "*Import" << endl;
    cout << "+ Name : ";
    cin >> this->name;
}
void Alive ::  displayAlive(){
    cout << "*Display" << endl;
    cout << "1. Name : " << getName() << endl;
}





//Fish
class Fish : public Alive{
    private:
    	string name;
        string species;
		string color;
    public:
        Fish(string name = "", string species = "", string color = "");
        ~Fish();
        void setSpecies(string species);
        string getSpecies();
        
        void setColor(string species);
        string getColor();
        
        void importAlive();
        void displayAlive();

};


void Fish :: setSpecies(string species){
    this->species = species;
}

string Fish :: getSpecies(){
    return this->species;
}


void Fish :: setColor(string color){
    this->color = color;
}

string Fish :: getColor(){
    return this->color;
}

Fish::Fish(string name , string species, string color){
    this->setName(name);
    this->setSpecies(species);
    this->setColor(color);
}

Fish::~Fish(){
    delete(this);
}

void Fish :: importAlive(){
    this->Alive::importAlive();
    cout <<"+ Species : " ;
    cin >> this->species;
    cout << "+ Color: ";
    cin >> this->color;
}

void Fish :: displayAlive(){
    this -> Alive :: displayAlive();
    cout << "2. Species : " << getSpecies() << endl;
    cout << "3. Color : " << getColor() << endl;
}

//Bird

class Bird : public Alive{
    private:
    	string name;
        string species;
		string color;
    public:
        Bird(string name = "", string species = "", string color = "");
        ~Bird();
        void setSpecies(string species);
        string getSpecies();
        
        void setColor(string species);
        string getColor();
        
        void importAlive();
        void displayAlive();

};


void Bird :: setSpecies(string species){
    this->species = species;
}

string Bird :: getSpecies(){
    return this->species;
}


void Bird :: setColor(string color){
    this->color = color;
}

string Bird :: getColor(){
    return this->color;
}

Bird::Bird(string name , string species, string color){
    this->setName(name);
    this->setSpecies(species);
    this->setColor(color);
}

Bird::~Bird(){
    delete(this);
}

void Bird :: importAlive(){
    this->Alive::importAlive();
    cout <<"+ Species : " ;
    cin >> this->species;
    cout << "+ Color: ";
    cin >> this->color;
}

void Bird :: displayAlive(){
    this -> Alive :: displayAlive();
    cout << "2. Species : " << getSpecies() << endl;
    cout << "3. Color : " << getColor() << endl;
}

//Animal
class Animal : public Alive{
    private:
        string species;
		string color;
		short number_legs;
    public:
        Animal(string name = "", string species = "", string color = "", short number_legs =  4);
        ~Animal();
        void setSpecies(string species);
        string getSpecies();
        
        void setColor(string color);
        string getColor();
        
        void importAlive();
        void displayAlive();
        
        void setNumberLegs(short number_legs);
        short getNumberLegs();

};
void Animal :: setSpecies(string species){
    this->species = species;
}

string Animal :: getSpecies(){
    return this->species;
}

void Animal :: setColor(string color){
    this->color = color;
}

string Animal :: getColor(){
    return this->color;
}

void Animal :: setNumberLegs(short number_legs){
    this->number_legs = number_legs;
}

short Animal :: getNumberLegs(){
    return this->number_legs;
}

Animal::Animal(string name , string species, string color, short number_legs){
    this->setName(name);
    this->setSpecies(species);
    this->setColor(color);
    this->setNumberLegs(number_legs);
}

Animal::~Animal(){
    delete(this);
}

void Animal :: importAlive(){
    this->Alive::importAlive();
    cout <<"+ Species : " ;
    cin >> this->species;
    cout <<"+ Color : " ;
    cin >> this->color;
    cout << "+Number legs: ";
    cin >> this->number_legs;
}

void Animal :: displayAlive(){
    this -> Alive :: displayAlive();
    cout << "2. Species : " << getSpecies() << endl;
    cout << "3. Color : " << this->getColor() << endl;
    cout << "4. Number legs : "<< this->getNumberLegs()<<endl;
}

//Dog
class Dog : public Animal{
    private:
    	short weight;
    public:
        Dog(string name = "", string species = "", string color = "",  short number_legs =  4, short weight= 0);
        ~Dog();
        void setWeight(short weight);
        short getWeight();
        
        void importAlive();
        void displayAlive();

};
Dog::Dog(string name , string species, string color, short number_legs, short weight){
	this->setName(name);
    this->setSpecies(species);
    this->setColor(color);
    this->setNumberLegs(number_legs);
	this->weight = weight;
}

Dog::~Dog(){
    delete(this);
}

void Dog::setWeight(short weight){
	this->weight = weight;
}

short Dog::getWeight(){
	return this->weight;
}

void Dog :: importAlive(){
	this->Animal::importAlive();
    cout <<"+ Weight : " ;
    cin >> this->weight;
}

void Dog :: displayAlive(){
    this->Animal::displayAlive();
    cout << "5. Weight : " << getWeight() << endl;
}

//Car
class Car : public Animal{
    private:
    	short weight;
    public:
        Car(string name = "", string species = "", string color = "",  short number_legs =  4, short weight= 0);
        ~Car();
        void setWeight(short weight);
        short getWeight();
        
        void importAlive();
        void displayAlive();

};
Car::Car(string name , string species, string color, short number_legs, short weight){
	this->setName(name);
    this->setSpecies(species);
    this->setColor(color);
    this->setNumberLegs(number_legs);
	this->weight = weight;
}
Car::~Car(){
    delete(this);
}

void Car::setWeight(short weight){
	this->weight = weight;
}

short Car::getWeight(){
	return this->weight;
}

void Car :: importAlive(){
	this->Animal::importAlive();
    cout <<"+ Weight : " ;
    cin >> this->weight;
}

void Car :: displayAlive(){
    this->Animal::displayAlive();
    cout << "5. Weight : " << getWeight() << endl;
}
int main()
{
	Alive *al = new Alive();
	Bird *br = new Bird("Nightingal", "Fether", "Brown" );
	Fish *fi = new Fish("Carp", "freshwater", "Yellow");
	Animal *an = new Animal("Animal", "breast", "Unknow", 0);
	Dog *dog = new Dog("Kika", "Pug", "black", 4, 25);
	Car *car = new Car("Caci", "enlighs", "yellow", 4, 20);
	 
    cout << "*Brid"<< endl;
    br->displayAlive();
    
    cout << "*Fish"<< endl;
    fi->displayAlive();
    
    cout << "*Animal"<< endl;
    an->displayAlive();
    
    cout << "*Dog"<< endl;
    dog->displayAlive();
    
    cout << "*Car"<< endl;
    car->displayAlive();
    
    
    //cout << "Hello world!" << endl;
    return 0;
}


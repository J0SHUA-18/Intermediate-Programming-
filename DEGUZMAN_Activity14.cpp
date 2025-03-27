#include <iostream>

using namespace std;

class Creature {
protected:
    bool wings = false;
    int legs = 2;
    int hands = 2;

private:
    int lifespan = 0;

public:
    void CreatureSound() {  
        cout << "rawr" << endl;
    }

    void setLifespan(int years) {
        lifespan = years;
    }

    int getLifespan() {
    	lifespan = 10;
        return lifespan;
    }
};

class Pig : public Creature {
public:
    void CreatureSound() {  
        cout << "Pig's sound: " << "oink" << endl;
    }
	
    int getLegs() {
    	legs = 4;
        return legs;
    }
    
    int getHands() {
    	hands = 0;
        return hands;
    }

    bool getWings() {
        return wings;
    }

};

int main() {
    Pig pig1;
    pig1.CreatureSound();
    cout << "Wings: " << pig1.getWings() << endl;
    cout << "Legs: " << pig1.getLegs() << endl;
    cout << "Hands: " << pig1.getHands() << endl;
    cout << "Lifespan: " << pig1.getLifespan() << " years" << endl; 

    return 0;
}


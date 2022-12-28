#include <iostream>

using namespace std;
class shoppingList{

    public:
    string fruit;
    string veggies;
    string beverages;
    string meat;
    string canned;

    shoppingList(string afruit, string aveggies, string abeverages, string ameat, string acanned){
        fruit = afruit;
        veggies = aveggies;
        beverages = abeverages;
        meat = ameat;
        canned = acanned;
    }
};

int main() {
      shoppingList niMama("apple", "brocolli", "Sprite", "Pork", "sardines");
      cout<< niMama.fruit;

return 0;

}
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int tries = 0;
string words[] = {"apple", "banana", "orange", "grape", "melon", "ant", "bridge", "cat", "door", "eagle",  
"flower", "garden", "house", "island", "jungle", "kite", "lamp", "mountain", "night", "ocean",  
"piano", "queen", "river", "sunset", "tree", "umbrella", "valley", "window", "xylophone", "yacht",  
"zebra", "atom", "balloon", "clock", "dragon", "elephant", "forest", "galaxy", "hammer", "igloo",  
"journey", "knight", "library", "mirror", "notebook", "ostrich", "palace", "question", "rocket", "star",  
"turtle", "universe", "volcano", "waterfall", "xenon", "yellow", "zipper", "anchor", "biscuit", "castle",  
"diamond", "echo", "fortune", "golden", "horizon", "illusion", "jigsaw", "kingdom", "lantern", "meadow",  
"nectar", "orbit", "puzzle", "quantum", "rainbow", "silence", "treasure", "unique", "victory", "wonder",  
"xenophobia", "yawn", "zephyr", "ambition", "bravery", "compass", "destiny", "eclipse", "freedom", "gratitude",  
"harmony", "infinity", "justice", "kindness", "legacy", "mystery"};
void game(){
    string word = words[rand() % 95];
    string guess = "";
    for(int i = 0; i < word.length(); i++){
        guess += "_";
    }
    while(tries < 6){
        cout << "Word: " << guess << endl;
        cout << "chance: " << tries<<"/5" << endl;
        cout << "Enter a letter: ";
        char letter;
        cin >> letter;
        cout<<"-------------------"<<endl;
        bool found = false;
        for(int i = 0; i < word.length(); i++){
            if(word[i] == letter){
                guess[i] = letter;
                found = true;
            }
        }
        if(!found){
            tries++;
        }
        if(guess == word){
            cout << "level up!" << endl;
            cout<<"-------------------"<<endl;
            break;
        }
    }
    if(tries == 6){
        cout << "You lose!" << endl;
        cout<<"-------------------"<<endl;
        return;
    }
    game();
}
int main(){
    srand(time(0));
    tries = 0;
    game();
    return 0;
}

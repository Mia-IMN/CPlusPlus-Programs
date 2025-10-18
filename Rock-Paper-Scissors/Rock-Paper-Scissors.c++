#include <iostream>
using namespace std;

int game_play(char p, char c){
    if (p == c) return 0;

    if ((p == 'r' && c == 's') ||
    (p == 'p' && c == 'r') ||
    (p == 's' && c == 'p' )) {
        return 1;
    } else {
        return -1;
    }
}

int main(){
    char user_input;
    char computer_play;

    cin >> user_input;

    
    game_play(user_input, computer_play);
}

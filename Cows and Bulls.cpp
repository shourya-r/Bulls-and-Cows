#include <iostream> 
#include <string> // for string conversion method
using namespace std;

int generate_random_number() {
    srand(time(0));
    int number = (rand() % 8999) + 1000;  // generating number between 1000 and 9999
    return number;
}

int count_bulls(string secret_string, string guess_string, bool secret_digit_used[], bool guess_digit_used[]) {
    
    int bulls = 0;
    
    for (int i = 0; i<4; i++) {
        
        if (secret_string[i] == guess_string[i]) {
            bulls = bulls+1;  // updating the value of bulls and the arrays
            secret_digit_used[i] = true;
            guess_digit_used[i] = true;
        }

    }
    return bulls;
}

int count_cows(string secret_string, string guess_string, bool secret_digit_used[], bool guess_digit_used[]) {
    
    int cows = 0;

    for (int i = 0; i<4; i++) {
        
        for(int j = 0; j<4 ; j++)  { //checking equality for 1 character from guess to every character in secret string 
            if (guess_string[i] == secret_string[j] && secret_digit_used[i]==false){ //only updates if guess digit array has false value i.e that digit has not be used as a bull before
                cows = cows+1;
                guess_digit_used[i] = true;

            }
        }
        
    }
    return cows;
}

int main() {
    
    int number = generate_random_number();
    
    bool secret_digit_used[4] = {false, false, false, false};
    bool guess_digit_used[4]  = {false, false, false, false};
    
    while (true) {
        cout << "Enter Your Number: "<<endl; 
        int guess;
        cin>> guess;  // taking the input from user
        cout<<number<<endl;
        if (guess>=1000 && guess<=9999) {  // checking if the guess is valid
            string number1 = to_string(number); // converting to string
            string guess1 = to_string(guess);
            
            int bulls = count_bulls(guess1,number1,secret_digit_used, guess_digit_used);
            int cows = count_cows(guess1,number1,secret_digit_used, guess_digit_used);
            
            cout<<"Number of Bulls = "<<bulls<<endl;
            cout<<"Number of Cows = "<<cows<<endl;
                
            if (guess1==number1) {
                cout<<"Your Guess is Correct!"<<endl;
                break;
            }
        }
        
        
        else {
            cout<< "Enter a Valid Guess!"<<endl;
            break;
        }
    }
}
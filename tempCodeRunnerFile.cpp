#include <iostream>
#include <stack>
#include <map>
#include <string>

using namespace std;

struct Production {
    char head;
    string body;
};

enum ActionType { SHIFT, REDUCE, ACCEPT, ERROR };

struct Action {
    ActionType type;
    int nextState;
    Production production;

    Action(ActionType type, int nextState = -1, Production production = Production{'\0', ""}) 
        : type(type), nextState(nextState), production(production) {}
};

using ParsingTable = map<pair<int, char>, Action>;

bool parseCLR1(const string& input, const ParsingTable& parsingTable) {
    stack<int> stateStack;
    stack<char> symbolStack;
    stateStack.push(0);
    symbolStack.push('$');
    int inputIndex = 0;

    while (true) {
        int currentState = stateStack.top();
        char currentInput = (inputIndex < input.size()) ? input[inputIndex] : '$';
        
        auto it = parsingTable.find({currentState, currentInput});
        if (it == parsingTable.end()) {
            cout << "Error: No entry in parsing table for state " << currentState << " and input symbol " << currentInput << endl;
            return false;
        }
        
        Action action = it->second;

        switch (action.type) {
            case SHIFT:
                stateStack.push(action.nextState);
                symbolStack.push(currentInput);
                inputIndex++;
                break;
            case REDUCE:
                cout << "Reduce" << endl;
                break;
            case ACCEPT:
                cout << "Accepted" << endl;
                return true;
            case ERROR:
                cout << "Rejected" << endl;
                return false;
        }
    }
}

int main() {
    string input;
    cout << "Input: ";
    cin >> input;

    ParsingTable parsingTable = {
        {{0, 'a'}, {SHIFT, 1}},
        {{1, 'b'}, {SHIFT, 2}},
        {{2, '$'}, {ACCEPT}},
        {{1, 'A'}, {REDUCE, -1, Production{'A', "aB"}}},
        {{2, 'a'}, {REDUCE, -1, Production{'B', "b"}}},
        {{2, 'B'}, {REDUCE, -1, Production{'B', "b"}}},
  
        {{0, 'S'}, {ERROR}},
    };

    if (parseCLR1(input, parsingTable)) {
        cout << "Input string is valid according to the grammar." << endl;
    } else {
        cout << "Input string is invalid according to the grammar." << endl;
    }

    return 0;
}

#include <iostream>
#include <string>
#include <math.h>
#include <bitset>
#include <vector>
#include <cctype>
#include <locale>
#include <deque>
#include <queue>
#include <algorithm>
#include <iomanip>

using namespace std;


vector<string> Calculate(vector<string> journal) {
    vector<string> result;

    for(int i = 0; i < journal.size(); i++){
        if(!result.size()) result.push_back(journal[i]);
        else{
            for(int j = 0; j < result.size(); j++){
                if(result[j]==journal[i]){
                    break;
                }
                else if(j == result.size()-1) {result.push_back(journal[i]); continue;}
            }
        }
    }

    return result;
}

int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Russian");
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<string> FlyJournal;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string city;
        cin >> city;
        FlyJournal.push_back(city);
    }
    FlyJournal = Calculate(FlyJournal);
    for(int i = 0; i < FlyJournal.size(); i++){
        cout << FlyJournal[i] << "\n";
    }
    
    cout << FlyJournal.size();
}

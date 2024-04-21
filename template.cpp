#include <bits/stdc++.h>
using namespace std;

// Types
#define ll long long
#define ld long double
#define TIME_LIMIT 1000
#define us unsigned short
#define ull unsigned long long

template <typename T1>
struct Point{T1 x = 0, y = 0, z = 0;};

// Constants
#define endl "\n"
#define no "no"
#define NO "NO"
#define yes "yes"
#define YES "YES"
enum Directions{U, D, R, L};
char Letters[] = "abcdefghijklmnopqrstuvwxyz";
enum Month{Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
enum Day{Saturday, Sunday, Monday, Tuesday, Wednesday, Thursday, Friday};

// Functions
#define GetVariableName(x) #x
#define CountBits(n) (ll) log2(n) + 1
#define DebugVariable(x) GetVariableName(x) << " = " << x
#define CountDigits(n) (n == 0 ? 1 : (ll int)log10(n) + 1)

ll int GetRandomNumber(ll int a, ll int b) {return a + rand() % (b - a + 1);}
us int GetRandomDigit(us int a = 0, us b = 9) {return a + rand() % (b - a + 1);}
string GetRandomString(ll int count = 26){string result = ""; char alpha[] = "abcdefghijklmnopqrstuvwxyz"; for (int i = 0; i < count; i++) result = result + alpha[GetRandomNumber(0, 25)]; return result;}

ll int RemoveLastNDigits(ll int number, ll int count = 1){return (ll int)number / (ll int)pow(10, count);}
ll int RemoveFirstNDigits(ll int number, ll int count = 1){ll int digitsCount = CountDigits(number); long double fpoints = ((long double)number / pow<ll int>(10, (digitsCount-count))) - (ll int)((ll int)number / (ll int)pow(10, digitsCount-count)); return fpoints * (ll int)pow(10, digitsCount-count);
}

string ConvertToUpper(string text){transform(text.begin(), text.end(), text.begin(), ::toupper); return text;}
string ConvertToLower(string text){transform(text.begin(), text.end(), text.begin(), ::tolower); return text;}
pair<ll int, ll int> SplitOnDecimal(ld number){ll int left = number; ld right = ((ld)number - left) * pow(10, CountDigits(number) - CountDigits(left)); right = stoll(string(to_string(right), 1).substr(2, to_string(right).size()-2)); return {(ll int)left, (ll int)right};}


// new types
template<class T1, class T2, class T3>
struct Triple{public: T1 first; T2 second; T3 third; Triple(T1 f, T2 s, T3 t){first = f; second = s; third = t;} Triple(){}};

void SOLVE(){
    // ll int number, count; cin >> number >> count;
    // cout << RemoveFirstNDigits(number, count) << endl;
    ld x; cin >> x;

}   

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(0); cout.tie(0);

    unsigned long long int t = 1;
    cin >> t;

    while (t--){
        SOLVE();    
    }

    return 0;
}

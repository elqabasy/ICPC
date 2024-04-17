#include <bits/stdc++.h>
using namespace std;

// Types
#define ll long long
#define ull unsigned long long
#define TIME_LIMIT 1000
template <typename Type>
struct Point{Type x = 0, y = 0, z = 0;};

// Constants
#define endl "\n"
enum Month{Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
enum Day{Saturday, Sunday, Monday, Tuesday, Wednesday, Thursday, Friday};

// Functions
#define GetVariableName(x) #x
#define CountBits(n) (ll) log2(n) + 1
#define Debug(x) getVariableName(x) << " = " << x
#define CountDigits(n) (n == 0 ? 1 : (ll int)log10(n) + 1)
#define CalculateTime (float)clock() / CLOCKS_PER_SEC
ll int GetRandomNumber(int a, int b) {return a + rand() % (b - a + 1);}
int GetRandomDigit(int a = 0, int b = 9) {return a + rand() % (b - a + 1);}
string GetRandomString(ll int count = 26){string result = ""; char alpha[] = "abcdefghijklmnopqrstuvwxyz"; for (int i = 0; i < count; i++) result = result + alpha[GetRandomNumber(0, 25)]; return result;}


// SOLVE
void SOLVE(){
    // input

    // process

    // output

}   

int main(){
    // settings
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    // Other

    SOLVE();    
    #ifndef ONLINE_JUDGE
        printf("\n%s(taken = %1.2f ms)\n", (((CalculateTime * 1000) > TIME_LIMIT) ? "TIME_LIMIT" : "TIME"), CalculateTime * 1000);
    #endif
    return 0;
}

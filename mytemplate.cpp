#include<bits/stdc++.h>
#define pb push_back
#define fi first;
#define se second;
#define INTFOR(i,a,b) for(int i=(a);i<(b);++i)
#define LLFOR(i,a,b) for(long long int i=(a);i<(b);++i)
using namespace std;
typedef unsigned long long int ull;
typedef unsigned int ul;
typedef pair<int,int> pii;
typedef double ld;
typedef vector<int> vi;
typedef long long int ll;
typedef string str;
const int MOD = 1e9+7;
const int MX = 2e5+5;
const ll INF = 1e18;
const ld PI = acos((ld)-1);
const int xpianyi[4] = {1,0,-1,0}, ypianyi[4] = {0,1,0,-1}; // for every grid problem!!
ll cdiv(ll a, ll b) { return a/b+((a^b)>0&&a%b); } // divide a by b rounded up
ll fdiv(ll a, ll b) { return a/b-((a^b)<0&&a%b); } // divide a by b rounded down
//For number theory problem
template<class T>inline T gcd(T a,T b){
    int shift=ctz(a|b);
    for(b>>=ctz(b),a>>=ctz(a);a;a-=b,a>>=ctz(a))if(a<b)swap(a,b);
    return b<<shift;
}
template<class T>void exgcd(T a,T b,T&x,T&y) {
    if (!b)return (void) (x = 1, y = 0);
    exgcd(b, a % b, y, x), y -= a / b * x;

}



/*请不要随意修改上方代码
 * 請不要隨意改動上方程式碼
 * Please do not touch anything which is above this comment.
 * veuillez ne rien modifier au-dessus de ce commentaire.
 * Пожалуйста, не трогайте ничего, что находится над этим комментарием
 * Por favor, no toque nada que esté encima de este comentario.
 * Bitte berühren Sie nichts, was über diesem Kommentar steht.
 * このコメントの上にあるものには触れないでください
 * من فضلك لا تلمس أي شيء فوق هذا التعليق
 */

int main()
{
    printf("hello liuliu!");
}

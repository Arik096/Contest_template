///      بسم الله الرحمن الرحيم الذي خلقني    By The Name of Allah, Who Created Me.
///      بسميلة الرحمن الرحمن الرحيم        BISMILLAH AR-RAHMAN AR-RAHEEM.

/*
BAIUST
__________           _____           ___       ____ ___         ________     _________
\______      \       /     _     \       |      |     |        |       \    /    _____/      \__    ___/
 |           |  _/       /     /_\     \     |      |     |        |       /    \_____    \         |        |
 |           |   \      /         |         \   |      |     |        |      /     /                \        |        |
 |______  /       \____|__    /    |___|     |______/     /_______    /        | ___ |
              \/                        \/                                                           \/


EXE_71
__________    ___   ___       ____________       _________          ____
\_     _____/    \    \/     /      \_          _____/      \______     \      /__   |
 |          __)_       \         /         |          __)_                     /         /        |      |
 |                  \     /         \         |                  \                 /         /          |      |
/_______    /   / __/\    \      /_______     /  ______/____/            |___|
                 \/                \_/                       \/  /_____/

*/

/**
	* Arik Md. Isthiaque
	* Rafid Mahboob
	* Mamun Ahmed
**/

#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long double ldb;
typedef long long ll;
typedef stringstream SS;
typedef vector<string> VS;
typedef vector<ll> VI;
typedef vector<char> VC;
typedef map<string, string> MSS;
typedef map <ll,string> MIS;
typedef map <char,ll> MCI;
typedef map <string,ll> MSI;
typedef map <ll,ll> MII;
typedef pair<int, int> pii;

#define sf                        scanf
#define pf                        printf

#define cin1                      cin>>a
#define cin2                     cin>>a>>b
#define cin3                      cin>>a>>b>>c;
#define cin4                      cin>>a>>b>>c>>d;

#define sf1ll(a)                  scanf("%I64d", &a)
#define sf2ll(a,b)               scanf("%I64d %I64d", &a, &b)
#define sf3ll(a,b,c)            scanf("%I64d %I64d %I64d", &a, &b, &c)
#define sf4ll(a,b,c, d)         scanf("%I64d %I64d %I64d %I64d", &a, &b, &c, &d)

#define READ                    freopen("input.txt", "r", stdin);
#define WRITE                 freopen("output.txt", "w", stdout);

#define gc                          getchar
#define pc                          putchar
#define mp                         make_pair
#define pb                          push_back
#define PI 	                       3.1415926535897932384626433832795l
#define Pi                          acos(-1.0)
#define Ignore	             cin.ignore();
#define mem(n,i)                memset(n,i,sizeof n);
#define square(n)               n*n
#define cube(n)                  n*n*n
#define F                           first
#define S                           second
#define newline                  cout<<endl
#define SS                         stringstream
#define MOD                     1000000007
#define INF                      2147483647
#define SIZE                    2000001
#define _cin                      ios_base::sync_with_stdio(0);  cin.tie(0);
#define space                    " "
#define StringToInt         if ( ! (istringstream(s) >> n) ) n = 0;
#define zero                                return 0


template <typename T> inline T ItoS(T n){SS a; a<<n;return a.str();}
template <typename T> inline T TrailingZeros(T  n){ll cnt = 0;for(ll i=5; n/i>=1; i*=5) cnt += n/i;return cnt;}
template <typename T> inline T StoI(T s){ll sum=0;for(ll i=0; i<Sz(s); i++){s[i]-='0';sum=sum*10+s[i];}return sum;}
template <typename T> inline T binary_decimal(T n){ll decimal=0, i=0, rem;while (n!=0){rem = n%10;n/=10;decimal += rem*pow(2,i);++i;}return decimal;}
template <typename T> inline T LCM(T a,T b){return (a*b)/GCD(a,b);}
template <typename T> inline T maxi(T x, T y) { if(x>y) return x; else return y;}
template <typename T> inline T maxi(T x, T y,T z) { return maxi(maxi(x,y),z);}
template <typename T> inline T mini(T x, T y) { if(x<y) return x; else return y;}
template <typename T> inline T mini(T x, T y,T z) { return mini(mini(x,y),z);}
template <typename T> inline T GCD(T a,T b)   {ll t;while(a){t = a;a = b%a;b = t;}return b;}
template <typename T> inline T Pow(T base,T exp){ll result = 1;while (exp){if(exp&1)result*=base;exp>>=1;base*=base;}return result;}
template <typename T> inline T Mulmod(T a, T b, T c){ull x = 0,y = a%c;while(b>0){if(b&1) x = (x+y)%c;y = (y<<1)%c;b >>= 1;}return x;}
template <typename T> inline T Pow(T base,T exp,T mod){ull x = 1, y = base;while(exp>0){if(exp&1) x = Mulmod(x,y,mod);y = Mulmod(y,y,mod);exp >>= 1;}return x;}
template <typename T> inline T modulo(T a,T b,T c){ull x = 1 , y = a%c ;while( b>0 ){if(b%2) x = Mulmod(x,y,c) ;y=Mulmod(y,y,c);b/=2;}return x%c ;}
template <typename T> inline T BigMod(T a, T b, T m){if(!b)return 1;ll x=BigMod(a, b/2, m);x=(x*x)%m;if(b%2)x=(x*a)%m;return x;}
template <typename T> inline T EGCD(T a,T b,T &x,T &y){if(a == 0) {x = 0;y = 1;return b;}T x1, y1;T d = EGCD(b % a, a, x1, y1);x = y1 - (b / a) * x1;y = x1;return d;}
template < class T > string converter( T n ){SS x;x << n;return x.str();}

/****************** Prime Generator **********************/

const int N=1e7+10; int prime[20000010]; bool isprime[N]; int nprime;
template <typename T> void Sieve(T a) {nprime = 0;memset(isprime,true,sizeof(isprime));isprime[1]=false;for(int i=2;i<N;i++){if(isprime[i]){prime[nprime++]=i;for(int j=2;i*j<N;j++)isprime[i*j]=false;}}}
template <typename T> bool miller_rabin(T p, T itt) {if(p<2) return 0 ;if(p==2) return 1;if(p%2==0) return 0 ;ull s = p-1 ;while(s%2==0) s/=2;for(ll i=1;i<=itt;i++) {ull a = rand() % (p-1)+1 , temp = s ;ull mod = modulo(a,temp,(ull)p);while(mod!=1 and mod!=p-1 and temp!=p-1){mod = Mulmod(mod,mod,(ull)p);temp*=2;}if(temp%2==0 and mod!=p-1) return false ;}return true;}
template <typename T> inline T PrimeFactors(T n){ll cnt=0,sum=1;for(int i=0; prime[i]*prime[i]<=n and i<nprime;i++){cnt=0;while(n%prime[i]==0){cnt++;n/=prime[i];}sum*=(cnt+1);}if(n>1)sum*=2;return sum;}


/********************** Faster I/O *********************/

template <typename T> inline T scan(T &n) { n=0; bool negative=0; char c=gc(); while(c<'0'||c>'9') {if(c=='-') negative=1; c=gc();} while(c>='0'&&c<='9'){n=n*10+c-48;c=gc();} if(negative) n=~(n-1);}
template <typename T> inline T scan(T a,T b){scan(a);scan(b);}
template <typename T> inline T scan(T a,T b,T c){scan(a);scan(b);scan(c);}
template <typename T> inline T scan(T a,T b,T c,T d){scan(a);scan(b);scan(c);scan(d);}
template <typename T> void print(T n){if(n<0){pc('-');n=-n;}if(!n){pc('0');pc('\n');return;}char buff[12];int len=0;while(n) buff[len++]=n%10+48,n/=10;for(int i=len-1;i>=0;i--) pc(buff[i]);pc('\n');}
template <typename T> void print(T a, T b){print(a);print(b);}
template <typename T> void print(T a, T b, T c){print(a);print(b);print(c);}
template <typename T> void Print(T n){if(n<0){pc('-');n=-n;}if(!n){pc('0');return;}char buff[12];int len=0;while(n) buff[len++]=n%10+48,n/=10;for(int i=len-1;i>=0;i--) pc(buff[i]);}

/****************** Geometry *****************/

template <typename T> inline T PointDistanceHorVer(T x1,T y1,T x2, T y2) {return abs(x1-x2)+abs(y1-y2);}
template <typename T> inline T PointDistanceDiagonally(T x1,T y1,T x2, T y2) {return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));}
template <typename T> inline T PointDistanceMinimum(T x1,T y1,T x2, T y2) {return mini( PointDistanceHorVer(x1,y1,x2,y2), PointDistanceDiagonally(x1,y1,x2,y2) );}
template <typename T> inline T PointDistance3D(T x1,T y1,T z1,T x2,T y2,T z2) {return sqrt(square(x2-x1)+square(y2-y1)+square(z2-z1));}

template <typename T> inline T Cube(T a){return a*a*a;}
template <typename T> inline T RectengularPrism(T a,T b,T c){return a*b*c;}
template <typename T> inline T Pyramid(T base, T height){return (1/3)*base*height;}
template <typename T> inline T Ellipsoid(T r1,T r2,T r3) {return (4/3)*PI*r1*r2*r3;}
template <typename T> inline T IrregualarPrism(T base, T height){return base*height;}
template <typename T> inline T Sphere(T radius){ return (4/3)*PI*radius*radius*radius;}
template <typename T> inline T CylinderB(T base, T height){return base*height;} // base and height
template <typename T> inline T CylinderR(T radius, T height){return PI*radius*radius*height;} // radius and height
template <typename T> inline T Cone (T radius,T base, T height){return (1/3)*PI*radius*radius*height;}

/**>>>>>>>>>>>>>>>>>>> END <<<<<<<<<<<<<<<<<<**/

/// Debug Start
template<class T1> void deb(T1 e1)
{
    cout << e1 << endl;
}
template<class T1,class T2> void deb(T1 e1, T2 e2)
{
    cout << e1 << space << e2 << endl;
}
template<class T1,class T2,class T3> void deb(T1 e1, T2 e2, T3 e3)
{
    cout << e1 << space << e2 << space << e3 << endl;
}
template<class T1,class T2,class T3,class T4> void deb(T1 e1, T2 e2, T3 e3, T4 e4)
{
    cout << e1 << space << e2 << space << e3 << space << e4 << endl;
}
template<class T1,class T2,class T3,class T4,class T5> void deb(T1 e1, T2 e2, T3 e3, T4 e4, T5 e5)
{
    cout << e1 << space << e2 << space << e3 << space << e4 << space << e5 << endl;
}
template<class T1,class T2,class T3,class T4,class T5,class T6> void deb(T1 e1, T2 e2, T3 e3, T4 e4 ,T5 e5, T6 e6)
{
    cout << e1 << space << e2 << space << e3 << space << e4 << space << e5 << space << e6 << endl;
}
/// Debug End


int main()
{
          string s="BAIUST_Executioners_71";
          cout<<s;
          newline;
          zero;
}

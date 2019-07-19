#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
using namespace std; 


inline bool EQ(double a, double b) { return fabs(a-b) < 1e-9; }
const int INF = 1<<29;
typedef long long ll;
inline int two(int n) { return 1 << n; }
inline int test(int n, int b) { return (n>>b)&1; }
inline void set_bit(int & n, int b) { n |= two(b); }
inline void unset_bit(int & n, int b) { n &= ~two(b); }
inline int last_bit(int n) { return n & (-n); }
inline int ones(int n) { int res = 0; while(n && ++res) n-=n&(-n); return res; }

#define DEBUG(X)      std::cout<<#X<<" = "<<X<<std::endl;
#define PRINT(C,WAY)    do\
                        {\
                            cout<<setw(10)<<#C<<" : \n";\
                            for(auto&& i : C) {\
                                WAY;\
                            }\
                            cout<<endl;\
                        } while (0);
#define ALL(C)			  (C).begin(), (C).end()
#define	PRESENT(C,X)	((C).find() != (C).end())

#define BENCHMARK(f)	do{						\
                        	cout<<#f<<" = ";	\
                        	benchmark(f);		\
                    	}while(0);

const auto benchmark = [](function<void(void)> f)
{
  std::chrono::steady_clock::time_point  start = std::chrono::steady_clock::now();
  f();
  std::cout<<std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now() - start).count()<<" microseconds\n";
};



ll get_no_of_query()
{
    ll Q;
    cin >> Q;
    return Q;
}

template <typename T>
// vector<T> get_array(T Q)
tuple<vector<T>, T, T> get_array(T Q)
{
    vector<T> res(Q);
    T max_val = numeric_limits<T>::min();
    T min_val = numeric_limits<T>::max();

    for (T i = 0; i < Q; i++)
    {
        T temp;
        cin >> temp;
        res[i] = temp;
        max_val = max(temp, max_val);
        min_val = min(temp, min_val);
    }

    // return res;
    return make_tuple(res, min_val, max_val);
}

int main()
{
    auto Q = get_no_of_query();
    auto input = get_array(Q);
    auto arr = get<0>(input);
    auto min_val = get<1>(input);
    auto max_val = get<2>(input);

    return 0;
}


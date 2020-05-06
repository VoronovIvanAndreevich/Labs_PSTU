#include <iostream>
using namespace std;
class Pair{
private:
    int first;
    double second;
public:
    Pair(void);
    Pair(int x, double y);
    Pair(const Pair& tmp);
    ~Pair(void);
    Pair& operator = (const Pair& tmp);
    Pair& operator ++ (void);
    Pair operator ++ (int);
    bool operator > (const Pair& tmp);
    bool operator < (const Pair& tmp);
    friend istream& operator >> (istream& in, Pair& tmp);
    friend ostream& operator << (ostream& out, const Pair& tmp);
};

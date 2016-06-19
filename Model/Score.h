#ifndef _SCORE_
#define _SCORE_

#include <istream>

class Score {
public:
    friend std::ostream& operator<< (std::ostream&, const Score&);
    Score& operator= ( const Score& );
    bool operator== ( const Score& ) const;

    Score(int);
    int toInt() const;
private:
    int score;
};

// Operators

Score operator+(const Score &a, const Score &b);
Score operator-(const Score &a, const Score &b);

bool operator== (const Score &a, const Score &b);
bool operator!= (const Score &a, const Score &b);
bool operator< (const Score &a, const Score &b);
bool operator<= (const Score &a, const Score &b);
bool operator> (const Score &a, const Score &b);
bool operator>= (const Score &a, const Score &b);

#endif

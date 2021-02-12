#ifndef Series_Included
#define Series_Included

#include <vector>
#include <string>

template <class T>
class Series{
    public:
        
        std::vector<T> elems;
        
        Series (const std::vector<T> &data);
        ~Series();
        int len() const;
        T sum() const;

};

#endif

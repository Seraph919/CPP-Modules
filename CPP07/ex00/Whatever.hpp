#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>

class Whatever{
    Whatever();
    Whatever(const &Whatever cp);
    Whatever &operator=(const &Whatever cp);
    ~Whatever();
public:
    static void swap(T &a, T &b);
    static T min(T &a, T &b);
    static T max(T &a, T &b);
};

#endif
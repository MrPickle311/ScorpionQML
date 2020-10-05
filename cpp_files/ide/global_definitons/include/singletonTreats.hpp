#ifndef SINGLETONTREATS_HPP
#define SINGLETONTREATS_HPP

template <class T>
class Singleton
{
public:
    static T& get()
    {
        static T singleton{};
        return singleton;
    }
};



#endif // SINGLETONTREATS_HPP

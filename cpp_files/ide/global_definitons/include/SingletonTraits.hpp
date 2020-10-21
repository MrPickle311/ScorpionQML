#pragma once

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

#ifndef TRIAD_HPP
#define TRIAD_HPP

#include <iostream>
#include <string>

template<typename T, typename U, typename Z>
class Triad{
private: 
    T m_x{};
    U m_y{};
    Z m_z{};
public:
    Triad(const T& x, const U& y, const Z& z);

    // Print
    void print() const;

    // Getters
    const T& first() const  {return m_x;}
    const U& second() const {return m_y;}
    const Z& third() const  {return m_z;}
};


template<typename T, typename U, typename Z>
Triad<T, U, Z>::Triad(const T& x, const U& y, const Z& z): m_x{x}, m_y{y}, m_z{z}{}

template<typename T, typename U, typename Z>
void Triad<T, U, Z>::print() const{
    std::cout << "[" << m_x << ", "<< m_y << ", " << m_z << "]";
}

#endif
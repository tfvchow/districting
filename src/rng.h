//
// Created by Shiba on 2022-05-28.
//

#ifndef _RNG_H
#define _RNG_H


class SimpleRNG {
public:
    unsigned int m_w = 521288629;
    unsigned int m_z = 362436069;
    void SetSeed(unsigned int u, unsigned int v);
    void SetSeed(unsigned int u);
    double GetUniform();

private:
    unsigned int GetUint();
};


#endif //_RNG_H

//
// Created by Shiba on 2022-05-28.
// Source:
// https://www.codeproject.com/Articles/25172/Simple-Random-Number-Generation

#include "rng.h"

void SimpleRNG::SetSeed(unsigned int u, unsigned int v) {
    if (u != 0) m_w = u;
    if (v != 0) m_z = v;
}

void SimpleRNG::SetSeed(unsigned int u) {
    m_w = u;
}

double SimpleRNG::GetUniform() {
    unsigned int u = GetUint();
    return (u + 1.0) * 2.328306435454494e-10;
}

unsigned int SimpleRNG::GetUint() {
    m_z = 36969 * (m_z & 65535) + (m_z >> 16);
    m_w = 18000 * (m_w & 65535) + (m_w >> 16);
    return (m_z << 16) + m_w;
}

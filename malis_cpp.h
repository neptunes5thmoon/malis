#ifndef MALIS_CPP_H
#define MALIS_CPP_H

void connected_components_cpp(const int nVert,
               const int nEdge, const int* node1, const int* node2,
               int* seg);

void malis_loss_cpp(const int nVert, const int* seg,
               const int nEdge, const int* node1, const int* node2, const float* edgeWeight,
               const int pos,
               int* nPairPerEdge);

#endif
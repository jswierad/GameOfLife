//
// Created by kamre on 03.03.2017.
//

#ifndef GAMEOFLIFE_DATA_H
#define GAMEOFLIFE_DATA_H

typedef struct {
    short **matrix;
    short edgeType;
    int x;
    int y;
}*gen;

typedef struct {
    short edgeType;
    short isRandom;
    int xSize;
    int ySize;
    int gifAfterYears;
}*conf;

gen createMatrix(int x, int y, short type);

void clearMatrix(gen matrix);

#endif //GAMEOFLIFE_DATA_H
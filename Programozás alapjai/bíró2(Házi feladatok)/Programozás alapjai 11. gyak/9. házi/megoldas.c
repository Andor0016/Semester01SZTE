#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct{
    int mountain;
    int water;
    int sandStorm;
    int mapHeight;
    int mapWidth;
    char** map;
}Map;

bool isSafe(Map terkep, int x, int y)
{
    bool isThereMountain = false;
    bool isThereWater = false;
    bool isSandStormFarAway = true;
    for(int i=0; i<terkep.mountain; i++)
    {
        for(int j=0; j<terkep.mountain; j++)
        {
            if((( terkep.map[i+x][j+y] == 'A' && i+x < terkep.mapHeight && j+y < terkep.mapWidth )
                || ( terkep.map[i+x][y-j] == 'A' && i+x < terkep.mapHeight && y-j >= 0)
                || ( terkep.map[x-i][y+j] == 'A' && x-i >= 0 && y+j < terkep.mapWidth )
                || ( terkep.map[x-i][y-j] == 'A' && x-i >= 0 && y-j >= 0 )
                || ( terkep.map[x+i][y] == 'A' && x+i < terkep.mapHeight )
                || ( terkep.map[x-i][y] == 'A' && x-i >= 0 )
                || ( terkep.map[x][y+j] == 'A' && y+j < terkep.mapWidth )
                || ( terkep.map[x][y+j] == 'A' && y-j >= 0 ))
                && (i != 0 && j != 0))
            {
                isThereMountain = true;
                goto mountainFound;
            }
        }
    }

    if(isThereMountain == false)
        return false;

    mountainFound:
    for(int i=0; i<terkep.water; i++)
    {
        for(int j=0; j<terkep.water; j++)
        {
            if((( terkep.map[i+x][j+y] == '~' && i+x < terkep.mapHeight && j+y < terkep.mapWidth )
                || ( terkep.map[i+x][y-j] == '~' && i+x < terkep.mapHeight && y-j >= 0)
                || ( terkep.map[x-i][y+j] == '~' && x-i >= 0 && y+j < terkep.mapWidth )
                || ( terkep.map[x-i][y-j] == '~' && x-i >= 0 && y-j >= 0 )
                || ( terkep.map[x+i][y] == '~' && x+i < terkep.mapHeight )
                || ( terkep.map[x-i][y] == '~' && x-i >= 0 )
                || ( terkep.map[x][y+j] == '~' && y+j < terkep.mapWidth )
                || ( terkep.map[x][y+j] == '~' && y-j >= 0 ))
               && (i != 0 && j != 0))
            {
                isThereWater = true;
                goto waterFound;
            }
        }
    }

    if(isThereWater == false)
        return false;

    waterFound:
    for(int i=0; i<terkep.sandStorm; i++)
    {
        for(int j=0; j<terkep.sandStorm; j++)
        {
            if((( terkep.map[i+x][j+y] == 'X' && i+x < terkep.mapHeight && j+y < terkep.mapWidth )
                || ( terkep.map[i+x][y-j] == 'X' && i+x < terkep.mapHeight && y-j >= 0)
                || ( terkep.map[x-i][y+j] == 'X' && x-i >= 0 && y+j < terkep.mapWidth )
                || ( terkep.map[x-i][y-j] == 'X' && x-i >= 0 && y-j >= 0 )
                || ( terkep.map[x+i][y] == 'X' && x+i < terkep.mapHeight )
                || ( terkep.map[x-i][y] == 'X' && x-i >= 0 )
                || ( terkep.map[x][y+j] == 'X' && y+j < terkep.mapWidth )
                || ( terkep.map[x][y+j] == 'X' && y-j >= 0 ))
               && (i != 0 && j != 0))
            {
                isSandStormFarAway = false;
            }
        }
    }
    if(isSandStormFarAway == false)
        return false;

    return true;
}

int main() {
    int numOfOkCells = 0;
    Map map;
    FILE *input = fopen("be.txt", "r");
    FILE *output = fopen("ki.txt", "w");
    fscanf(input, "%d %d %d ", &map.mountain, &map.water, &map.sandStorm);
    fscanf(input, "%d %d ", &map.mapHeight, &map.mapWidth);
    map.map = malloc(map.mapHeight * sizeof(char *));
    for(int i=0; i<map.mapHeight; i++)
    {
        map.map[i] = malloc(map.mapWidth * sizeof(char));
    }

    for(int i=0; i<map.mapHeight; i++)
    {
        for(int j=0; j<map.mapWidth; j++)
        {
            fscanf(input, "%c ", &map.map[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<map.mapHeight; i++)
    {
        for(int j=0; j<map.mapWidth; j++)
        {
            if(map.map[i][j] == '0' && isSafe(map, i, j))
                numOfOkCells++;
        }
    }

    fprintf(output, "%d\n", numOfOkCells);

    fclose(input);
    fclose(output);
    return 0;
}

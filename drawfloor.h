#include <iostream>
#include <math.h>
using namespace std;


const int floorwidth = 79;
const int floorheight = 30;
floorArray [floorwidth][floorheight];

void drawFloor (floorArray[][floorheight]) {
    for (i=0, i<floorwidth, i++) {
        for (k=0, i<floorheight, k++) {
            //establish outside bounds
            if (i = 0 or i = 79) {
                floorArray[i][k] = floorTiles.vertical_bound;
                continue;
            }
            if (k = 0 or k = 30) {
                floorArray[i][k] = floorTiles.horizontal_bound;
                continue;
            }
            int rand = rand();
            // generate a door under some random condition
            // ensure that there are only a certain number of doors
            // link these doors to separate floors
            if (rand = SOMENUMBER ) {
                floorArray[i][k] = floorTiles.door;
            }
            // add check for not wall. e
            else {
                floorArray[i][k] = floorTiles.walkable;
            }
            cout << floorArray[i][k];
        }
    }
}



enum floorTiles {
    walkable=".",
    door="",
    stair="\ ",
    ladder = "",
    vertical_bound = "|";
    horizontal_bound = "-";
}
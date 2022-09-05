#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct point
{
    int x;
    int y;
};

struct distance
{
    int xx;
    int yy;
    float d;
};

float euclidean_distance(int x1, int y1, int x2, int y2){
    return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}

int main(){

    int n = 6; // no. of sets
    int m = 6; //randomly generated points

    struct point *pnt[n][m];// = (struct point *) malloc(m*sizeof(struct point));
    struct point *temp;

    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            temp = malloc(sizeof(struct point));
            temp->x = rand()%101;
            temp->y = rand()%101;
            pnt[i][j]=temp;
        }
    }

    int new_x = rand()%101;
    int new_y = rand()%101;


    struct distance *dist[n][m];
    struct distance *dt;

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            dt = malloc(sizeof(struct distance));
            dt->xx = pnt[i][j]->x;
            dt->yy = pnt[i][j]->y;
            dt->d = euclidean_distance(new_x, pnt[i][j]->x, new_y, pnt[i][j]->y);
            dist[i][j] = dt;
        }
    }

    float min_dist = 99999;
    int set = 0;

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(min_dist > dist[i][j]->d){
                min_dist = dist[i][j]->d;
                set = i+1;
            }
        }
    }

    printf("New random (%d, %d) belongs to Set (%d) with euclidean distance (%f)", new_x, new_y, set, min_dist);

    return 0;
}

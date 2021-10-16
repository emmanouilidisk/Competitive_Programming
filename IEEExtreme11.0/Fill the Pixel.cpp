#include<iostream>
#include <cstring>
using namespace std;
int t,M,N;
char screen1[1000][1000];
char screen2[1000][1000];
char screen3[1000][1000];
// A recursive function to replace previous color 'prevC' at  '(x, y)'
// and all surrounding pixels of (x, y) with new color 'newC' and
void floodFillUtil1(int x, int y, int prevC, int newC)
{
    // Base cases
    if (x < 0 || x >= M || y < 0 || y >= N)
        return;
    if (screen1[x][y] != prevC)
        return;
    if (screen1[x][y] == newC)
        return;

    // Replace the color at (x, y)
    screen1[x][y] = newC;

    // Recur for north, east, south and west
    floodFillUtil1(x+1, y, prevC, newC);
    floodFillUtil1(x-1, y, prevC, newC);
    floodFillUtil1(x, y+1, prevC, newC);
    floodFillUtil1(x, y-1, prevC, newC);
}

void floodFillUtil2(int x, int y, int prevC, int newC)
{
    // Base cases
    if (x < 0 || x >= M || y < 0 || y >= N)
        return;
    if (screen2[x][y] != prevC)
        return;
    if (screen2[x][y] == newC)
        return;

    // Replace the color at (x, y)
    screen2[x][y] = newC;

    // Recur for north, east, south and west
    floodFillUtil2(x + 1, y + 1, prevC, newC);
    floodFillUtil2(x - 1, y - 1, prevC, newC);
    floodFillUtil2(x - 1, y + 1, prevC, newC);
    floodFillUtil2(x + 1, y - 1, prevC, newC);
}


void floodFillUtil3(int x, int y, int prevC, int newC)
{
    // Base cases
    if (x < 0 || x >= M || y < 0 || y >= N)
        return;
    if (screen3[x][y] != prevC)
        return;
    if (screen3[x][y] == newC)
        return;

    // Replace the color at (x, y)
    screen3[x][y] = newC;

    // Recur for north, east, south and west
    floodFillUtil3(x - 1, y - 1, prevC, newC);
    floodFillUtil3(x - 1, y, prevC, newC);
    floodFillUtil3(x - 1, y + 1, prevC, newC);
    floodFillUtil3(x, y - 1, prevC, newC);
    floodFillUtil3(x, y + 1, prevC, newC);
    floodFillUtil3(x + 1, y - 1, prevC, newC);
    floodFillUtil3(x + 1, y, prevC, newC);
    floodFillUtil3(x + 1, y + 1, prevC, newC);
}

int main(){

cin >> t;
for (int i = 0; i <t; i++){
    string str;
    int c1 =0;
    int c2 = 0;
    int c3 = 0;
    cin >> N >> M;
    for (int j = 0; j<M; j++){
        cin >> str;
        for (int k = 0; k<N; k++){
            screen1[j][k] = str.at(k);
        }
    }
    memcpy (screen2, screen1, 1000*1000*sizeof(char));
    memcpy (screen3, screen1, 1000*1000*sizeof(char));

    for (int row =0; row < M; row++){
        for (int col =0; col < N; col++){
            if (screen1[row][col] == '1'){
                floodFillUtil1(row, col, '1', '0');
                c1 += 1;
            }
            if (screen2[row][col] == '1'){
                floodFillUtil2(row, col, '1', '0');
                c2 += 1;
            }
            if (screen3[row][col] == '1'){
                floodFillUtil3(row, col, '1', '0');
                c3 += 1;
          }
        }
    }
    cout << c1 << ' '<< c2 << ' ' << c3 << '\n';
}

}

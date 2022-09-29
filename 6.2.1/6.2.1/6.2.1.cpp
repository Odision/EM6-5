#include <iostream>
#include <ctime>
#include <cmath>
#include <vector> 
using namespace std;



class Vector {
private:
    int y = 0;
    int x = 0;

    vector<vector<int>> vect;

    int randomRes(int min, int max) {
        if (min > max) {
            int c = min;
            min = max;
            max = c;
        }

        return min + rand() % (max - min + 1);
    }

public:
    Vector(int x, int y) {
        this->x = x;
        this->y = y;
    }

    vector<vector<int>> fillVector(int min, int max) {

        for (int i = 0; i < this->x; i++)
        {
            this->vect.push_back(vector<int>());
            for (int j = 0; j < this->y; j++)
            {
                this->vect[i].push_back(this->randomRes(min, max));
            }
        }

        return this->vect;
    }
    int getSize() {
        vect.size();
    }
    int getMin(int max) {
        int c = max + 1;
        for (int i = 0; i < this->x; i++) {
            for (int j = 0; j < this->y; j++) {
                if (c > this->vect[i][j]) {
                    c = this->vect[i][j];
                }
            }

        }
        cout << c << endl;
        return c;
    }


    int getMax() {
        int c = 0;
        for (int i = 0; i < this->x; i++) {
            for (int j = 0; j < this->y; j++) {
                if (c < this->vect[i][j]) {
                    c = this->vect[i][j];

                }
            }

        }
        cout << c << endl;
        return c;
    }
    bool find(int number) {
        for (int i = 0; i < this->x; i++) {
            for (int j = 0; j < this->y; j++) {
                if (number == this->vect[i][j]) {
                    return true;
                }
            }

        }
        return false;
    };


    void showVector() {
        for (int i = 0; i < this->x; i++) {
            for (int j = 0; j < this->y; j++) {
                cout << this->vect[i][j] << " ";
            }
            cout << endl;
        }
    }
};


int main() {
    int x = 0;
    int y = 0;
    int min = 0;
    int max = 0;
    int number = 0;
    cout << "Size X: " << endl;
    cin >> x;
    cout << "Size Y: " << endl;
    cin >> y;

    Vector vectr(x, y);

    cout << "Min: " << endl;
    cin >> min;
    cout << "Max: " << endl;
    cin >> max;
    cout << "Your number" << endl;
    cin >> number;
    vectr.fillVector(min, max);


    vectr.showVector();
    vectr.getMax();
    vectr.getMin();
}

class Vector {
private:
    int y = 0;
    int x = 0;

    vector<vector<int>> vect;

    int randomRes(int min, int max) {
        if (min > max) {
            swap(min, max);
        }

        return min + rand() % (max - min + 1);
    }


public:
    Vector(int x, int y) {
        this->x = x;
        this->y = y;
    }

    vector<vector<int>> fillVector(int min, int max) {

        for (int i = 0; i < this->x; i++)
        {
            this->vect.push_back(vector<int>());
            for (int j = 0; j < this->y; j++)
            {
                this->vect[i].push_back(this->randomRes(min, max));
            }
        }

        return this->vect;
    }

    int getSize() {
        int size = 0;

        for (int i = 0; i < this->vect.size(); i++)
        {
            size += this->vect[i].size();
        }

        return size;
    }

    void showMin() {
        cout << this->getMin() << endl;
    }

    int getMin() {
        int c = 0;
        for (int i = 0; i < this->x; i++) {
            for (int j = 0; j < this->y; j++) {
                if (i == 0 && j == 0) {
                    c = this->vect[i][j];
                }

                if (c > this->vect[i][j]) {
                    c = this->vect[i][j];
                }
            }
        }

        return c;
    }


    int getMax() {
        int c = 0;
        for (int i = 0; i < this->x; i++) {
            for (int j = 0; j < this->y; j++) {
                if (c < this->vect[i][j]) {
                    c = this->vect[i][j];

                }
            }

        }
        cout << c << endl;
        return c;
    }
    bool find(int number) {
        for (int i = 0; i < this->x; i++) {
            for (int j = 0; j < this->y; j++) {
                if (number == this->vect[i][j]) {
                    return true;
                }
            }

        }
        return false;
    };


    void showVector() {
        for (int i = 0; i < this->x; i++) {
            for (int j = 0; j < this->y; j++) {
                cout << this->vect[i][j] << " ";
            }
            cout << endl;
        }
    }
};



int main() {
    srand(time(0));
    int x = 0;
    int y = 0;
    int min = 0;
    int max = 0;
    int number = 0;
    cout << "Size X: " << endl;
    cin >> x;
    cout << "Size Y: " << endl;
    cin >> y;

    Vector vectr(x, y);



    cout << "Min: " << endl;
    cin >> min;
    cout << "Max: " << endl;
    cin >> max;
    cout << "Your number" << endl;
    cin >> number;
    vectr.fillVector(min, max);


    vectr.showVector();
    vectr.getMax();
    vectr.getMin();




}

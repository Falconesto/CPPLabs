//
// Created by Александр on 03.06.2020.
//

#include <cstdlib>

#include <iostream>
#include <fstream>

using namespace std;
ofstream output("Cube.out");
ifstream input("Cube.in");

struct Front {
public:
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
};

struct Back {
public:
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
};

struct Left {
public:
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
};

struct Right {
public:
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
};

struct Up {
public:
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
};

struct Down {
public:
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
};

Right r;
Left l;
Up u;
Down d;
Back b;
Front f;
/// R - поворот правой грани , U - поворот верхней грани , l - левой , F - передней , D - нижней , B - задней , добавка second  показывает ,
///  что повоорот осуществлется , против часовой стрелки

void Right() {

    int at, bt, ct, dt, ft, gt, ht, it;

    at = r.a;
    bt = r.b;
    ct = r.c;
    dt = r.d;
    ft = r.f;
    gt = r.g;
    ht = r.h;
    it = r.i;

    r.a = gt;
    r.b = dt;
    r.c = at;
    r.d = ht;
    r.f = bt;
    r.g = it;
    r.h = ft;
    r.i = ct;

    int temp1 = u.c;
    u.c = f.c;
    int temp2 = b.c;
    b.c = temp1;
    temp1 = d.c;
    d.c = temp2;
    f.c = temp1;

    temp1 = u.f;
    u.f = f.f;
    temp2 = b.f;
    b.f = temp1;
    temp1 = d.f;
    d.f = temp2;
    f.f = temp1;

    temp1 = u.i;
    u.i = f.i;
    temp2 = b.i;
    b.i = temp1;
    temp1 = d.i;
    d.i = temp2;
    f.i = temp1;
    output << "R" << endl;
}

void RightSecond() { // против часовой

    int at, bt, ct, dt, ft, gt, ht, it;

    at = r.a;
    bt = r.b;
    ct = r.c;
    dt = r.d;
    ft = r.f;
    gt = r.g;
    ht = r.h;
    it = r.i;

    r.a = ct;
    r.b = ft;
    r.c = it;
    r.d = bt;
    r.f = ht;
    r.g = at;
    r.h = dt;
    r.i = gt;

    int temp1 = u.c;
    u.c = b.c;
    int temp2 = f.c;
    f.c = temp1;
    temp1 = d.c;
    d.c = temp2;
    b.c = temp1;

    temp1 = u.f;
    u.f = b.f;
    temp2 = f.f;
    f.f = temp1;
    temp1 = d.f;
    d.f = temp2;
    b.f = temp1;

    temp1 = u.i;
    u.i = b.i;
    temp2 = f.i;
    f.i = temp1;
    temp1 = d.i;
    d.i = temp2;
    b.i = temp1;
    output << "R'" << endl;
}

void LeftSecond() { // против часовой

    int at, bt, ct, dt, ft, gt, ht, it;

    at = l.a;
    bt = l.b;
    ct = l.c;
    dt = l.d;
    ft = l.f;
    gt = l.g;
    ht = l.h;
    it = l.i;

    l.a = ct;
    l.b = ft;
    l.c = it;
    l.d = bt;
    l.f = ht;
    l.g = at;
    l.h = dt;
    l.i = gt;

    int temp1 = u.a;
    u.a = f.a;
    int temp2 = b.a;
    b.a = temp1;
    temp1 = d.a;
    d.a = temp2;
    f.a = temp1;

    temp1 = u.d;
    u.d = f.d;
    temp2 = b.d;
    b.d = temp1;
    temp1 = d.d;
    d.d = temp2;
    f.d = temp1;

    temp1 = u.g;
    u.g = f.g;
    temp2 = b.g;
    b.g = temp1;
    temp1 = d.g;
    d.g = temp2;
    f.g = temp1;

    output << "L'" << endl;
}

void Left() {
    int at, bt, ct, dt, ft, gt, ht, it;

    at = l.a;
    bt = l.b;
    ct = l.c;
    dt = l.d;
    ft = l.f;
    gt = l.g;
    ht = l.h;
    it = l.i;

    l.a = gt;
    l.b = dt;
    l.c = at;
    l.d = ht;
    l.f = bt;
    l.g = it;
    l.h = ft;
    l.i = ct;

    int temp1 = u.a;
    u.a = b.a;
    int temp2 = f.a;
    f.a = temp1;
    temp1 = d.a;
    d.a = temp2;
    b.a = temp1;

    temp1 = u.d;
    u.d = b.d;
    temp2 = f.d;
    f.d = temp1;
    temp1 = d.d;
    d.d = temp2;
    b.d = temp1;

    temp1 = u.g;
    u.g = b.g;
    temp2 = f.g;
    f.g = temp1;
    temp1 = d.g;
    d.g = temp2;
    b.g = temp1;

    output << "L" << endl;
}

void Upper() {
    int at, bt, ct, dt, ft, gt, ht, it;

    at = u.a;
    bt = u.b;
    ct = u.c;
    dt = u.d;
    ft = u.f;
    gt = u.g;
    ht = u.h;
    it = u.i;

    u.a = gt;
    u.b = dt;
    u.c = at;
    u.d = ht;
    u.f = bt;
    u.g = it;
    u.h = ft;
    u.i = ct;

    int temp1 = f.a;
    f.a = r.a;
    int temp2 = l.a;
    l.a = temp1;
    temp1 = b.i;
    b.i = temp2;
    r.a = temp1;

    temp1 = f.b;
    f.b = r.b;
    temp2 = l.b;
    l.b = temp1;
    temp1 = b.h;
    b.h = temp2;
    r.b = temp1;

    temp1 = f.c;
    f.c = r.c;
    temp2 = l.c;
    l.c = temp1;
    temp1 = b.g;
    b.g = temp2;
    r.c = temp1;

    output << "U" << endl;
}

void UpperSecond() {// против часовой
    int at, bt, ct, dt, ft, gt, ht, it;

    at = u.a;
    bt = u.b;
    ct = u.c;
    dt = u.d;
    ft = u.f;
    gt = u.g;
    ht = u.h;
    it = u.i;

    u.a = ct;
    u.b = ft;
    u.c = it;
    u.d = bt;
    u.f = ht;
    u.g = at;
    u.h = dt;
    u.i = gt;

    int temp1 = r.a;
    r.a = f.a;
    int temp2 = b.i;
    b.i = temp1;
    temp1 = l.a;
    l.a = temp2;
    f.a = temp1;

    temp1 = r.b;
    r.b = f.b;
    temp2 = b.h;
    b.h = temp1;
    temp1 = l.b;
    l.b = temp2;
    f.b = temp1;

    temp1 = r.c;
    r.c = f.c;
    temp2 = b.g;
    b.g = temp1;
    temp1 = l.c;
    l.c = temp2;
    f.c = temp1;

    output << "U'" << endl;
}

void Down() {
    int at, bt, ct, dt, ft, gt, ht, it;

    at = d.a;
    bt = d.b;
    ct = d.c;
    dt = d.d;
    ft = d.f;
    gt = d.g;
    ht = d.h;
    it = d.i;

    d.a = ct;
    d.b = ft;
    d.c = it;
    d.d = bt;
    d.f = ht;
    d.g = at;
    d.h = dt;
    d.i = gt;

    int temp1 = f.g;
    f.g = r.g;
    int temp2 = l.g;
    l.g = temp1;
    temp1 = b.c;
    b.c = temp2;
    r.g = temp1;

    temp1 = f.h;
    f.h = r.h;
    temp2 = l.h;
    l.h = temp1;
    temp1 = b.b;
    b.b = temp2;
    r.h = temp1;

    temp1 = f.i;
    f.i = r.i;
    temp2 = l.i;
    l.i = temp1;
    temp1 = b.a;
    b.a = temp2;
    r.i = temp1;

    output << "D" << endl;
}

void DownSecond() { // против часовой
    int at, bt, ct, dt, ft, gt, ht, it;

    at = d.a;
    bt = d.b;
    ct = d.c;
    dt = d.d;
    ft = d.f;
    gt = d.g;
    ht = d.h;
    it = d.i;

    d.a = gt;
    d.b = dt;
    d.c = at;
    d.d = ht;
    d.f = bt;
    d.g = it;
    d.h = ft;
    d.i = ct;

    int temp1 = r.g;
    r.g = f.g;
    int temp2 = b.c;
    b.c = temp1;
    temp1 = l.g;
    l.g = temp2;
    f.g = temp1;

    temp1 = r.h;
    r.h = f.h;
    temp2 = b.b;
    b.b = temp1;
    temp1 = l.h;
    l.h = temp2;
    f.h = temp1;

    temp1 = r.i;
    r.i = f.i;
    temp2 = b.a;
    b.a = temp1;
    temp1 = l.i;
    l.i = temp2;
    f.i = temp1;

    output << "D'" << endl;
}

void Back() {

    int at, bt, ct, dt, ft, gt, ht, it;

    at = b.a;
    bt = b.b;
    ct = b.c;
    dt = b.d;
    ft = b.f;
    gt = b.g;
    ht = b.h;
    it = b.i;

    b.a = gt;
    b.b = dt;
    b.c = at;
    b.d = ht;
    b.f = bt;
    b.g = it;
    b.h = ft;
    b.i = ct;

    int temp1 = l.a;
    l.a = u.c;
    int temp2 = d.g;
    d.g = temp1;
    temp1 = r.i;
    r.i = temp2;
    u.c = temp1;

    temp1 = l.d;
    l.d = u.b;
    temp2 = d.h;
    d.h = temp1;
    temp1 = r.f;
    r.f = temp2;
    u.b = temp1;

    temp1 = l.g;
    l.g = u.a;
    temp2 = d.i;
    d.i = temp1;
    temp1 = r.c;
    r.c = temp2;
    u.a = temp1;

    output << "B" << endl;
}

void BackSecond() {//  против часовой
    int at, bt, ct, dt, et, ft, gt, ht, it;

    at = b.a;
    bt = b.b;
    ct = b.c;
    dt = b.d;
    ft = b.f;
    gt = b.g;
    ht = b.h;
    it = b.i;

    b.a = ct;
    b.b = ft;
    b.c = it;
    b.d = bt;
    b.f = ht;
    b.g = at;
    b.h = dt;
    b.i = gt;

    int temp1 = r.i;
    r.i = u.c;
    int temp2 = d.g;
    d.g = temp1;
    temp1 = l.a;
    l.a = temp2;
    u.c = temp1;

    temp1 = r.f;
    r.f = u.b;
    temp2 = d.h;
    d.h = temp1;
    temp1 = l.d;
    l.d = temp2;
    u.b = temp1;

    temp1 = r.c;
    r.c = u.a;
    temp2 = d.i;
    d.i = temp1;
    temp1 = l.g;
    l.g = temp2;
    u.a = temp1;

    output << "B'" << endl;
}

void Front() {
    int at, bt, ct, dt, ft, gt, ht, it;

    at = f.a;
    bt = f.b;
    ct = f.c;
    dt = f.d;
    ft = f.f;
    gt = f.g;
    ht = f.h;
    it = f.i;

    f.a = gt;
    f.b = dt;
    f.c = at;
    f.d = ht;
    f.f = bt;
    f.g = it;
    f.h = ft;
    f.i = ct;

    int temp1 = r.g;
    r.g = u.i;
    int temp2 = d.a;
    d.a = temp1;
    temp1 = l.c;
    l.c = temp2;
    u.i = temp1;

    temp1 = r.d;
    r.d = u.h;
    temp2 = d.b;
    d.b = temp1;
    temp1 = l.f;
    l.f = temp2;
    u.h = temp1;

    temp1 = r.a;
    r.a = u.g;
    temp2 = d.c;
    d.c = temp1;
    temp1 = l.i;
    l.i = temp2;
    u.g = temp1;

    output << "F" << endl;
}

void FrontSecond() {  //  против часовой
    int at, bt, ct, dt, ft, gt, ht, it;

    at = f.a;
    bt = f.b;
    ct = f.c;
    dt = f.d;
    ft = f.f;
    gt = f.g;
    ht = f.h;
    it = f.i;

    f.a = ct;
    f.b = ft;
    f.c = it;
    f.d = bt;
    f.f = ht;
    f.g = at;
    f.h = dt;
    f.i = gt;

    int temp1 = u.i;
    u.i = r.g;
    int temp2 = l.c;
    l.c = temp1;
    temp1 = d.a;
    d.a = temp2;
    r.g = temp1;

    temp1 = u.h;
    u.h = r.d;
    temp2 = l.f;
    l.f = temp1;
    temp1 = d.b;
    d.b = temp2;
    r.d = temp1;

    temp1 = u.g;
    u.g = r.a;
    temp2 = l.i;
    l.i = temp1;
    temp1 = d.c;
    d.c = temp2;
    r.a = temp1;

    output << "F'" << endl ;
}

bool cornerCheck() {
    return ((u.i == 4 && f.c == 0 && r.a == 3) || (u.i == 4 && f.c == 3 && r.a == 0) ||
            (u.i == 0 && f.c == 4 && r.a == 3) || (u.i == 0 && f.c == 3 && r.a == 4) ||
            (u.i == 3 && f.c == 0 && r.a == 4) || (u.i == 3 && f.c == 4 && r.a == 0)) &&
           ((f.a == 0 && l.c == 2 && u.g == 4) || (f.a == 0 && l.c == 4 && u.g == 2) ||
            (f.a == 2 && l.c == 4 && u.g == 0) || (f.a == 2 && l.c == 0 && u.g == 4) ||
            (f.a == 4 && l.c == 2 && u.g == 0) || (f.a == 4 && l.c == 0 && u.g == 2)) &&
           ((u.c == 4 && r.c == 3 && b.i == 1) || (u.c == 4 && r.c == 1 && b.i == 3) ||
            (u.c == 3 && r.c == 4 && b.i == 1) || (u.c == 3 && r.c == 1 && b.i == 4) ||
            (u.c == 1 && r.c == 3 && b.i == 4) || (u.c == 1 && r.c == 4 && b.i == 3)) &&
           ((u.a == 4 && b.g == 1 && l.a == 2) || (u.a == 4 && b.g == 2 && l.a == 1) ||
            (u.a == 2 && b.g == 1 && l.a == 4) || (u.a == 2 && b.g == 4 && l.a == 1) ||
            (u.a == 1 && b.g == 4 && l.a == 2) || (u.a == 1 && b.g == 2 && l.a == 4));
}

bool oneCornerCheck() {
    if (((u.i == 4 && f.c == 0 && r.a == 3) || (u.i == 4 && f.c == 3 && r.a == 0) ||
         (u.i == 0 && f.c == 4 && r.a == 3) || (u.i == 0 && f.c == 3 && r.a == 4) ||
         (u.i == 3 && f.c == 0 && r.a == 4) || (u.i == 3 && f.c == 4 && r.a == 0)) ||
        ((f.a == 0 && l.c == 2 && u.g == 4) || (f.a == 0 && l.c == 4 && u.g == 2) ||
         (f.a == 2 && l.c == 4 && u.g == 0) || (f.a == 2 && l.c == 0 && u.g == 4) ||
         (f.a == 4 && l.c == 2 && u.g == 0) || (f.a == 4 && l.c == 0 && u.g == 2)) ||
        ((u.c == 4 && r.c == 3 && b.i == 1) || (u.c == 4 && r.c == 1 && b.i == 3) ||
         (u.c == 3 && r.c == 4 && b.i == 1) || (u.c == 3 && r.c == 1 && b.i == 4) ||
         (u.c == 1 && r.c == 3 && b.i == 4) || (u.c == 1 && r.c == 4 && b.i == 3)) ||
        ((u.a == 4 && b.g == 1 && l.a == 2) || (u.a == 4 && b.g == 2 && l.a == 1) ||
         (u.a == 2 && b.g == 1 && l.a == 4) || (u.a == 2 && b.g == 4 && l.a == 1) ||
         (u.a == 1 && b.g == 4 && l.a == 2) || (u.a == 1 && b.g == 2 && l.a == 4))) {
        return true;
    }
}


bool CubickTrue() {
    return f.a == 0 && f.b == 0 && f.c == 0 && f.d == 0 && f.e == 0 && f.f == 0 && f.g == 0 && f.h == 0 && f.i == 0 &&
           b.a == 1 && b.b == 1 && b.c == 1 && b.d == 1 && b.e == 1 && b.f == 1 && b.g == 1 && b.h == 1 && b.i == 1 &&
           r.a == 3 && r.b == 3 && r.c == 3 && r.d == 3 && r.e == 3 && r.f == 3 && r.g == 3 && r.h == 3 && r.i == 3 &&
           l.a == 2 && l.b == 2 && l.c == 2 && l.d == 2 && l.e == 2 && l.f == 2 && l.g == 2 && l.h == 2 && l.i == 2 &&
           u.a == 4 && u.b == 4 && u.c == 4 && u.d == 4 && u.e == 4 && u.f == 4 && u.g == 4 && u.h == 4 && u.i == 4 &&
           d.a == 5 && d.b == 5 && d.c == 5 && d.d == 5 && d.e == 5 && d.f == 5 && d.g == 5 && d.h == 5 && d.i == 5;
}

int h;

void readCubick() {
    input >> h;
    f.a = h;
    input >> h;
    f.b = h;
    input >> h;
    f.c = h;
    input >> h;
    f.d = h;
    input >> h;
    f.e = h;
    input >> h;
    f.f = h;
    input >> h;
    f.g = h;
    input >> h;
    f.h = h;
    input >> h;
    f.i = h;

    input >> h;
    b.a = h;
    input >> h;
    b.b = h;
    input >> h;
    b.c = h;
    input >> h;
    b.d = h;
    input >> h;
    b.e = h;
    input >> h;
    b.f = h;
    input >> h;
    b.g = h;
    input >> h;
    b.h = h;
    input >> h;
    b.i = h;

    input >> h;
    l.a = h;
    input >> h;
    l.b = h;
    input >> h;
    l.c = h;
    input >> h;
    l.d = h;
    input >> h;
    l.e = h;
    input >> h;
    l.f = h;
    input >> h;
    l.g = h;
    input >> h;
    l.h = h;
    input >> h;
    l.i = h;

    input >> h;
    r.a = h;
    input >> h;
    r.b = h;
    input >> h;
    r.c = h;
    input >> h;
    r.d = h;
    input >> h;
    r.e = h;
    input >> h;
    r.f = h;
    input >> h;
    r.g = h;
    input >> h;
    r.h = h;
    input >> h;
    r.i = h;

    input >> h;
    u.a = h;
    input >> h;
    u.b = h;
    input >> h;
    u.c = h;
    input >> h;
    u.d = h;
    input >> h;
    u.e = h;
    input >> h;
    u.f = h;
    input >> h;
    u.g = h;
    input >> h;
    u.h = h;
    input >> h;
    u.i = h;

    input >> h;
    d.a = h;
    input >> h;
    d.b = h;
    input >> h;
    d.c = h;
    input >> h;
    d.d = h;
    input >> h;
    d.e = h;
    input >> h;
    d.f = h;
    input >> h;
    d.g = h;
    input >> h;
    d.h = h;
    input >> h;
    d.i = h;
}

int rand_between(const int from, const int to) {
    if (to == from)
        return to;
    if (to < from)
        return rand_between(to, from);
    return from + rand() % (to - from + 1);
}

void random() {
    int kol_com = rand_between(0, 10);
    int commands[kol_com];
    for (int i = 0; i < kol_com; i++) {
        commands[i] = rand_between(0, 10);
        cout << "random commands" << i << ": " << commands[i] << endl;
    }
    for (int i = 0; i < kol_com; i++) {
        if (commands[i] == 0) Front();
        if (commands[i] == 1) FrontSecond();
        if (commands[i] == 2) Back();
        if (commands[i] == 3) BackSecond();
        if (commands[i] == 4) Right();
        if (commands[i] == 5) RightSecond();
        if (commands[i] == 6) Left();
        if (commands[i] == 7) LeftSecond();
        if (commands[i] == 8) Upper();
        if (commands[i] == 9) UpperSecond();
        if (commands[i] == 10) Down();
        if (commands[i] == 11) DownSecond();
    }
}

void show_cubick() {
    cout << endl << "That's our cube : " << endl;
    cout << r.a << r.b << r.c << r.d << r.e << r.f << r.g << r.h << r.i << endl;
    cout << u.a << u.b << u.c << u.d << u.e << u.f << u.g << u.h << u.i << endl;
    cout << f.a << f.b << f.c << f.d << f.e << f.f << f.g << f.h << f.i << endl;
    cout << b.a << b.b << b.c << b.d << b.e << b.f << b.g << b.h << b.i << endl;
    cout << d.a << d.b << d.c << d.d << d.e << d.f << d.g << d.h << d.i << endl;
    cout << l.a << l.b << l.c << l.d << l.e << l.f << l.g << l.h << l.i << endl << endl;

}

bool check_correct() {


    int color[6] = {0, 0, 0, 0, 0, 0};
    color[f.a]++;
    color[f.b]++;
    color[f.c]++;
    color[f.d]++;
    color[f.e]++;
    color[f.f]++;
    color[f.g]++;
    color[f.h]++;
    color[f.i]++;

    color[b.a]++;
    color[b.b]++;
    color[b.c]++;
    color[b.d]++;
    color[b.e]++;
    color[b.f]++;
    color[b.g]++;
    color[b.h]++;
    color[b.i]++;

    color[r.a]++;
    color[r.b]++;
    color[r.c]++;
    color[r.d]++;
    color[r.e]++;
    color[r.f]++;
    color[r.g]++;
    color[r.h]++;
    color[r.i]++;

    color[l.a]++;
    color[l.b]++;
    color[l.c]++;
    color[l.d]++;
    color[l.e]++;
    color[l.f]++;
    color[l.g]++;
    color[l.h]++;
    color[l.i]++;

    color[u.a]++;
    color[u.b]++;
    color[u.c]++;
    color[u.d]++;
    color[u.e]++;
    color[u.f]++;
    color[u.g]++;
    color[u.h]++;
    color[u.i]++;

    color[d.a]++;
    color[d.b]++;
    color[d.c]++;
    color[d.d]++;
    color[d.e]++;
    color[d.f]++;
    color[d.g]++;
    color[d.h]++;
    color[d.i]++;


    for (int i = 0; i < 6; i++) {
        if (color[i] != 9) {
            cout << "Bad cube. Try another one" << endl;
            return false;
        }
    }
    if (f.e == 0 && b.e == 1 && l.e == 2 && r.e == 3 && u.e == 4 && d.e == 5) {
        return true;
    } else {
        cout << "Bad cube. Try another one" << endl;
        return false;
    }
}
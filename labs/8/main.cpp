
using namespace std;
#include "Cube.h"

/// крсный = 0 оранжевый= 1 синий = 2 зеленый = 3 желтый = 4 белый = 5



int main() {

    readCubick();
    show_cubick();
    random();
    show_cubick();
    if (!CubickTrue() && check_correct()) {

        while (u.b != 5 || u.d != 5 || u.f != 5 || u.h != 5) {
            if (f.f == 5) {
                while (u.f == 5) {
                    Upper();
                }
                Right();
            }
            if (f.d == 5) {
                while (u.d == 5) {
                    Upper();
                }
                LeftSecond();
            }
            if (r.d == 5) {
                while (u.h == 5) {
                    Upper();
                }
                FrontSecond();
            }
            if (r.f == 5) {
                while (u.b == 5) {
                    Upper();
                }
                Back();
            }
            if (l.f == 5) {
                while (u.h == 5) {
                    Upper();
                }
                Front();
            }
            if (l.d == 5) {
                while (u.b == 5) {
                    Upper();
                }
                BackSecond();
            }
            if (b.f == 5) {
                while (u.f == 5) {
                    Upper();
                }
                RightSecond();
            }
            if (b.d == 5) {
                while (u.d == 5) {
                    Upper();
                }
                Left();
            }
            if (d.f == 5) {
                while (u.f == 5) {
                    Upper();
                }
                Right();
                Right();
            }
            if (d.h == 5) {
                while (u.b == 5) {
                    Upper();
                }
                BackSecond();
                BackSecond();
            }
            if (d.d == 5) {
                while (u.d == 5) {
                    Upper();
                }
                LeftSecond();
                LeftSecond();
            }
            if (d.b == 5) {
                while (u.h == 5) {
                    Upper();
                }
                Front();
                Front();
            }

            if (f.h == 5) {
                Front();
                while (u.d == 5) {
                    Upper();
                }
                LeftSecond();
            }
            if (f.b == 5) {
                Front();
                while (u.f == 5) {
                    Upper();
                }
                Right();
            }
            if (r.h == 5) {
                Right();
                while (u.h == 5) {
                    Upper();
                }
                FrontSecond();
            }
            if (r.b == 5) {
                Right();
                while (u.b == 5) {
                    Upper();
                }
                Back();
            }
            if (b.b == 5) {
                BackSecond();
                while (u.d == 5) {
                    Upper();
                }
                Left();
            }
            if (b.h == 5) {
                BackSecond();
                while (u.f == 5) {
                    Upper();
                }
                RightSecond();
            }
            if (l.h == 5) {
                LeftSecond();
                while (u.h == 5) {
                    Upper();
                }
                Front();
            }
            if (l.b == 5) {
                LeftSecond();
                while (u.b == 5) {
                    Upper();
                }
                BackSecond();
            }
//            cout <<"Cобран цветок" << endl ;
//            show_cubick();
        }

        while (f.b != f.e || u.h != 5) {
            Upper();
        }
        Front();
        Front();
        while (r.b != r.e || u.f != 5) {
            Upper();
        }
        Right();
        Right();
        while (b.h != b.e || u.b != 5) {
            Upper();
        }
        Back();
        Back();
        while (l.b != l.e || u.d != 5) {
            Upper();
        }
        Left();
        Left();
//cout << "Построен правильный крест " << endl;
//        show_cubick();
        int count = 0;
        while (d.a != 5 || d.c != 5 || d.g != 5 || d.i != 5) {
            if (b.i == 5) {
                if ((u.c == 3 && r.c == 1) || (u.c == 1 && r.c == 3)) {
                    while (d.i != 5 || r.i != 3 || b.c != 1) {
                        Back();
                        Upper();
                        BackSecond();
                        UpperSecond();
                    }

                }
                if ((u.c == 3 && r.c == 0 && b.i == 5) || (u.c == 0 && r.c == 3 && b.i == 5)) {
                    Upper();
                    while (d.c != 5 || f.i != 0 || r.g != 3) {
                        Right();
                        Upper();
                        RightSecond();
                        UpperSecond();
                    }
                }
                if ((u.c == 0 && r.c == 2 && b.i == 5) || (u.c == 2 && r.c == 0 && b.i == 5)) {
                    Upper();
                    Upper();
                    while (d.a != 5 || l.i != 2 || f.g != 0) {
                        Front();
                        Upper();
                        FrontSecond();
                        UpperSecond();
                    }
                }
                if ((u.c == 2 && r.c == 1 && b.i == 5) || (u.c == 1 && r.c == 2 && b.i == 5)) {
                    UpperSecond();
                    while (d.g != 5 || b.a != 1 || l.g != 2) {
                        Left();
                        Upper();
                        LeftSecond();
                        UpperSecond();
                    }
                }
            }

            if (u.c == 5) {
                if ((b.i == 3 && r.c == 1) || (b.i == 1 && r.c == 3)) {
                    while (d.i != 5 || r.i != 3 || b.c != 1) {
                        Back();
                        Upper();
                        BackSecond();
                        UpperSecond();
                    }
                }
                if ((b.i == 3 && r.c == 0 && u.c == 5) || (b.i == 0 && r.c == 3 && u.c == 5)) {
                    Upper();
                    while (d.c != 5 || f.i != 0 || r.g != 3) {
                        Right();
                        Upper();
                        RightSecond();
                        UpperSecond();
                    }
                }
                if ((b.i == 0 && r.c == 2 && u.c == 5) || (b.i == 2 && r.c == 0 && u.c == 5)) {
                    Upper();
                    Upper();
                    while (d.a != 5 || l.i != 2 || f.g != 0) {
                        Front();
                        Upper();
                        FrontSecond();
                        UpperSecond();
                    }
                }
                if ((b.i == 2 && r.c == 1 && u.c == 5) || (b.i == 1 && r.c == 2 && u.c == 5)) {
                    UpperSecond();
                    while (d.g != 5 || b.a != 1 || l.g != 2) {
                        Left();
                        Upper();
                        LeftSecond();
                        UpperSecond();
                    }
                }
            }

            if (r.c == 5) {
                if ((u.c == 3 && b.i == 1) || (u.c == 1 && b.i == 3)) {
                    while (d.i != 5 || r.i != 3 || b.c != 1) {
                        Back();
                        Upper();
                        BackSecond();
                        UpperSecond();
                    }
                }
                if ((u.c == 3 && b.i == 0 && r.c == 5) || (u.c == 0 && b.i == 3 && r.c == 5)) {
                    Upper();
                    while (d.c != 5 || f.i != 0 || r.g != 3) {
                        Right();
                        Upper();
                        RightSecond();
                        UpperSecond();
                    }
                }
                if ((u.c == 0 && b.i == 2 && r.c == 5) || (u.c == 2 && b.i == 0 && r.c == 5)) {
                    Upper();
                    Upper();
                    while (d.a != 5 || l.i != 2 || f.g != 0) {
                        Front();
                        Upper();
                        FrontSecond();
                        UpperSecond();
                    }
                }
                if ((u.c == 2 && b.i == 1 && r.c == 5) || (u.c == 1 && b.i == 2 && r.c == 5)) {
                    UpperSecond();
                    while (d.g != 5 || b.a != 1 || l.g != 2) {
                        Left();
                        Upper();
                        LeftSecond();
                        UpperSecond();
                    }
                }
            }
            //случай правого дальнего угла закончек
            if (b.g == 5) {
                if ((u.a == 3 && l.a == 1) || (u.a == 1 && l.a == 3)) {
                    Upper();
                    while (d.i != 5 || r.i != 3 || b.c != 1) {
                        Back();
                        Upper();
                        BackSecond();
                        UpperSecond();
                    }
                }
                if ((u.a == 3 && l.a == 0 && b.g == 5) || (u.a == 0 && l.a == 3 && b.g == 5)) {
                    Upper();
                    Upper();
                    while (d.c != 5 || f.i != 3 || r.g != 3) {
                        Right();
                        Upper();
                        RightSecond();
                        UpperSecond();
                    }
                }
                if ((u.a == 0 && l.a == 2 && b.g == 5) || (u.a == 2 && l.a == 0 && b.g == 5)) {
                    UpperSecond();
                    while (d.a != 5 || l.i != 2 || f.g != 0) {
                        Front();
                        Upper();
                        FrontSecond();
                        UpperSecond();
                    }
                }
                if ((u.a == 2 && l.a == 1 && b.g == 5) || (u.a == 1 && l.a == 2 && b.g == 5)) {
                    while (d.g != 5 || b.a != 1 || l.g != 2) {
                        Left();
                        Upper();
                        LeftSecond();
                        UpperSecond();
                    }
                }
            }

            if (u.a == 5) {
                if ((b.g == 3 && l.a == 1) || (b.g == 1 && l.a == 3)) {
                    Upper();
                    while (d.i != 5 || r.i != 3 || b.c != 1) {
                        Back();
                        Upper();
                        BackSecond();
                        UpperSecond();
                    }
                }
                if ((b.g == 3 && l.a == 0 && u.a == 5) || (b.g == 0 && l.a == 3 && u.a == 5)) {
                    Upper();
                    Upper();
                    while (d.c != 5 || f.i != 0 || r.g != 3) {
                        Right();
                        Upper();
                        RightSecond();
                        UpperSecond();
                    }
                }
                if ((b.g == 0 && l.a == 2 && u.a == 5) || (b.g == 2 && l.a == 0 && u.a == 5)) {
                    UpperSecond();
                    while (d.a != 5 || l.i != 2 || f.g != 0) {
                        Front();
                        Upper();
                        FrontSecond();
                        UpperSecond();
                    }
                }
                if ((b.g == 2 && l.a == 1 && u.a == 5) || (b.g == 1 && l.a == 2 && u.a == 5)) {
                    while (d.g != 5 || b.a != 1 || l.g != 2) {
                        Left();
                        Upper();
                        LeftSecond();
                        UpperSecond();
                    }
                }
            }

            if (l.a == 5) {
                if ((u.a == 3 && b.g == 1) || (u.a == 1 && b.g == 3)) {
                    Upper();
                    while (d.i != 5 || r.i != 3 || b.c != 1) {
                        Back();
                        Upper();
                        BackSecond();
                        UpperSecond();
                    }
                }
                if ((u.a == 3 && b.g == 0 && l.a == 5) || (u.a == 0 && b.g == 3 && l.a == 5)) {
                    Upper();
                    Upper();
                    while (d.c != 5 || f.i != 0 || r.g != 3) {
                        Right();
                        Upper();
                        RightSecond();
                        UpperSecond();
                    }
                }
                if ((u.a == 0 && b.g == 2 && l.a == 5) || (u.a == 2 && b.g == 0 && l.a == 5)) {
                    UpperSecond();
                    while (d.a != 5 || l.i != 2 || f.g != 0) {
                        Front();
                        Upper();
                        FrontSecond();
                        UpperSecond();
                    }
                }
                if ((u.a == 2 && b.g == 1 && l.a == 5) || (u.a == 1 && b.g == 2 && l.a == 5)) {
                    while (d.g != 5 || b.a != 1 || l.g != 2) {
                        Left();
                        Upper();
                        LeftSecond();
                        UpperSecond();
                    }
                }
            }
            // закончен второй угол

            if (f.a == 5) {
                if ((u.g == 3 && l.c == 1) || (u.g == 1 && l.c == 3)) {
                    Upper();
                    Upper();
                    while (d.i != 5 || r.i != 3 || b.c != 1) {
                        Back();
                        Upper();
                        BackSecond();
                        UpperSecond();
                    }
                }
                if ((u.g == 3 && l.c == 0 && f.a == 5) || (u.g == 0 && l.c == 3 && f.a == 5)) {
                    UpperSecond();
                    while (d.c != 5 || f.i != 0 || r.g != 3) {
                        Right();
                        Upper();
                        RightSecond();
                        UpperSecond();
                    }
                }
                if ((u.g == 0 && l.c == 2 && f.a == 5) || (u.g == 2 && l.c == 0 && f.a == 5)) {
                    while (d.a != 5 || l.i != 2 || f.g != 0) {
                        Front();
                        Upper();
                        FrontSecond();
                        UpperSecond();
                    }
                }
                if ((u.g == 2 && l.c == 1 && f.a == 5) || (u.g == 1 && l.c == 2 && f.a == 5)) {
                    Upper();
                    while (d.g != 5 || b.a != 1 || l.g != 2) {
                        Left();
                        Upper();
                        LeftSecond();
                        UpperSecond();
                    }
                }
            }

            if (u.g == 5) {
                if ((f.a == 3 && l.c == 1) || (f.a == 1 && l.c == 3)) {
                    Upper();
                    Upper();
                    while (d.i != 5 || r.i != 3 || b.c != 1) {
                        Back();
                        Upper();
                        BackSecond();
                        UpperSecond();
                    }
                }
                if ((f.a == 3 && l.c == 0 && u.g == 5) || (f.a == 0 && l.c == 3 && u.g == 5)) {
                    UpperSecond();
                    while (d.c != 5 || f.i != 0 || r.g != 3) {
                        Right();
                        Upper();
                        RightSecond();
                        UpperSecond();
                    }
                }
                if ((f.a == 0 && l.c == 2 && u.g == 5) || (f.a == 2 && l.c == 0 && u.g == 5)) {
                    while (d.a != 5 || l.i != 2 || f.g != 0) {
                        Front();
                        Upper();
                        FrontSecond();
                        UpperSecond();
                    }
                }
                if ((f.a == 2 && l.c == 1 && u.g == 5) || (f.a == 1 && l.c == 2 && u.g == 5)) {
                    Upper();
                    while (d.g != 5 || b.a != 1 || l.g != 2) {
                        Left();
                        Upper();
                        LeftSecond();
                        UpperSecond();
                    }
                }
            }

            if (l.c == 5) {
                if ((u.g == 3 && f.a == 1) || (u.g == 1 && f.a == 3)) {
                    Upper();
                    Upper();
                    while (d.i != 5 || r.i != 3 || b.c != 1) {
                        Back();
                        Upper();
                        BackSecond();
                        UpperSecond();
                    }
                }
                if ((u.g == 3 && f.a == 0 && l.c == 5) || (u.g == 0 && f.a == 3 && l.c == 5)) {
                    UpperSecond();
                    while (d.c != 5 || f.i != 0 || r.g != 3) {
                        Right();
                        Upper();
                        RightSecond();
                        UpperSecond();
                    }
                }
                if ((u.g == 0 && f.a == 2 && l.c == 5) || (u.g == 2 && f.a == 0 && l.c == 5)) {
                    while (d.a != 5 || l.i != 2 || f.g != 0) {
                        Front();
                        Upper();
                        FrontSecond();
                        UpperSecond();
                    }
                }
                if ((u.g == 2 && f.a == 1 && l.c == 5) || (u.g == 1 && f.a == 2 && l.c == 5)) {
                    Upper();
                    while (d.g != 5 || b.a != 1 || l.g != 2) {
                        Left();
                        Upper();
                        LeftSecond();
                        UpperSecond();
                    }
                }
            }
            //закончен случай третьего угла

            if (f.c == 5) {
                if ((u.i == 3 && r.a == 1) || (u.i == 1 && r.a == 3)) {
                    UpperSecond();
                    while (d.i != 5 || r.i != 3 || b.c != 1) {
                        Back();
                        Upper();
                        BackSecond();
                        UpperSecond();
                    }
                }
                if ((u.i == 3 && r.a == 0 && f.c == 5) || (u.i == 0 && r.a == 3 && f.c == 5)) {
                    while (d.c != 5 || f.i != 0 || r.g != 3) {
                        Right();
                        Upper();
                        RightSecond();
                        UpperSecond();
                    }
                }
                if ((u.i == 0 && r.a == 2 && f.c == 5) || (u.i == 2 && r.a == 0 && f.c == 5)) {
                    Upper();
                    while (d.a != 5 || l.i != 2 || f.g != 0) {
                        Front();
                        Upper();
                        FrontSecond();
                        UpperSecond();
                    }
                }
                if ((u.i == 2 && r.a == 1 && f.c == 5) || (u.i == 1 && r.a == 2 && f.c == 5)) {
                    Upper();
                    Upper();
                    while (d.g != 5 || b.a != 1 || l.g != 2) {
                        Left();
                        Upper();
                        LeftSecond();
                        UpperSecond();
                    }
                }
            }

            if (u.i == 5) {
                if ((f.c == 3 && r.a == 1) || (f.c == 1 && r.a == 3)) {
                    UpperSecond();
                    while (d.i != 5 || r.i != 3 || b.c != 1) {
                        Back();
                        Upper();
                        BackSecond();
                        UpperSecond();
                    }
                }
                if ((f.c == 3 && r.a == 0 && u.i == 5) || (f.c == 0 && r.a == 3 && u.i == 5)) {
                    while (d.c != 5 || f.i != 0 || r.g != 3) {
                        Right();
                        Upper();
                        RightSecond();
                        UpperSecond();
                    }
                }
                if ((f.c == 0 && r.a == 2 && u.i == 5) || (f.c == 2 && r.a == 0 && u.i == 5)) {
                    Upper();
                    while (d.a != 5 || l.i != 2 || f.g != 0) {
                        Front();
                        Upper();
                        FrontSecond();
                        UpperSecond();
                    }
                }
                if ((f.c == 2 && r.a == 1 && u.i == 5) || (f.c == 1 && r.a == 2 && u.i == 5)) {
                    Upper();
                    Upper();
                    while (d.g != 5 || b.a != 1 || l.g != 2) {
                        Left();
                        Upper();
                        LeftSecond();
                        UpperSecond();
                    }
                }
            }

            if (r.a == 5) {
                if ((f.c == 3 && u.i == 1 && r.a == 5) || (f.c == 1 && u.i == 3 && r.a == 5)) {
                    UpperSecond();
                    while (d.i != 5 || r.i != 3 || b.c != 1) {
                        Back();
                        Upper();
                        BackSecond();
                        UpperSecond();
                    }
                }
                if ((f.c == 3 && u.i == 0 && r.a == 5) || (f.c == 0 && u.i == 3 && r.a == 5)) {
                    while (d.c != 5 || f.i != 0 || r.g != 3) {
                        Right();
                        Upper();
                        RightSecond();
                        UpperSecond();
                    }
                }
                if ((f.c == 0 && u.i == 2 && r.a == 5) || (f.c == 2 && u.i == 0 && r.a == 5)) {
                    Upper();
                    while (d.a != 5 || l.i != 2 || f.g != 0) {
                        Front();
                        Upper();
                        FrontSecond();
                        UpperSecond();
                    }
                }
                if ((f.c == 2 && u.i == 1 && r.a == 5) || (f.c == 1 && u.i == 2 && r.a == 5)) {
                    Upper();
                    Upper();
                    while (d.g != 5 || b.a != 1 || l.g != 2) {
                        Left();
                        Upper();
                        LeftSecond();
                        UpperSecond();
                    }
                }
            }

            if ((f.i == 5 && r.g == 3 && d.c == 0) || (f.i == 5 && r.g == 0 && d.c == 3) ||
                (f.i == 3 && r.g == 5 && d.c == 0) || (f.i == 0 && r.g == 5 && d.c == 3) ||
                (f.i == 3 && r.g == 0 && d.c == 5)) {
                while (d.c != 5 || f.i != 0 || r.g != 3) {
                    Right();
                    Upper();
                    RightSecond();
                    UpperSecond();
                }
            }
            if ((b.c == 5 && r.i == 3 && d.i == 1) || (b.c == 5 && r.i == 1 && d.i == 3) ||
                (b.c == 3 && r.i == 5 && d.i == 1) || (b.c == 1 && r.i == 5 && d.i == 3) ||
                (b.c == 3 && r.i == 1 && d.i == 5)) {
                while (d.i != 5 || b.c != 1 || r.i != 3) {
                    Back();
                    Upper();
                    BackSecond();
                    UpperSecond();
                }
            }
            if ((b.a == 5 && l.g == 2 && d.g == 1) || (b.a == 5 && l.g == 1 && d.g == 2) ||
                (b.a == 2 && l.g == 5 && d.g == 1) || (b.a == 1 && l.g == 5 && d.g == 2) ||
                (b.a == 2 && l.g == 1 && d.g == 5)) {
                while (d.g != 5 || b.a != 1 || l.g != 2) {
                    Left();
                    Upper();
                    LeftSecond();
                    UpperSecond();
                }
            }
            if ((l.i == 5 && f.g == 0 && d.a == 2) || (l.i == 5 && f.g == 2 && d.a == 0) ||
                (l.i == 0 && f.g == 5 && d.a == 2) || (l.i == 2 && f.g == 5 && d.a == 0) ||
                (l.i == 0 && f.g == 2 && d.a == 5)) {
                while (d.a != 5 || l.i != 2 || f.g != 0) {
                    Front();
                    Upper();
                    FrontSecond();
                    UpperSecond();
                }
            }

            if ((d.c == 5 && (f.i != 0 && f.i != 3)) || (d.c == 5 && (r.g != 0 && r.g != 3))) {
                Right();
                Upper();
                RightSecond();
                UpperSecond();
            }
            if ((d.i == 5 && (r.i != 1 && r.i != 3)) || (d.i == 5 && (b.c != 1 && b.c != 3))) {
                Back();
                Upper();
                BackSecond();
                UpperSecond();
            }
            if ((d.g == 5 && (b.a != 1 && b.a != 2)) || (d.g == 5 && (l.g != 1 && l.g != 2))) {
                Left();
                Upper();
                LeftSecond();
                UpperSecond();
            }
            if ((d.a == 5 && (f.g != 0 && f.g != 2)) || (d.a == 5 && (l.i != 0 && l.i != 2))) {
                Front();
                Upper();
                FrontSecond();
                UpperSecond();
            }
        }
        cout << "First face end" << endl;
        show_cubick();
        int pred = -1;
        while (f.d != 0 || f.f != 0 || r.d != 3 || r.f != 3 || b.f != 1 || b.d != 1 || l.d != 2 || l.f != 2) {
            count = 0;
            pred = -1;
            while (count > pred) {
                pred = count;
                if (f.b == 0 || r.b == 0 || b.h == 0 || l.b == 0) {
                    while (f.b != 0) {
                        Upper();
                    }
                    if (u.h == 3) {
                        count++;
                        Upper();
                        Right();
                        Upper();
                        RightSecond();
                        UpperSecond();
                        FrontSecond();
                        UpperSecond();
                        Front();
                        Upper();
                    } else {
                        if (u.h == 2) {
                            count++;
                            UpperSecond();
                            LeftSecond();
                            UpperSecond();
                            Left();
                            Upper();
                            Front();
                            Upper();
                            FrontSecond();
                            UpperSecond();
                        }
                    }
                }
                //2 ребра есть кубик вставили
                if (f.b == 3 || r.b == 3 || b.h == 3 || l.b == 3) {
                    while (r.b != 3) {
                        Upper();
                    }
                    if (u.f == 1) {
                        count++;
                        Upper();
                        Back();
                        Upper();
                        BackSecond();
                        UpperSecond();
                        RightSecond();
                        UpperSecond();
                        Right();
                        Upper();
                    } else {
                        if (u.f == 0) {
                            count++;
                            UpperSecond();
                            FrontSecond();
                            UpperSecond();
                            Front();
                            Upper();
                            Right();
                            Upper();
                            RightSecond();
                            UpperSecond();
                        }
                    }
                }
                // уже 4 ребра есть
                if (f.b == 1 || r.b == 1 || b.h == 1 || l.b == 1) {
                    while (b.h != 1) {
                        Upper();
                    }
                    if (u.b == 2) {
                        count++;
                        Upper();
                        Left();
                        Upper();
                        LeftSecond();
                        UpperSecond();
                        BackSecond();
                        UpperSecond();
                        Back();
                        Upper();
                    } else {
                        if (u.b == 3) {
                            count++;
                            UpperSecond();
                            RightSecond();
                            UpperSecond();
                            Right();
                            Upper();
                            Back();
                            Upper();
                            BackSecond();
                            UpperSecond();
                        }
                    }
                }
                // уже 6 ребер есть
                if (f.b == 2 || r.b == 2 || b.h == 2 || l.b == 2) {
                    while (l.b != 2) {
                        Upper();
                    }
                    if (u.d == 0) {
                        count++;
                        Upper();
                        Front();
                        Upper();
                        FrontSecond();
                        UpperSecond();
                        LeftSecond();
                        UpperSecond();
                        Left();
                        Upper();
                    } else {
                        if (u.d == 1) {
                            count++;
                            UpperSecond();
                            BackSecond();
                            UpperSecond();
                            Back();
                            Upper();
                            Left();
                            Upper();
                            LeftSecond();
                            UpperSecond();
                        }
                    }
                }
                //обработали и постарались поставить 8 ребер сверху
            }
            // доставим ребра из второго ряда
            if (f.f != 0) {
                Right();
                Upper();
                RightSecond();
                UpperSecond();
                FrontSecond();
                UpperSecond();
                Front();
                Upper();
            }
            if (r.f != 3) {
                Back();
                Upper();
                BackSecond();
                UpperSecond();
                RightSecond();
                UpperSecond();
                Right();
                Upper();
            }
            if (b.d != 1) {
                Left();
                Upper();
                LeftSecond();
                UpperSecond();
                BackSecond();
                UpperSecond();
                Back();
                Upper();
            }
            if (l.f != 2) {
                Front();
                Upper();
                FrontSecond();
                UpperSecond();
                LeftSecond();
                UpperSecond();
                Left();
                Upper();
            }
        }
// собрано 2 нижних ряда

        while (u.d != 4 || u.b != 4 || u.f != 4 || u.h != 4) {
            if ((u.f == 4 && u.b == 4) || (u.b == 4 && u.h == 4)) {
                Left();
                Front();
                Upper();
                FrontSecond();
                UpperSecond();
                LeftSecond();
            } else {
                if (u.f == 4 && u.h == 4) {
                    Back();
                    Left();
                    Upper();
                    LeftSecond();
                    UpperSecond();
                    BackSecond();
                } else {
                    if (u.d == 4 && u.h == 4) {
                        Right();
                        Back();
                        Upper();
                        BackSecond();
                        UpperSecond();
                        RightSecond();
                    } else {
                        Front();
                        Right();
                        Upper();
                        RightSecond();
                        UpperSecond();
                        FrontSecond();
                    }
                }
            }
        }
//желтый крест собран
        int proverka = 0;
        if (f.b == 0 && r.b == 3 && b.h == 1 && l.b == 2) {
            proverka = 1;
        } else {
            Upper();
            if (f.b == 0 && r.b == 3 && b.h == 1 && l.b == 2) {
                proverka = 1;
            } else {
                Upper();
                if (f.b == 0 && r.b == 3 && b.h == 1 && l.b == 2) {
                    proverka = 1;
                } else {
                    Upper();
                    if (f.b == 0 && r.b == 3 && b.h == 1 && l.b == 2) {
                        proverka = 1;
                    }
                }
            }
        }
//проверили на правильный желтый крест
        if (proverka == 0) {
            while (f.b != 0 || r.b != 3 || b.h != 1 || l.b != 2) {
                Upper();
                if (r.b == 3 && b.h == 1) {
                    Right();
                    Upper();
                    RightSecond();
                    Upper();
                    Right();
                    Upper();
                    Upper();
                    RightSecond();
                    Upper();
                    break;
                }
                if (r.b == 3 && f.b == 0) {
                    Front();
                    Upper();
                    FrontSecond();
                    Upper();
                    Front();
                    Upper();
                    Upper();
                    FrontSecond();
                    Upper();
                    break;
                }
                if (f.b == 0 && l.b == 2) {
                    Left();
                    Upper();
                    LeftSecond();
                    Upper();
                    Left();
                    Upper();
                    Upper();
                    LeftSecond();
                    Upper();
                    break;
                }
                if (l.b == 2 && b.h == 1) {
                    Back();
                    Upper();
                    BackSecond();
                    Upper();
                    Back();
                    Upper();
                    Upper();
                    BackSecond();
                    Upper();
                    break;
                }
                if (r.b == 3 && l.b == 2) {
                    Back();
                    Upper();
                    BackSecond();
                    Upper();
                    Back();
                    Upper();
                    Upper();
                    BackSecond();
                }
                if (f.b == 0 && b.h == 1) {
                    Right();
                    Upper();
                    RightSecond();
                    Upper();
                    Right();
                    Upper();
                    Upper();
                    RightSecond();
                }
            }
        }
//правильный желтый крест сделан
        int check = 0;
        int stop = 0;



        while (!cornerCheck()) {
            if ((u.i == 4 && f.c == 0 && r.a == 3) || (u.i == 4 && f.c == 3 && r.a == 0) ||
                (u.i == 0 && f.c == 4 && r.a == 3) || (u.i == 0 && f.c == 3 && r.a == 4) ||
                (u.i == 3 && f.c == 0 && r.a == 4) || (u.i == 3 && f.c == 4 && r.a == 0)) {
                while (!cornerCheck()) {
                    Upper();
                    Right();
                    UpperSecond();
                    LeftSecond();
                    Upper();
                    RightSecond();
                    UpperSecond();
                    Left();
                }
            } else {
                if ((f.a == 0 && l.c == 2 && u.g == 4) || (f.a == 0 && l.c == 4 && u.g == 2) ||
                    (f.a == 2 && l.c == 4 && u.g == 0) || (f.a == 2 && l.c == 0 && u.g == 4) ||
                    (f.a == 4 && l.c == 2 && u.g == 0) || (f.a == 4 && l.c == 0 && u.g == 2)) {
                    while (!cornerCheck()) {
                        Upper();
                        Front();
                        UpperSecond();
                        BackSecond();
                        Upper();
                        FrontSecond();
                        UpperSecond();
                        Back();
                    }
                } else {
                    if ((u.c == 4 && r.c == 3 && b.i == 1) || (u.c == 4 && r.c == 1 && b.i == 3) ||
                        (u.c == 3 && r.c == 4 && b.i == 1) || (u.c == 3 && r.c == 1 && b.i == 4) ||
                        (u.c == 1 && r.c == 3 && b.i == 4) || (u.c == 1 && r.c == 4 && b.i == 3)) {
                        while (!cornerCheck()) {
                            Upper();
                            Back();
                            UpperSecond();
                            FrontSecond();
                            Upper();
                            BackSecond();
                            UpperSecond();
                            Front();
                        }
                    } else {
                        if ((u.a == 4 && b.g == 1 && l.a == 2) || (u.a == 4 && b.g == 2 && l.a == 1) ||
                            (u.a == 2 && b.g == 1 && l.a == 4) || (u.a == 2 && b.g == 4 && l.a == 1) ||
                            (u.a == 1 && b.g == 4 && l.a == 2) || (u.a == 1 && b.g == 2 && l.a == 4)) {
                            while (!cornerCheck()) {
                                Upper();
                                Left();
                                UpperSecond();
                                RightSecond();
                                Upper();
                                LeftSecond();
                                UpperSecond();
                                Right();
                            }
                        } else {
                            while (!oneCornerCheck()) {
                                Upper();
                                Right();
                                UpperSecond();
                                LeftSecond();
                                Upper();
                                RightSecond();
                                UpperSecond();
                                Left();
                            }
                        }
                    }
                }
            }
        }
//правильно стоят углы

        if (u.c != 4) {
            while (u.c != 4) {
                Back();
                RightSecond();
                BackSecond();
                Right();
            }
        }
        Upper();
        if (u.c != 4) {
            while (u.c != 4) {
                Back();
                RightSecond();
                BackSecond();
                Right();
            }
        }
        Upper();
        if (u.c != 4) {
            while (u.c != 4) {
                Back();
                RightSecond();
                BackSecond();
                Right();
            }
        }
        Upper();
        if (u.c != 4) {
            while (u.c != 4) {
                Back();
                RightSecond();
                BackSecond();
                Right();
            }
        }
        while (!CubickTrue()) {
            Upper();
        }


    }

    show_cubick();


    return 0;
}


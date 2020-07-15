#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

 int nota=0;
 
 cout << "INGRESE LA NOTA QUE OBTUVO:    ";
 cin >> nota;

if (nota >=96 && nota <=100){
    cout << "OBTUVISTE UNA S(A++)";
    cout << endl;
} else {
    if (nota >=91 && nota <=95){
        cout << "OBTUVISTE UNA A+";
        cout << endl;
    }  else {
        if (nota >=84 && nota <=90){
            cout << "OBTUVISTE UNA A";
            cout << endl;
        } else {
            if (nota >=81 && nota <=85){
                cout << "OBTUVISTE UNA A-";
                cout << endl;
            } else {
                if (nota >= 76 && nota <=80){
                    cout << "OBTUVUISTE UNA B+";
                    cout << endl;
                } else {
                    if (nota >= 71 && nota <= 75){
                        cout << "OBTUVISTE UNA B";
                        cout << endl;
                        } else {
                            if (nota >= 66 && nota <=70){
                                cout << "OBTUVISTE UNA B-";
                                cout << endl;
                            } else {
                                if (nota >= 61 && nota <=65){
                                    cout << "OBTUVISTE UNA C+";
                                    cout << endl;  
                                } else {
                                    if (nota >= 56 && nota <=60){
                                         cout << "OBTUVISTE UNA C";
                                         cout << endl;
                                    } else {
                                        if (nota >=51 && nota <=55){
                                            cout << "OBTUVISTE UNA C-";
                                            cout << endl;
                                        } else {
                                            if (nota >=46 && nota <=50){
                                                cout << "OBTUVISTE UNA D+";
                                                cout << endl;
                                            } else {
                                                if (nota >=41 && nota <=45){
                                                    cout << "OBTUVISTE UNA D";
                                                    cout << endl;
                                                } else {
                                                    if (nota >= 34 && nota <= 40){
                                                        cout << "OBTUVISTE UNA D-";
                                                        cout << endl;
                                                    } else {
                                                        if (nota >= 31 && nota <= 35){
                                                            cout << "OBTUVISTE UNA E+";
                                                            cout << endl;
                                                        } else {
                                                            if (nota >=26 && nota <=30){
                                                                cout << "OBTUVISTE UNA E";
                                                                cout << endl;
                                                            } else {
                                                                if (nota >=21 && nota <= 25){
                                                                    cout << "OBTUVISTE UNA E-";
                                                                    cout << endl;
                                                                } else {
                                                                    if (nota >=16 && nota <= 20){
                                                                        cout << "OBTUVISTE UNA F+";
                                                                        cout << endl;
                                                                    } else {
                                                                        if (nota >= 11 && nota <=15){
                                                                            cout << "OBTUVISTE UNA F";
                                                                            cout << endl;
                                                                        } else {
                                                                            if (nota >= 6 && nota <=10){
                                                                                cout << "OBTUVISTE UNA F";
                                                                                cout << endl;
                                                                            } else {
                                                                                if (nota >= 1 && nota <=5){
                                                                                    cout << "OBTUVISTE UNA F-";
                                                                                    cout << endl;
                                                                                } else {
                                                                                    if (nota ==0){
                                                                                        cout << "OBTUVISTE UNA F--";
                                                                                        cout << endl;
                                                                                    } else {
                                                                                        cout << "INGRESE UNA NOTA DE 1 AL 100";
                                                                                        cout << endl;
                                                                                    }
                                                                                }
                                                                
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } 
                        }
                    }
                }
            }
        }
    }


    return 0;
}
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;


int main(){
//محیط و مساحت مستطیل
    int x = 5;
    int y = 3;
    cout << "mohit =" << 2 * (x+y) << endl ;
    cout << "masahat =" << x * y << endl ;
//تشخیص زوج یا فرد بودن 
    int x1 = 8;
    if( 0 == ( x1 % 2) ) {
    cout << x1 << " zoj ast " << endl ;
    }
    else {
    cout << x1 << " fard ast " << endl ;
    }
//حساب کردن زمان گذشته از روز بر حسب ثانیه
    int hour = 13;
    int minute = 50;
    int Second = 20;
    cout << Second + (minute * 60) + (hour * 3600) << " sanie az shoro roz gozashte ast " << endl ;
//حساب کردن قدر مطلق عدد
    int x2 = -4;
    if (x2 >= 0) {
    cout << x2 << endl ;
    }
    else {
        cout << "ghadr motlagh " << -1 * x2 << " ast" << endl ;
    }
// تبدیل ضرایب به ریشه در معادله درجه دوم
    float zarayeb1 = 3;
    float zarayeb2 = 4;
    float rishe = -1 * ( zarayeb1 / zarayeb2 ) ;
    cout << rishe << endl ;
//تشخیص نوع مثلث از اندازه ضلع ها
    int zela1 = 4;
    int zela2 = 3;
    int zela3 = 3;
    if (zela1 != zela2 && zela1 != zela3 && zela2 != zela3) {
        cout << "mosalas mokhtalefol azla ast" << endl;
    } else if (zela1 == zela2 && zela2 == zela3 && zela1 == zela3) {
        cout << "mosalas motesaviol azla ast" << endl;
    } else {
        cout << "mosalas motesaviol saghein ast" << endl;
    }
    //حداقل سکه برای داشتن پول به هر تعداد عدد طبیعی
    int pol = 27;
    int dahtaii = floor(pol / 10);
    int dotaii =floor((pol - (dahtaii * 10)) / 2);
    int taki = (pol - (dahtaii * 10)) % 2 ;
    cout << dahtaii << " ta seke 10 tomani" <<endl<< dotaii << " ta seke 2 tomani" <<endl<< taki << " ta seke 1 tomani" << endl;
}
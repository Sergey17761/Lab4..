#include <iostream>
#include <cmath>
using namespace std;

void task20() {
    cout << "задание 20" << endl;
    for (int a = 2; a <= 17; a++) {
        double t = 4 * a;
        double c = 3.5 * t * t - 7 * t + 16;
        cout << "a=" << a << " c=" << c << endl;
    }
}

void task29() {
    cout << "задание 29" << endl;
    double a;
    int n;
    cout << "введите a и n: ";
    cin >> a >> n;
    double p = 1;
    for (int i = 0; i < n; i++) {
        p = p * (a + i);
    }
    cout << "P=" << p << endl;
}

void task33() {
    cout << "задание 33" << endl;
    double p = 1;
    double x = 0.1;
    while (x <= 10.0001) {
        p = p * (1 + sin(x));
        x = x + 0.1;
    }
    cout << "результат=" << p << endl;
}

void task65() {
    cout << "задание 65" << endl;
    int n;
    cout << "введите n: ";
    cin >> n;
    long long f = 1;
    for (int i = 1; i <= n; i++) {
        f = f * i;
    }
    cout << n << "! = " << f << endl;
}

void task72() {
    cout << "задание 72" << endl;
    int n;
    cout << "введите n (2-10): ";
    cin >> n;
    long long f = 1;
    long long s = 0;
    for (int i = 1; i <= n; i++) {
        f = f * i;
        s = s + f;
    }
    cout << "сумма=" << s << endl;
}

void task83() {
    cout << "задание 83" << endl;
    double m;
    double max;
    cout << "масса 1: ";
    cin >> max;
    for (int i = 2; i <= 12; i++) {
        cout << "масса " << i << ": ";
        cin >> m;
        if (m > max) {
            max = m;
        }
    }
    cout << "самый тяжёлый: " << max << endl;
}

void task86() {
    cout << "задание 86" << endl;
    int n;
    cout << "сколько элементов: ";
    cin >> n;
    double r;
    double posl = 0;
    double par = 0;
    for (int i = 1; i <= n; i++) {
        cout << "сопротивление " << i << ": ";
        cin >> r;
        posl = posl + r;
        par = par + 1 / r;
    }
    par = 1 / par;
    cout << "последовательно: " << posl << endl;
    cout << "параллельно: " << par << endl;
}

void task90() {
    cout << "задание 90" << endl;
    double a;
    double s = 0;
    for (int i = 1; i <= 10; i++) {
        cout << "a" << i << ": ";
        cin >> a;
        s = s + a;
    }
    cout << "среднее=" << s / 10 << endl;
}

void task94() {
    cout << "задание 94" << endl;
    int n;
    cout << "сколько предметов: ";
    cin >> n;
    double m;
    double s = 0;
    for (int i = 1; i <= n; i++) {
        cout << "масса " << i << ": ";
        cin >> m;
        s = s + m;
    }
    cout << "средняя масса=" << s / n << endl;
}

void task100() {
    cout << "задание 100" << endl;
    double plosha;
    double vroz;
    double vsogo = 0;
    double vsogoPlosha = 0;
    for (int i = 1; i <= 10; i++) {
        cout << "район " << i << " площадь (га): ";
        cin >> plosha;
        cout << "район " << i << " урожайность (ц/га): ";
        cin >> vroz;
        vsogo = vsogo + plosha * vroz;
        vsogoPlosha = vsogoPlosha + plosha;
    }
    cout << "собрано пшеницы: " << vsogo << " ц" << endl;
    cout << "средняя урожайность: " << vsogo / vsogoPlosha << " ц/га" << endl;
}

int main() {
    task20();
    task29();
    task33();
    task65();
    task72();
    task83();
    task86();
    task90();
    task94();
    task100();
    return 0;
}

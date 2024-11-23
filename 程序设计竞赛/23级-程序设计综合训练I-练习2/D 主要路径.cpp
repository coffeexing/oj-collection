#include <iostream>
#include <deque>
#include <vector>
#include <cmath>
using namespace std;

vector<bool> primes(10005, false);

struct Sign {
    int digit[4];
};

struct Operate {
    Sign num;
    int price;
};

bool is_prime(int x) {
    if (x < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(x); ++i) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

void find_primes(int n) {
    for (int i = 2; i < n; ++i) {
        if (is_prime(i)) {
            primes[i] = true;
        }
    }
}

int sign_to_num(Sign s) {
    int n = 0;
    for (int i : s.digit) {
        n = n * 10 + i;
    }
    return n;
}

Sign num_to_sign(int n) {
    Sign s{};
    for (int & num : s.digit) {
        num = n % 10;
        n /= 10;
    }
    for (int i = 0; i < 2; ++i) {
        swap(s.digit[i], s.digit[3 - i]);
    }
    return s;
}

int main() {
    find_primes(10000);

    int T;
    cin >> T;
    while (T--) {
        int M, N;
        cin >> M >> N;

        vector<bool> visited(10005, false);

        bool flag = false;

        deque<Operate> q;
        q.push_back({num_to_sign(M), 0});
        visited[M] = true;

        while (!q.empty()) {
            Operate curr = q.front();
            Sign n = curr.num;
            int p = curr.price;
            q.pop_front();

            if (sign_to_num(n) == N) {
                cout << p << endl;
                flag = true;
                break;
            }

            for (int i = 0; i < 4; ++i) {
                for (int j = 0; j <= 9; ++j) {
                    Sign new_s = n;
                    new_s.digit[i] = j;
                    int new_n = sign_to_num(new_s);
                    if (primes[new_n] && new_n < 10000 && new_s.digit[0] != 0) {
                        if (!visited[new_n]) {
                            visited[new_n] = true;
                            q.push_back({new_s, p + 1});
                        }
                    }
                }
            }
        }

        if (!flag) {
            cout << "Impossible" << endl;
        }
    }
}

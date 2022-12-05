#include <iostream>

int main() {


    long long int x, y;
    while (std::cin >> x) {
        std::cin >> y;
        

        long long int ans = x - y;
        if (ans < 0) ans = -ans;

        std::cout << ans << std::endl;


    }




    return 0;
}

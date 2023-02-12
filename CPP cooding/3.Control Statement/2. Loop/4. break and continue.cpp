#include <iostream>
using namespace std;
int main()
{
    /** break আর continue সবসময় loop এর সাথে কাজ করে।
    এক বা একাধিক loop থাকলেও break যে loop এর মধ্যে থাকবে সেই loop কে ভেঙে
    দিবে এবং সেই loop এর বাহিরে চলে আসবে অর্থাৎ second bracket শেষ হবার পরবর্তী লাইনে।
    আর continue থাকলে loop শুরু হবার লাইনে নিয়ে আসবে।
    */
    for (int i = 0; i < 100; i = i + 3)
    {
        if (i == 10)
            continue;
        if (i > 13)
            break;
        cout << i << endl;
    }
}

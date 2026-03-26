#include <iostream>

using namespace std;

int main() {
    int curupira, boitata, boto, mapinguari, iara;
    
    // ৫ জন অতিথির অংশের সংখ্যা ইনপুট নেওয়া
    if (cin >> curupira >> boitata >> boto >> mapinguari >> iara) {
        
        // মোট গ্রামের হিসাব (অতিথিদের খাবার + ডোনা চিকার ২২৫ গ্রাম)
        int total_cassava = (curupira * 300) + 
                            (boitata * 1500) + 
                            (boto * 600) + 
                            (mapinguari * 1000) + 
                            (iara * 150) + 
                            225;

        cout << total_cassava << "\n";
    }

    return 0;
}
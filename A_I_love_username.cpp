#include <iostream>
#include <vector>

using namespace std;

int main() {
    // দ্রুত ইনপুট-আউটপুটের জন্য
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    int points;
    cin >> points; // প্রথম কন্টেস্টের পয়েন্ট

    // প্রথম কন্টেস্টের পয়েন্টটিই শুরুতে সর্বোচ্চ এবং সর্বনিম্ন
    int max_score = points;
    int min_score = points;
    int amazing_count = 0;

    for (int i = 1; i < n; i++) {
        cin >> points;

        // যদি বর্তমান পয়েন্ট আগের সর্বোচ্চ পয়েন্টকে ছাড়িয়ে যায়
        if (points > max_score) {
            max_score = points;
            amazing_count++;
        }
        // অথবা যদি বর্তমান পয়েন্ট আগের সর্বনিম্ন পয়েন্টের চেয়েও কম হয়
        else if (points < min_score) {
            min_score = points;
            amazing_count++;
        }
    }

    cout << amazing_count << endl;

    return 0;
}
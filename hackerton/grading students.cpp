#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> grades(n);
    for (int i = 0; i < n; i++) {
        cin >> grades[i];
    }
    for (int i = 0; i < n; i++) {
        int grade = grades[i];

        if (grade >= 38) {
            int nextMultipleOf5 = (grade / 5 + 1) * 5; 
            if (nextMultipleOf5 - grade < 3) {
                grade = nextMultipleOf5; 
            }
        }
    grades[i] = grade;
    }
    for (int i = 0; i < n; i++) {
        cout << grades[i] << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
// in binary sort we use sorted array and divide it in further sections
class binary
{
private:
    int n;

public:
    int sort()
    {
        cout << "enter the size of the array :";
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << "\t";
        }

        int x;
        cout << endl
             << "enter the item you wanna search :";
        cin >> x;
        int s = 0;
        int e = n ;
        for (int i = 0; i < n; i++)
        {
            int mid = (s + e) / 2;
            if (x == a[mid])
            {
                cout << endl
                     << "your key is on index number " << mid;
                return 1;
                break;
            }
            if (x > a[mid])
            {
                s = mid + 1;
                // cout<<"+1\n";
            }
            if (a[mid] > x)
            {
                e = mid - 1;
                cout<<"-1 \n"<<mid;
            }
        }
        return 0;
    }
};
int main()
{
    binary b1;
   // b1.sort();
    int return_value = b1.sort();
    if (return_value == 1)
    {
        cout << "\n Successfully executed !!\n Wanna do again ? press 1 , to exit press 0 :";
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            b1.sort();
        }
        else
        {
            cout << "Come again";
        }
    }
    if (return_value == 0)
    {
        cout << "Value not found";
    }
    return 0;
}
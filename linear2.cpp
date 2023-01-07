#include <iostream>
using namespace std;
class binary
{
private:
    int n;

public:
    int array_size()
    {
     //float f1;
        cout << "Enter the size of the array : ";
        cin >> n;
        int a[n];
        cout << "Fill the array : ";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            // try
            // {
            //     if (a[i] == f)
            //         throw(121);
            // }
            // catch (int x)
            // {
            //     cout << "error cant put the floating vlaue";
            // }
        }

        cout << "Applying the linear search algorithm\n\n Please wait...";
        for (int i = 0; i < 100000; i++) //just to increase the time to make user think that it is some complex kinda stuff
        {
            for (int i = 0; i < 10000; i++)
                ;
        }

        cout << "\n\nTell me what do you wanna search?";
        int x;
        cin >> x;
        for (int i = 0; i < n; i++)
        {
            if (x == a[i])
            {
                cout << "\nYour req. search has been completed the index number is : " << i << endl;

                return 0;
            }
        }
            
                return -1;
        

        // for (int j = 0; j < n; j++) for showing the array
        // {
        //     cout << a[j] << endl;
        // }
    }
};

int main()
{
    cout << "This is the algorithm for binary search" << endl;
    binary b1;
    int h = b1.array_size();
   if (h == -1)
    {
        cout << "\nThe value aint present in the array";
    }
   if (h == 0)
    {
        cout << "\n Wanna try again ? press 1 to end press 0: ";
        int y;
        cin>>y; 
        if(y == 1)
        {
            cout<<b1.array_size();
        }
        if(y == 0)
        {
            cout<<"Thank you for using me!";
        }

    }
    return 0;
}
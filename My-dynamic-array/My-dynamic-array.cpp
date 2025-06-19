//ProgrammingAdvices.com
//Mohammed Abu-Hadhoud

#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

int main()
{

    clsDynamicArray <int> MyDynamicArray(5);

    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);

    cout << "\nIs Empty?  " << MyDynamicArray.IsEmpty();
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items: \n";

    MyDynamicArray.PrintList();

    cout << "\nItem(2): " << MyDynamicArray.GetItem(2) << "\n";


    MyDynamicArray.Reverse();

    cout << "\nArray Items after reverse: \n";
    MyDynamicArray.PrintList();

    //MyDynamicArray.Clear();

    //cout << "\nArray Items after clear: \n";
    //MyDynamicArray.PrintList();

    //MyDynamicArray.DeleteItemAt(2);
    //cout << "\nArray Items after delete Item(2): \n";
    //MyDynamicArray.PrintList();

    //MyDynamicArray.DeleteFirstItem();
    //cout << "\nArray Items after delete first Item: \n";
    //MyDynamicArray.PrintList();

    //MyDynamicArray.DeleteLastItem();
    //cout << "\nArray Items after delete last Item: \n";
    //MyDynamicArray.PrintList();

    //int Index = MyDynamicArray.Find(30);
    //if (Index == -1)
    //    cout << "\nItem was not Found";
    //else
    //    cout << "\n30 is found at index : " << Index;

    //MyDynamicArray.DeleteItem(30);
    //cout << "\nArray Items after delete Item 30 : \n";
    //MyDynamicArray.PrintList();

    MyDynamicArray.InsertAt(3, 100);
    cout << "\nArray Items after insert 100 at index 3: \n";
    MyDynamicArray.PrintList();





    system("pause>0");


}
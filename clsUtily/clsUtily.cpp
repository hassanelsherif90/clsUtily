

#include <iostream>
#include "clsUtil.h"

using namespace std;

int main()
{
    clsUtil::Srand();
    cout << clsUtil::RandomFromTo(1, 10) <<  endl;
    cout << clsUtil::GetRandomCharcter(clsUtil::CapitalLetter) << endl;
    cout << clsUtil::GenratWord(clsUtil::CapitalLetter, 10) << endl;
    cout << clsUtil::GenrateKey(clsUtil::CapitalLetter) << endl;
    clsUtil::GenrateKeys(10 ,clsUtil::CapitalLetter);



    cout << "\n";

    //Swap Int
    int x = 10, y = 20;
    cout << x << " " << y << endl;
    clsUtil::Swap(x, y);
    cout << x << " " << y << endl << endl;

    //Swap double
    double a = 10.5, b = 20.5;
    cout << a << " " << b << endl;
    clsUtil::Swap(a, b);
    cout << a << " " << b << endl << endl;

    //Swap String
    string s1 = "Ali", s2 = "Ahmed";
    cout << s1 << " " << s2 << endl;
    clsUtil::Swap(s1, s2);
    cout << s1 << " " << s2 << endl << endl;

    //Swap Dates
    clsDate d1(1, 10, 2022), d2(1, 1, 2022);
    cout << d1.DateToString() << " " << d2.DateToString() << endl;
    clsUtil::Swap(d1, d2);
    cout << d1.DateToString() << " " << d2.DateToString() << endl;

    //Shuffl Array

    //int array
    int Arr1[5] = { 1,2,3,4,5 };
    clsUtil::ShuffleArray(Arr1, 5);
    cout << "\nArray after shuffle:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << Arr1[i] << endl;
    }

    string Arr4[5];
    clsUtil::FillArrayWithRandomWords(Arr4, 5, clsUtil::CapitalLetter, 8);
    cout << "\nArray after fill:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << Arr4[i] << endl;
    }


    string Arr5[5];
    clsUtil::FillArrayWithRandomKeys(Arr5, 5, clsUtil::CapitalLetter);
    cout << "\nArray after filling keys:\n";
    for (int i = 0; i < 5; i++)
    {
        
        cout << " Key [ " << i+1 << " ] : " << Arr5[i] << endl;
        
    }


    const short EncryptionKey = 1994; //this is the key.

    string TextAfterEncryption, TextAfterDecryption;
    string Text = "Hassan Ali Mohamed Ali";
    TextAfterEncryption = clsUtil::EncryptedText(Text, EncryptionKey);
    TextAfterDecryption = clsUtil::DescryptedText(TextAfterEncryption, EncryptionKey);

    cout << "\nText Before Encryption : ";
    cout << Text << endl;
    cout << "Text After Encryption  : ";
    cout << TextAfterEncryption << endl;
    cout << "Text After Decryption  : ";
    cout << TextAfterDecryption << endl;
}


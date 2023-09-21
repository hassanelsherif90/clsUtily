#pragma once

#include <iostream>
#include <cstdlib>
#include <string>
#include "clsDate.h"
using namespace std;

class clsUtil
{

public:

    enum enCharType { SamallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 , Mix = 5};

    static int RandomFromTo(int From, int To) 
    {
        int RandNum = rand() % (To - From + 1) + From;
        return RandNum;
    }

    static char GetRandomCharcter(enCharType CharType)
    {
        switch (CharType) {
        case enCharType::SamallLetter:
            return char(RandomFromTo(97, 122));
            break;
        case enCharType::CapitalLetter:
            return char(RandomFromTo(65, 90));
            break;
        case enCharType::SpecialCharacter:
            return char(RandomFromTo(33, 47));
            break;
        case enCharType::Digit:
            return char(RandomFromTo(48, 57));
            break;
        case enCharType::Mix:
            return char(RandomFromTo(33, 122));
            break;
        }
        return CharType;
    }

    static string GenratWord(enCharType Chartype, short Length)
    {
        string word = "";
        for (int i = 1; i <= Length; i++)
        {
            word = word + GetRandomCharcter(Chartype);
        }
        return word;
    }

    static string GenrateKey(enCharType Chartype)
    {
        string Key = "";
        Key = GenratWord(Chartype, 4) + "-";
        Key = Key + GenratWord(Chartype, 4) + "-";
        Key = Key + GenratWord(Chartype, 4) + "-";
        Key = Key + GenratWord(Chartype, 4);
        return Key;
    }

    static void GenrateKeys(short NumberKeys, enCharType Chartype)
    {
        for (int i = 1; i <= NumberKeys; i++)
        {
            cout << "Key [" << i << "] : " << GenrateKey(Chartype) << endl;
        }
    }

    static void Srand()
    {
        srand((unsigned)time(NULL));
    }

    static void Swap(int& A, int& B)
    {
        int Swap = A;
        A = B;
        B = Swap;
    }

    static void Swap(float & A, float& B)
    {
        float Swap = A;
        A = B;
        B = Swap;
    }
    
    static void Swap(double & A, double& B)
    {
        double Swap = A;
        A = B;
        B = Swap;
    }

    static void Swap(char & A, char & B)
    {
        float Swap = A;
        A = B;
        B = Swap;
    }

    static void Swap(string & A, string & B)
    {
        string Swap = A;
        A = B;
        B = Swap;
    }

    static void Swap(clsDate & A, clsDate & B)
    {
        clsDate Swap = A;
        A = B;
        B = Swap;
    }

    static void FillArray(int arr[100], int& arrlength)
    {
        for (int i = 0; i < arrlength; i++)
        {
            arr[i] = RandomFromTo(1, 100);
        }
    }

    static void FillArray(string arr[100], int& arrlength)
    {
        for (int i = 0; i < arrlength; i++)
        {
            arr[i] = RandomFromTo(1, 100);
        }
    }

    static void FillArrayWithRandomNumbers(int arr[100], int arrlength, int From, int To)
    {
        for (int i = 0; i < arrlength; i++)
        {
            arr[i] = RandomFromTo(From , To);
        }
    }
   
    static void FillArrayWithRandomWords(string arr[100], int arrlength, enCharType CharType , short Length)
    {
        for (int i = 0; i < arrlength; i++)
        {
            arr[i] = GenratWord(CharType, Length);
        }
    }
    
    static void FillArrayWithRandomKeys(string arr[100], int arrlength, enCharType CharType)
    {
        for (int i = 0; i < arrlength; i++)
        {
            arr[i] = GenrateKey(CharType);
        }
    }

    static void ShuffleArray(int Arr[100], int ArrLength)
    {
        for (int i = 0; i < ArrLength; i++)
        {
            Swap(Arr[(RandomFromTo(1, ArrLength - 1))], Arr[(RandomFromTo(1, ArrLength - 1))]);
        }
    }
    
    static void ShuffleArray(string Arr[100], int ArrLength)
    {
        for (int i = 0; i < ArrLength; i++)
        {
            Swap(Arr[(RandomFromTo(1, ArrLength - 1))], Arr[(RandomFromTo(1, ArrLength - 1))]);
        }
    }

    static string EncryptedText(string Text, short EncryptionKey)
    {
        for (int i = 0; i <= Text.length(); i++)
        {
            Text[i] = char((int)Text[i] + EncryptionKey);
        }
        return Text;
    }

    static string DescryptedText(string Text, short EncryptionKey)
    {
        for (int i = 0; i <= Text.length(); i++)
        {
            Text[i] = char((int)Text[i] - EncryptionKey);
        }
        return Text;
    }
       
};


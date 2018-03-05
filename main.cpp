////////////////////////////////////////////////////////////////////////////////
// Module Name:  main.cpp
// Authors:      Sergey Shershakov
// Version:      0.2.0
// Date:         30.01.2017
//
// This is a part of the course "Algorithms and Data Structures" 
// provided by  the School of Software Engineering of the Faculty 
// of Computer Science at the Higher School of Economics.
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>

#include "safearray.h"
#include "subject.h"


using namespace std;

static const char* TEST_FNAME = "D:\\HSE\\C++\\3_project\\prj-1.1\\prj\\res\\raw\\subjects1.txt";
static const int SUBS_NUM = 1;

void loadSubjects(const char* fn, xi::SafeArray<xi::Subject>& subjs)
{
    using namespace std;

    // пытаемся открыть файл для чтения
    ifstream inf(fn);
    bool fileNotOpen = !inf;
//    ASSERT_FALSE(fileNotOpen);

    // пытаемся вычитать текстовый файл строку за строкой
    try
    {
        for (int i = 0; i < SUBS_NUM; i++)
        {
            inf >> subjs[i];
        }
    }
    catch (out_of_range e)
    {
        cerr << "Error reading file" << fn << endl;
    }

    inf.close();
}

int main()
{
    using namespace xi;

    cout << "Hello, World!" << endl;


    // Simple safearray
//    SafeArray<int> sa;

    //my tests!
    SafeArray<int> sa(3);
    bool f1 = sa.getRawPtr() == nullptr;
    bool f2 = sa.getCapacity() == 3;
    cout<<f1<<" "<<f2<<endl;
    sa[0] = 7;
    sa[1] = 2;
    sa[2] = 6;
//    SafeArray<int> sd = sa;
//    bool f = sa.getRawPtr() == sd.getRawPtr();
//    cout<<f;
//    const SafeArray<int> t = *sa;
    SafeArray<int> sd(sa);
    sa.~SafeArray();
//
    cout<<sd.getCapacity()<<endl;
    for (int i = 0; i < sd.getCapacity(); ++i) {
        cout<<sd[i]<<" ";
    }
//    f1 = sa[0] == 7;
//    const int el = sa[1];
//    f2 == el == sa[1];
//    cout<<f1<<" "<<f2<<endl;
//
//    SafeArray<int> sb(1);
//    f1 = sb.getRawPtr() == nullptr;
//    f2 = sb.getCapacity() == 1;
//    cout<<f1<<" "<<f2<<endl;
//    SafeArray<int> sc = sb;
//    f1 = sc.getRawPtr() == nullptr;
//    f2 = sc.getCapacity() == 1;
//    cout<<f1<<" "<<f2<<endl;
    //my tests!

    //MY TEST
//    Subject s;
//    xi::SafeArray<xi::Subject> subjs(SUBS_NUM);
//    loadSubjects(TEST_FNAME, subjs);
//
//    /*
//    EXPECT_EQ(subjs[1].name, "SSD2");
//    EXPECT_EQ(subjs[1].title, "Introduction to Computer Systems");
//
//    // след. две строки эквивалентны
//    EXPECT_EQ(subjs[1].description.getCapacity(), subjs[1].MAX_LINES);
//    EXPECT_EQ(subjs[1].description.getCapacity(), xi::Subject::MAX_LINES);
//     */
////    bool f1 = subjs[1].name == "SSD2";
////    bool f2 = subjs[1].title == "Introduction to Computer Systems";
////    cout<<f1<<" "<<f2<<endl;
////
////    f1 = subjs[1].description.getCapacity() == subjs[1].MAX_LINES;
////    f2 = subjs[1].description.getCapacity() == xi::Subject::MAX_LINES;
////    cout<<f1<<" "<<f2<<endl;
//
//    for (int i = 0; i < SUBS_NUM; ++i) {
//        cout<<subjs[i];
//    }

    //MY TEST
    return 0;
}
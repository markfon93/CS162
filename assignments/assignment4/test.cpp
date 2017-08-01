#include <iostream>
#include <fstream>
int main(int argc, char * argv[])
{
    std::fstream myfile("D:\\data.txt", std::ios_base::in);

    float a;
    while (myfile >> a)
    {
        printf("%f ", a);
    }

    getchar();

    return 0;
}
Result:

45.779999 67.900002 87.000000 34.889999 346.000000 0.980000

If you know exactly, how many elements there are in a file, you can chain >> operator:

int main(int argc, char * argv[])
{
    std::fstream myfile("D:\\data.txt", std::ios_base::in);

    float a, b, c, d, e, f;

    myfile >> a >> b >> c >> d >> e >> f;

    printf("%f\t%f\t%f\t%f\t%f\t%f\n", a, b, c, d, e, f);

    getchar();

    return 0;
}
string testline;
 string word[6][3];

 ifstream Test ( "Data.txt" );

 if (!Test)
 {
     cout << "There was an error opening the file.\n";
     return 0;
 }
 //store words in array
 int x=0,y=0;
 while( Test>>testline )
 {
     word[y][x]=testline;
     x++;
     if (testline=="")
     y++;
 }
 //output whole array with array position numbers for each entry
 cout<<"Array contents:\n";
     for (int y=0;y<6;y++)
     {
         for (int x=0;x<3;x++)
         cout<<word[y][x]<<"("<<y<<","<<x<<")"<<endl;
     }
 return 0;
}

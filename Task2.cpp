#include <iostream>
using namespace std;
int main()
{
 int a;
 int b;
 int x,y,result;
 next1:
 cout<<"enter 1st number "<<endl;
cin>>a;
 next2:
cout<<"enter 2nd number "<<endl;
cin>>b;
 char operation;
 cout<<"enter operations (+,-,*,/)"<<endl;
 cin>>operation;
switch(operation){
    case '+':
    cout<<a<<'+'<<b<<'='<<a+b<<endl;
    result=a+b;
    break ;
     case '-':
    cout<<a<<'-'<<b<<'='<<a-b<<endl;
    result=a-b;
    break ;
     case '*':
    cout<<a<<'*'<<b<<'='<<a*b<<endl;
    result=a*b;
    break ;
     case '/':
    cout<<a<<'/'<<b<<'='<<a/b<<endl;
    result=a/b;
    break ;
    default:
    cout<<"no operation is found"<<endl;
    break ;
}
    cout << "Press 4 to continue  and 1 to exit\n";
    cin >> x;
    if (x == 4)
    {
        cout << "Do you want to use result of the above operation as first no in further calculation" << endl
             << "Press 4 to yes and 1 to no." << endl;
        cin >> y;
        if (y == 4)
        {
            a = result;
            goto next2;
        }
        else if (y == 1)
        {
            goto next1;
        }
        else
        {
            cout << "Enter a valid input";
        }

        goto exit;
    }
    else if (x== 1)
    {
        goto exit;
    }
    else
    {
        cout << "Enter a valid Input\n";
    }

exit:

    return 0;

}

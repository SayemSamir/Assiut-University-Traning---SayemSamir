#include<iostream>
using namespace std;
    int main()
{
    int N;
    cin>>N;
    int found = 0;
    for (int i = 2; i <= N; i += 2) {
        cout<<i<<endl;
        found = 1;
    }
    if (found==0) {
            cout<<"-1\n";
    }
}

  


/*
#include <iostream>
using namespace std;
int main()
{
	int counter;
	cin >> counter;
	if (counter == 1)
	{
		cout << -1;
		return 0;
	}
	for (int i = 1; i <= counter; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << endl;
		}
	}
}
*/

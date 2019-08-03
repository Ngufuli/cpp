using namespace std;
#include<iostream>
class token_generator
{
	static int token_no;
	public:
		static void show_token()
		{
			cout<<++token_no<<"\n";
		}
};
int token_generator::token_no=0;
int main()
{
	int i;
	for(i=0;i<=19;i++)
	token_generator::show_token();
}

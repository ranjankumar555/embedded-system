#include <iostream>
using namespace std;
#define SIZE 5


template <class type>
class Stack
{
	private:
		int top;
		type stk[SIZE];

	public:
		Stack()
		{
			top = -1;
			for (int i = 0; i < SIZE; i++)
			{
				stk[i] = 0;
			}
		}
		void push();
		void pop();
		void get_top();
		void display_stack();
		bool isempty();
};
	template <class type>
void Stack<type>::push()
{
	if (top >= SIZE - 1)
	{
		cout << "\033[33mstack is overflow\033[0m" << endl;
		return;
	}

	cout << "enter element: ";
	cin >> stk[++top];
	cout << "\033[32m" << stk[top] << " pushed\033[0m" << endl;

}
	template <class type>
void Stack<type>::pop()
{
	if (top <= -1)
	{
		cout << "\033[33mstack is empty\033[0m" << endl;
		return;
	}
	cout << "\033[32m" << stk[top--] << " popped\033[0m" << endl;

}
	template <class type>
void Stack<type>::get_top()
{
	if (isempty())
	{
		cout << "\033[33mempty stack detected...\033[0m" << endl;
		return;
	}
	cout << "\033[32m Top element: " << stk[top] <<"\033[0m"<< endl;
}
	template <class type>
void Stack<type>::display_stack()
{
	int i;
	if (isempty())
	{
		cout << "\033[33mempty stack detected...\033[0m" << endl;
		return;
	}
	for (i = top; i >= 0; i--)
	{
		cout <<"\033[32m"<<  stk[i] << " \033[0m";
	}
	cout << endl;
}
	template <class type>
bool Stack<type>::isempty()
{
	return top <= -1;
}

void displaySubMenu(void);
void display_warning(int& wrongOptionCount1);
template<class type>
void continue_oldStack_newStack(Stack<type>&);

int main()
{

	int op, op1, op2, wrongOptionCount = 0, wrongOptionCount1 = 0, flag = 0;

	Stack<int> i_stk;
	Stack<char> c_stk;
	Stack<float> f_stk;
	Stack<double> d_stk;
	//Stack<string> s_stk;
	while (1)
	{
		cout << "******** Main Menu *******" << endl;
		cout << "----------------------------------------" << endl;
		cout << "1) integer stack" << endl;
		cout << "2) char stack" << endl;
		cout << "3) float stack" << endl;
		cout << "4) double stack" << endl;
		cout << "5) string stack" << endl;
		cout << "6) exit" << endl;
		cout << "select option: "; // colour coding

		cin >> op;
		cout << "----------------------------------------" << endl;
		switch (op)
		{
			case 1:
				cout << "\033[32mint stack application ready to use\033[0m " << endl; //green
				if (wrongOptionCount == 1)
				{
					continue_oldStack_newStack(i_stk);
				}
				while (1)
				{
					displaySubMenu();
					cin >> op1;
					cout << "----------------------------------------" << endl;
					switch (op1)
					{
						case 1:
							if (wrongOptionCount1 == 1)
							{
								continue_oldStack_newStack(i_stk);
							}

							i_stk.push();
							wrongOptionCount1 = 0;
							break;

						case 2:
							if (wrongOptionCount1 == 1)
							{
								continue_oldStack_newStack(i_stk);
							}
							i_stk.pop();

							wrongOptionCount1 = 0;

							break;
						case 3:
							if (wrongOptionCount1 == 1)
							{
								continue_oldStack_newStack(i_stk);
							}
							i_stk.get_top();

							wrongOptionCount1 = 0;

							break;
						case 4:
							if (wrongOptionCount1 == 1)
							{
								continue_oldStack_newStack(i_stk);
							}
							i_stk.display_stack();

							wrongOptionCount1 = 0;

							break;
						case 5:
							flag = 1;
							break; // go to main menu

						default:
							display_warning(wrongOptionCount1);
					}
					if (flag)
					{
						flag = 0;
						break;
					}
				}
				wrongOptionCount = 0;
				break;

			case 2:
				cout << "\033[32mchar stack application ready to use\033[0m" << endl;
				if (wrongOptionCount == 1)
				{
					continue_oldStack_newStack(c_stk);
				}
				while (1)
				{
					displaySubMenu();
					cin >> op1;
					cout << "----------------------------------------" << endl;
					switch (op1)
					{
						case 1:
							if (wrongOptionCount1 == 1)
							{
								continue_oldStack_newStack(c_stk);
							}

							c_stk.push();
							wrongOptionCount1 = 0;
							break;

						case 2:
							if (wrongOptionCount1 == 1)
							{
								continue_oldStack_newStack(c_stk);
							}
							c_stk.pop();

							wrongOptionCount1 = 0;

							break;
						case 3:
							if (wrongOptionCount1 == 1)
							{
								continue_oldStack_newStack(c_stk);
							}
							c_stk.get_top();

							wrongOptionCount1 = 0;

							break;
						case 4:
							if (wrongOptionCount1 == 1)
							{
								continue_oldStack_newStack(c_stk);
							}
							c_stk.display_stack();

							wrongOptionCount1 = 0;

							break;
						case 5:
							flag = 1;
							break; // go to main menu

						default:
							display_warning(wrongOptionCount1);
					}
					if (flag)
					{
						flag = 0;
						break;
					}
				}
				wrongOptionCount = 0;
				break;

			case 3:
				cout << "\033[32mfloat stack application ready to use\033[0m " << endl;
				if (wrongOptionCount == 1)
				{
					continue_oldStack_newStack(f_stk);
				}
				while (1)
				{
					displaySubMenu();
					cin >> op1;
					cout << "----------------------------------------" << endl;
					switch (op1)
					{
						case 1:
							if (wrongOptionCount1 == 1)
							{
								continue_oldStack_newStack(f_stk);
							}

							f_stk.push();
							wrongOptionCount1 = 0;
							break;

						case 2:
							if (wrongOptionCount1 == 1)
							{
								continue_oldStack_newStack(f_stk);
							}
							f_stk.pop();

							wrongOptionCount1 = 0;

							break;
						case 3:
							if (wrongOptionCount1 == 1)
							{
								continue_oldStack_newStack(f_stk);
							}
							f_stk.get_top();

							wrongOptionCount1 = 0;

							break;
						case 4:
							if (wrongOptionCount1 == 1)
							{
								continue_oldStack_newStack(f_stk);
							}
							f_stk.display_stack();

							wrongOptionCount1 = 0;

							break;
						case 5:
							flag = 1;
							break; // go to main menu

						default:
							display_warning(wrongOptionCount1);
					}
					if (flag)
					{
						flag = 0;
						break;
					}
				}
				wrongOptionCount = 0;
				break;

			case 4:
				cout << "\033[32mdouble stack application ready to use\033[0m" << endl;
				if (wrongOptionCount == 1)
				{
					continue_oldStack_newStack(d_stk);
				}
				while (1)
				{
					displaySubMenu();
					cin >> op1;
					cout << "----------------------------------------" << endl;
					switch (op1)
					{
						case 1:
							if (wrongOptionCount1 == 1)
							{
								continue_oldStack_newStack(d_stk);
							}

							d_stk.push();
							wrongOptionCount1 = 0;
							break;

						case 2:
							if (wrongOptionCount1 == 1)
							{
								continue_oldStack_newStack(d_stk);
							}
							d_stk.pop();

							wrongOptionCount1 = 0;

							break;
						case 3:
							if (wrongOptionCount1 == 1)
							{
								continue_oldStack_newStack(d_stk);
							}
							d_stk.get_top();

							wrongOptionCount1 = 0;

							break;
						case 4:
							if (wrongOptionCount1 == 1)
							{
								continue_oldStack_newStack(d_stk);
							}
							d_stk.display_stack();

							wrongOptionCount1 = 0;

							break;
						case 5:
							flag = 1;
							break; // go to main menu

						default:
							display_warning(wrongOptionCount1);
					}
					if (flag)
					{
						flag = 0;
						break;
					}
				}
				wrongOptionCount = 0;
				break;

			case 5:
				cout << "\033[32mstring stack application ready to use\033[0m " << endl;
				/*if (wrongOptionCount == 1)
				  {
				  continue_oldStack_newStack(s_stk);
				  }
				  while (1)
				  {
				  displaySubMenu();
				  cin >> op1;
				  cout << "----------------------------------------" << endl;
				  switch (op1)
				  {
				  case 1:
				  if (wrongOptionCount1 == 1)
				  {
				  continue_oldStack_newStack(s_stk);
				  }

				  s_stk.push();
				  wrongOptionCount1 = 0;
				  break;

				  case 2:
				  if (wrongOptionCount1 == 1)
				  {
				  continue_oldStack_newStack(s_stk);
				  }
				  s_stk.pop();

				  wrongOptionCount1 = 0;

				  break;
				  case 3:
				  if (wrongOptionCount1 == 1)
				  {
				  continue_oldStack_newStack(s_stk);
				  }
				  s_stk.get_top();

				  wrongOptionCount1 = 0;

				  break;
				  case 4:
				  if (wrongOptionCount1 == 1)
				  {
				  continue_oldStack_newStack(s_stk);
				  }
				  s_stk.display_stack();

				  wrongOptionCount1 = 0;

				  break;
				  case 5:
				  flag = 1;
				  break; // go to main menu

				  default:
				  display_warning(wrongOptionCount1);
				  }
				  if (flag)
				  {
				  flag = 0;
				  break;
				  }
				  }*/
				wrongOptionCount = 0;
				break;
			case 6:
				cout << "\033[35mThank you for using our application\033[0m" << endl; //magenta
				cout << "\033[35mBye...\033[0m" << endl;
				exit(0);
			default:
				display_warning(wrongOptionCount);
		}
	}

	return 0;
}

void displaySubMenu(void)
{
	cout << "******** Sub Menu *******" << endl;
	cout << "----------------------------------------" << endl;
	cout << "1) push" << endl;
	cout << "2) pop" << endl;
	cout << "3) top" << endl;
	cout << "4) display stack" << endl;
	cout << "5) main menu" << endl;
	cout << "select option: ";
}

void display_warning(int &wrongOptionCount1)
{
	if (wrongOptionCount1 == 0)
		cout << "\033[33mplease read the options carefully\033[0m" << endl; // yellow color coding
	if (wrongOptionCount1 == 1)// 2nd chance
	{							 
		cout << "\033[31mLast chance, please take care\033[0m" << endl; // red
	}
	if (wrongOptionCount1 == 2)// like 0th indexing; 3rd chance
	{								
		cout << "************************************" << endl; // dark red
		cout<<"\033[31mexiting...\033[0m"<<endl;
		cout << "Thanks for using our application" << endl;
		cout << "please read the manual and comeback properly" << endl;
		cout << "*************************************" << endl;
		exit(0);
	}
	wrongOptionCount1++;
}
	template<class type>
void continue_oldStack_newStack(Stack<type> &stk)
{
	int op2;
l1:
	cout << "continue 1)old_stack 2)new_stack [1/2]: ";
	cin >> op2;
	if (op2 == 1)
	{
		;
	}
	else if (op2 == 2)
	{
		cout << "new_stack created" << endl;
		// constructor call krke reset kro
		stk = Stack<type>();
	}
	else
	{
		cout << "\033[31minvalid input...\033[0m" << endl;
		cout << "enter [1]old_stack, [2]new_stack" << endl;
		// goto use krke phir se ask kro new stack or old stack;
		goto l1;
	}
}

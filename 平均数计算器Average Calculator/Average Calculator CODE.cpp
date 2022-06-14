//著作人:核心 工作室 《没什么用》 v 1.0.2   R 02 https://corestudi0.github.io
#include <iostream>
using namespace std;
int main()
{
	int lang,times=1;
	cout<<"Copyright (C) CoreStudio 2022 https://corestudi0.github.io Bug Report:a1447754529@gmail.com"<<endl<<"Version 1.0.2 R2 Beta Build"<<endl;
	cout<<"这是CoreStudio开发的《没什么用》系列软件"<<endl<<"如有什么bug请反馈至 a1447754529@gmail.com 或 https://corestudi0.github.io 中询问管理员"<<endl<<endl<<"请选择您的语言Select your Language:简体中文(1)/English(2)"<<endl;
	cin>>lang;
	if(lang==1)
	{
		for(int i=1;i==1;times+=1)
		{
		cout<<"欢迎使用平均数计算器，请输入计算中数字的总数(如 1 2 3 4 5 共5个计算的数字)  "<<endl<<"这是第 "<<times<<" 次运算"<<endl;
		int n,use=1;
		cin>>n;
		double a[n],sum=0; 
		cout<<"请输入这"<<n<<"个数字";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		cout<<"这"<<n<<"个数字的平均数是 "<<sum*1.0/n<<endl<<"本次运算结束，请问是否继续(输入0以外任意数字继续,0停止)？(random/0)";
		cin>>use;
		if(use>=1)
		{
			continue;
		}
		if(use==0)
		{
			break;
		}	
	}
	cout<<"感谢您的使用!";
	}
	if(lang==2)
	{
		for(int i=1;i==1;times+=1)
	{
		cout<<"Welcome to the average calculator, please enter the number of numbers to be calculated (eg 1 2 3 4 5 for a total of 5 calculated numbers)  "<<endl<<"This is the  "<<times<<"  operation"<<endl;
		int n,use=1;
		cin>>n;
		double a[n],sum=0; 
		cout<<"Please enter this(these) "<<n<<" number(s)";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		cout<<"The average of this(these) "<<n<<" number(s) is "<<sum*1.0/n<<endl<<"This operation is over, do you want to continue (input any number other than 0 to continue, 0 to stop)?";
		cin>>use;
		if(use>=1)
		{
			continue;
		}
		else if(use==0)
		{
			break;
		}
	}
	cout<<"Thanks for your use!";
	}
	return 0;
}	
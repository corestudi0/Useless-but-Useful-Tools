//������:���� ������ ��ûʲô�á� v 1.0.2   R 02 https://corestudi0.github.io
#include <iostream>
using namespace std;
int main()
{
	int lang,times=1;
	cout<<"Copyright (C) CoreStudio 2022 https://corestudi0.github.io Bug Report:a1447754529@gmail.com"<<endl<<"Version 1.0.2 R2 Beta Build"<<endl;
	cout<<"����CoreStudio�����ġ�ûʲô�á�ϵ�����"<<endl<<"����ʲôbug�뷴���� a1447754529@gmail.com �� https://corestudi0.github.io ��ѯ�ʹ���Ա"<<endl<<endl<<"��ѡ����������Select your Language:��������(1)/English(2)"<<endl;
	cin>>lang;
	if(lang==1)
	{
		for(int i=1;i==1;times+=1)
		{
		cout<<"��ӭʹ��ƽ��������������������������ֵ�����(�� 1 2 3 4 5 ��5�����������)  "<<endl<<"���ǵ� "<<times<<" ������"<<endl;
		int n,use=1;
		cin>>n;
		double a[n],sum=0; 
		cout<<"��������"<<n<<"������";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		cout<<"��"<<n<<"�����ֵ�ƽ������ "<<sum*1.0/n<<endl<<"������������������Ƿ����(����0�����������ּ���,0ֹͣ)��(random/0)";
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
	cout<<"��л����ʹ��!";
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
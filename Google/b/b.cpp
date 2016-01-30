//system("cls"); //��������
#include "iostream"
#include "fstream"
#include "iomanip"
using namespace std;
#define stu_num 100
#define tea_num 100

////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
class people
{
protected:
	char num[10];

	 
public:
	int used;
	people()
	{
		used=0;
	}
	void Add_data()
	{
		cout<<"���������:"<<endl;
		cin>>num;
	
		used=1;
	}
};
////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
class student:public people
{
private:
	int chinese;
	int english;
	int math;
	char name[20];
	char major[20];
	char sex[20];
	char bir[20];
	int age;
public:
	void Add_data()
	{
		people::Add_data();
		cout<<"����������:"<<endl;
		cin>>name;
		cout<<"�������Ա�:"<<endl;
		cin>>sex;
		cout<<"������רҵ:"<<endl;
		cin>>major;
		cout<<"���������ʱ��:"<<endl;
		cin>>bir;
		cout<<"����������:"<<endl;
		while(!(cin>>age)	) 
		{		 
			cin.clear();		 
			cin.sync();		
			cout << "��������"<<endl;	
			cout<<"���������䣺"<<endl;
		}

		cout<<"���������ĳɼ���"<<endl;
		while(!(cin>>chinese)	) 
		{		 
			cin.clear();		 
			cin.sync();		
			cout << "��������"<<endl;	
			cout<<"���������ĳɼ���"<<endl;
		}
		cout<<"������Ӣ��ɼ���"<<endl;
		while(!(cin>>english)	) 
		{		 
			cin.clear();		 
			cin.sync();		
			cout << "��������"<<endl;	
			cout<<"������Ӣ��ɼ���"<<endl;
		}
		cout<<"��������ѧ�ɼ���"<<endl;
		while(!(cin>>math)	) 
		{		 
			cin.clear();		 
			cin.sync();		
			cout << "��������"<<endl;	
			cout<<"��������ѧ�ɼ���"<<endl;
		}

	}
	void DisplayData()
	{
		cout<<setiosflags(ios::left)    //���������������ո��ں�

		<<setw(9)<<num
		<<setw(9)<<name
		<<setw(9)<<sex
		<<setw(9)<<major
		<<setw(9)<<bir
		<<setw(9)<<age
		<<setw(9)<<chinese
		<<setw(9)<<english
		<<setw(9)<<math<<endl;
	

	}
};
////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
class teacher:public people
{
private: 
	char job;
	char name1[20];
	char major1[20];
	char sex1[20];
	char bir1[20];
	int age1;
	double $;

public:
	void Add_data()
	{
		people::Add_data();
		cout<<"����������:"<<endl;
		cin>>name1;
		cout<<"�������Ա�:"<<endl;
		cin>>sex1;
		cout<<"������רҵ:"<<endl;
		cin>>major1;
		cout<<"���������ʱ��:"<<endl;
		cin>>bir1;
		cout<<"����������:"<<endl;
		while(!(cin>>age1)	) 
		{		 
			cin.clear();		 
			cin.sync();		
			cout << "��������"<<endl;	
			cout<<"���������䣺"<<endl;
			
		}

		cout<<"������ְ��:"<<endl;
		cin>>job;
		cout<<"�����빤�ʣ�"<<endl;
		cin>>$;
		while(!(cin>>$)	) 
		{		 
			cin.clear();		 
			cin.sync();		
			cout << "��������"<<endl;	
			cout<<"�����빤�ʣ�"<<endl;
			cin>>$;
		}

		while($<0)
		{ 
			cout<<"���ʸ���!!!"<<endl;
			cout<<"�����빤�ʣ�"<<endl;
			cin>>$;
		}

	}
	void DisplayData()
	{
		cout<<setiosflags(ios::left)    //���������������ո��ں�

		<<setw(10)<<num
		<<setw(10)<<name1
		<<setw(10)<<sex1
		<<setw(10)<<major1
		<<setw(10)<<bir1
		<<setw(10)<<age1
		<<setw(10)<<job
		<<setw(10)<<$<<endl;
		
	}
};
////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
void Face()
{
	cout<<"     ******************��ӭ������Ա��Ϣ����ϵͳ*****************"<<endl; 
	cout<<"     *            *  1.�������                                *"<<endl;
	cout<<"     *            *  2.ɾ������                                *"<<endl;
	cout<<"     *            *  3.�޸�����                                *"<<endl; 
	cout<<"     *            *  4.���Ҽ�¼                                *"<<endl;
	cout<<"     *            *  5.Ӣ��ɼ����ѧ����ѯ,������߽�ʦ��ѯ   *"<<endl;
	cout<<"     *            *  6.��ʾȫ����Ա��¼                        *"<<endl;
	cout<<"     *            *  7.��������                                *"<<endl;
	cout<<"     *            *  8.��ȡ����                                *"<<endl;
	cout<<"     *            *  9.�˳�ϵͳ                                *"<<endl;
	cout<<"     ***********************************************************"<<endl;

}
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
void SSearchData(student*stu,teacher*tea)
{
	int snum;
	system("cls"); //��������
	cout<<"������ѧ�ţ����ţ�"<<endl;
	cin>>snum;
	for(int i=0;i<stu_num;i++)
		if(stu[i].used==snum)
		{
			stu[i].DisplayData();
	}
	
}
////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
void MSearchData()
{
	system("cls"); //��������
	cout<<"������ѧ�ţ����ţ�"<<endl;
}
////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
void XSearchData()
{
	system("cls"); //��������
	cout<<"������ѧ�ţ����ţ�"<<endl;
}

////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
void ADDdata(student*stu,teacher*tea)

{
	int i;
	char type_1;
	//student stu[100];
	//teacher tea[100];
	cout<<"����ѧ������������ s�����ӽ�ʦ���������� t(�����ִ�Сд))"<<endl;
	cin>>type_1;
	if(type_1=='s' || type_1=='S')
	{
		for(i=0;i<stu_num;i++)
		{
			if(stu[i].used==0)
			{
				stu[i].Add_data();
				stu[i].used=1;
				system("cls");///////////////////////////////////////ѧ��������� ����
				Face();
				cout<< "���ѧ�����!"<<endl;
				break;
			}
		}
	}
	else if(type_1=='t' || type_1=='T')
	{
		for(i=0;i<tea_num;i++)
		{
			if(tea[i].used==0)
			{
				tea[i].Add_data();
				tea[i].used=1;
				system("cls");///////////////////////////////////////////��ʦ������� ����
				Face();
				cout<<"��ӽ�ʦ���!"<<endl;
				break;
			}
		}
	}
	else
	{
		system("cls"); 
		Face();
		cout<<"ѡ������ѧ�����ʦ����ʱ�������!!!"<<endl;///////////////////��������
	}
}
////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
void DisplayData(student*stu,teacher*tea)
{
	system("cls"); //��������
	cout<<"ѧ����"<<endl<<endl;
	cout<<setiosflags(ios::left) 
		<<setw(9)<<"ѧ��"
		<<setw(9)<<"����"
		<<setw(9)<<"�Ա�"
		<<setw(9)<<"רҵ"
		<<setw(9)<<"��������"
		<<setw(9)<<"����"
		<<setw(9)<<"���ĳɼ�"
		<<setw(9)<<"Ӣ��ɼ�"
		<<setw(9)<<"��ѧ�ɼ�"<<endl;
	

	for(int i=0;i<stu_num;i++)
	{
		if(stu[i].used==1)
		{
			stu[i].DisplayData();
		}
	}
	cout<<"################################################################################"<<endl;
	cout<<"��ʦ��"<<endl<<endl;
	cout<<setiosflags(ios::left) 
		<<setw(10)<<"����"
		<<setw(10)<<"����"
		<<setw(10)<<"�Ա�"
		<<setw(10)<<"רҵ"
		<<setw(10)<<"��������"
		<<setw(10)<<"��������"
		<<setw(10)<<"����"
		<<setw(10)<<"����"<<endl;
	for( int i=0;i<tea_num;i++)
	{
		if(tea[i].used==1)
		{
			tea[i].DisplayData();
		}
	}
	
}
////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
void DeleteData()
{
	int number;
	cout<<"������Ҫɾ���ĺ��룺"<<endl;
	cin>>number;

}
////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
void SearchData(student* stu,teacher* tea)
{
	int code_2;
	system("cls"); //��������
	cout<<"��ѧ�ţ��̹��ţ������밴1�������������밴2�����Ա������밴3��"<<endl;
	while(!(cin>>code_2)	) 
		{		 
			cin.clear();		 
			cin.sync();		
			system("cls"); //��������
			Face();
			cout << "�������!!!"<<endl;	
			cout<<"��ѧ�ţ��̹��ţ������밴1�������������밴2�����Ա������밴3��"<<endl;
		}
	switch(code_2)
	{
	case 1:
		SSearchData(stu,tea);
		break;
	case 2:
		MSearchData();
		break;
	case 3:
		XSearchData();
		break;
	}



}

////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////

//void Save2disk()
//{
//	ofstream Sfout("Student.dat",ios::out);
//	if(!Sfout)
/*	{
		cout<<"�޷������ļ�!!"<<endl;

		
			  //return 1;
	}
	for( int i=0;i<tea_num;i++)
	{
		if(tea[i].used==1)
		{
			tea[i].DisplayData();
		}
	
	}
	Sfout.close();
}*/
////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////


void main()
{
	
	student stu[100];
	teacher tea[100];
	int code_1;
	int a=0;
	Face();
	while(a==0)
	{
		
		cout<<"������������ţ�"<<endl;
		while(!(cin>>code_1)	) 
		{		 
			cin.clear();		 
			cin.sync();		
			system("cls"); //��������
			Face();
			cout << "�������!!!"<<endl;	
			cout<<"������������ţ�"<<endl;
		}
		switch(code_1)
			{
			case 1:
				ADDdata(stu,tea);
					break;
			case 2:
				DeleteData();
				Face();
				break;
			case 4:
				SearchData(stu,tea);
				Face();
				break;




			case 6:
				DisplayData(stu,tea);
				Face();
				break;
			case 8:
				//Save2disk();
				Face();
				break;

			case 9:
				a=1;
				break;
			default:
				;
		}
	}
}

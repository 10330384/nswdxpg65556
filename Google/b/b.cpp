//system("cls"); //清屏函数
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
		cout<<"请输入号数:"<<endl;
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
		cout<<"请输入姓名:"<<endl;
		cin>>name;
		cout<<"请输入性别:"<<endl;
		cin>>sex;
		cout<<"请输入专业:"<<endl;
		cin>>major;
		cout<<"请输入出生时间:"<<endl;
		cin>>bir;
		cout<<"请输入年龄:"<<endl;
		while(!(cin>>age)	) 
		{		 
			cin.clear();		 
			cin.sync();		
			cout << "不是数字"<<endl;	
			cout<<"请输入年龄："<<endl;
		}

		cout<<"请输入语文成绩："<<endl;
		while(!(cin>>chinese)	) 
		{		 
			cin.clear();		 
			cin.sync();		
			cout << "不是数字"<<endl;	
			cout<<"请输入语文成绩："<<endl;
		}
		cout<<"请输入英语成绩："<<endl;
		while(!(cin>>english)	) 
		{		 
			cin.clear();		 
			cin.sync();		
			cout << "不是数字"<<endl;	
			cout<<"请输入英语成绩："<<endl;
		}
		cout<<"请输入数学成绩："<<endl;
		while(!(cin>>math)	) 
		{		 
			cin.clear();		 
			cin.sync();		
			cout << "不是数字"<<endl;	
			cout<<"请输入数学成绩："<<endl;
		}

	}
	void DisplayData()
	{
		cout<<setiosflags(ios::left)    //设置左对齐输出，空格在后

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
		cout<<"请输入姓名:"<<endl;
		cin>>name1;
		cout<<"请输入性别:"<<endl;
		cin>>sex1;
		cout<<"请输入专业:"<<endl;
		cin>>major1;
		cout<<"请输入出生时间:"<<endl;
		cin>>bir1;
		cout<<"请输入年龄:"<<endl;
		while(!(cin>>age1)	) 
		{		 
			cin.clear();		 
			cin.sync();		
			cout << "不是数字"<<endl;	
			cout<<"请输入年龄："<<endl;
			
		}

		cout<<"请输入职务:"<<endl;
		cin>>job;
		cout<<"请输入工资："<<endl;
		cin>>$;
		while(!(cin>>$)	) 
		{		 
			cin.clear();		 
			cin.sync();		
			cout << "不是数字"<<endl;	
			cout<<"请输入工资："<<endl;
			cin>>$;
		}

		while($<0)
		{ 
			cout<<"工资负数!!!"<<endl;
			cout<<"请输入工资："<<endl;
			cin>>$;
		}

	}
	void DisplayData()
	{
		cout<<setiosflags(ios::left)    //设置左对齐输出，空格在后

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
	cout<<"     ******************欢迎进入人员信息管理系统*****************"<<endl; 
	cout<<"     *            *  1.添加数据                                *"<<endl;
	cout<<"     *            *  2.删除数据                                *"<<endl;
	cout<<"     *            *  3.修改数据                                *"<<endl; 
	cout<<"     *            *  4.查找记录                                *"<<endl;
	cout<<"     *            *  5.英语成绩最高学生查询,工资最高教师查询   *"<<endl;
	cout<<"     *            *  6.显示全部人员记录                        *"<<endl;
	cout<<"     *            *  7.保存数据                                *"<<endl;
	cout<<"     *            *  8.读取数据                                *"<<endl;
	cout<<"     *            *  9.退出系统                                *"<<endl;
	cout<<"     ***********************************************************"<<endl;

}
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
void SSearchData(student*stu,teacher*tea)
{
	int snum;
	system("cls"); //清屏函数
	cout<<"请输入学号（工号）"<<endl;
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
	system("cls"); //清屏函数
	cout<<"请输入学号（工号）"<<endl;
}
////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
void XSearchData()
{
	system("cls"); //清屏函数
	cout<<"请输入学号（工号）"<<endl;
}

////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
void ADDdata(student*stu,teacher*tea)

{
	int i;
	char type_1;
	//student stu[100];
	//teacher tea[100];
	cout<<"增加学生数据请输入 s，增加教师数据请输入 t(不区分大小写))"<<endl;
	cin>>type_1;
	if(type_1=='s' || type_1=='S')
	{
		for(i=0;i<stu_num;i++)
		{
			if(stu[i].used==0)
			{
				stu[i].Add_data();
				stu[i].used=1;
				system("cls");///////////////////////////////////////学生输入完毕 清屏
				Face();
				cout<< "添加学生完毕!"<<endl;
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
				system("cls");///////////////////////////////////////////教师输入完毕 清屏
				Face();
				cout<<"添加教师完毕!"<<endl;
				break;
			}
		}
	}
	else
	{
		system("cls"); 
		Face();
		cout<<"选择增加学生或教师数据时输入错误!!!"<<endl;///////////////////错误清屏
	}
}
////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
void DisplayData(student*stu,teacher*tea)
{
	system("cls"); //清屏函数
	cout<<"学生："<<endl<<endl;
	cout<<setiosflags(ios::left) 
		<<setw(9)<<"学号"
		<<setw(9)<<"姓名"
		<<setw(9)<<"性别"
		<<setw(9)<<"专业"
		<<setw(9)<<"出生日期"
		<<setw(9)<<"年龄"
		<<setw(9)<<"语文成绩"
		<<setw(9)<<"英语成绩"
		<<setw(9)<<"数学成绩"<<endl;
	

	for(int i=0;i<stu_num;i++)
	{
		if(stu[i].used==1)
		{
			stu[i].DisplayData();
		}
	}
	cout<<"################################################################################"<<endl;
	cout<<"教师："<<endl<<endl;
	cout<<setiosflags(ios::left) 
		<<setw(10)<<"工号"
		<<setw(10)<<"姓名"
		<<setw(10)<<"性别"
		<<setw(10)<<"专业"
		<<setw(10)<<"出生日期"
		<<setw(10)<<"出生日期"
		<<setw(10)<<"年龄"
		<<setw(10)<<"工资"<<endl;
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
	cout<<"请输入要删除的号码："<<endl;
	cin>>number;

}
////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
void SearchData(student* stu,teacher* tea)
{
	int code_2;
	system("cls"); //清屏函数
	cout<<"按学号（教工号）搜索请按1，按姓名搜索请按2，按性别搜索请按3。"<<endl;
	while(!(cin>>code_2)	) 
		{		 
			cin.clear();		 
			cin.sync();		
			system("cls"); //清屏函数
			Face();
			cout << "输入错误!!!"<<endl;	
			cout<<"按学号（教工号）搜索请按1，按姓名搜索请按2，按性别搜索请按3。"<<endl;
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
		cout<<"无法创建文件!!"<<endl;

		
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
		
		cout<<"请输入操作代号："<<endl;
		while(!(cin>>code_1)	) 
		{		 
			cin.clear();		 
			cin.sync();		
			system("cls"); //清屏函数
			Face();
			cout << "输入错误!!!"<<endl;	
			cout<<"请输入操作代号："<<endl;
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

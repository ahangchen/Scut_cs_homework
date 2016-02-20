// 毕业设计管理系统.cpp: 主项目文件。

#include "stdafx.h"
#include"mainform.h"

using namespace 毕业设计管理系统;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// 在创建任何控件之前启用 Windows XP 可视化效果
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// 创建主窗口并运行它
	Application::Run(gcnew mainform());
	return 0;
}

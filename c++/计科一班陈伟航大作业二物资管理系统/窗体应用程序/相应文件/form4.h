#pragma once
#include"stdafx.h"
#include"form5.h"
#include"form6.h"
#include"form7.h"
#include"form8.h"
#include"form11.h"
#include"form12.h"
namespace 物资管理 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Runtime::InteropServices;
	/// <summary>
	/// form4 摘要
	/// </summary>
	public ref class form4 : public System::Windows::Forms::Form
	{
	public:
		form4(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button3;
	protected: 

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form4::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(69, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"地址录入";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form4::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(24, 86);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(69, 37);
			this->button2->TabIndex = 1;
			this->button2->Text = L"查询修改";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &form4::button2_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(24, 206);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(69, 37);
			this->button4->TabIndex = 3;
			this->button4->Text = L"初始化";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &form4::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(134, 26);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(69, 37);
			this->button5->TabIndex = 4;
			this->button5->Text = L"合并表格";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &form4::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(134, 86);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(69, 37);
			this->button6->TabIndex = 5;
			this->button6->Text = L"批量建立";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &form4::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(134, 147);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(69, 37);
			this->button7->TabIndex = 6;
			this->button7->Text = L"存档";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &form4::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(239, 118);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(69, 37);
			this->button8->TabIndex = 7;
			this->button8->Text = L"退出";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &form4::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(24, 147);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(69, 37);
			this->button9->TabIndex = 8;
			this->button9->Text = L"遍历存档";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &form4::button9_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(134, 206);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(69, 36);
			this->button3->TabIndex = 9;
			this->button3->Text = L"修改密码";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &form4::button3_Click);
			// 
			// form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(320, 278);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"form4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"管理员，欢迎！";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Close();
			 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 managedate p;
			 p.createtxt();
			 MessageBox::Show("文本文件已建立\n请在以下路径中打开\nD:\\物资管理系统文件\\dateroutefile.txt","存档成功",MessageBoxButtons::OK);
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 managedate p;
			 p.createtxt();
			 MessageBox::Show("文本文件已建立\n请在以下路径中打开\nD:\\物资管理系统文件\\dateroutefile.txt","存档成功",MessageBoxButtons::OK);
			 form5^f5=gcnew form5();
			 f5->StartPosition=FormStartPosition::WindowsDefaultLocation;
			 f5->Show();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 String^message="若日期地址文件已存在，将删除原文件进行初始化吗？";
			 String^caption="初始化";
			 MessageBoxButtons buttons=MessageBoxButtons::YesNo;
			 System::Windows::Forms::DialogResult result;
			result=MessageBox::Show(message,caption, buttons);
			if(result==System::Windows::Forms::DialogResult::Yes)
			{
				managedate p;
				p.initial();
				MessageBox::Show("日期地址文件已初始化","初始化结果",MessageBoxButtons::OK);
			}
			else 
			{
				MessageBox::Show("取消操作","初始化结果",MessageBoxButtons::OK);
			}
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
				form6^f6=gcnew form6();
				f6->StartPosition=FormStartPosition::WindowsDefaultLocation;
				f6->Show();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 form7^f7=gcnew form7();
			f7->StartPosition=FormStartPosition::WindowsDefaultLocation;
			f7->Show();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 form8^f8=gcnew form8();
			f8->StartPosition=FormStartPosition::WindowsDefaultLocation;
			f8->Show();
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 form11^f11=gcnew form11();
			f11->StartPosition=FormStartPosition::WindowsDefaultLocation;
			f11->Show();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 form12^f12=gcnew form12();
			f12->StartPosition=FormStartPosition::WindowsDefaultLocation;
			f12->Show();
		 }
};
}

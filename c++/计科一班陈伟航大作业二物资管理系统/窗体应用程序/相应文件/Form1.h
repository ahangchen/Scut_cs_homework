#pragma once
#include"form2.h"
#include"form3.h"
#include"form28.h"
namespace 物资管理 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(44, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"请选择用户";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(46, 79);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 41);
			this->button1->TabIndex = 1;
			this->button1->Text = L"申请者";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(156, 79);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 41);
			this->button2->TabIndex = 2;
			this->button2->Text = L"管理员";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(110, 160);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 41);
			this->button3->TabIndex = 3;
			this->button3->Text = L"一键退出";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(108, 237);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(77, 12);
			this->linkLabel1->TabIndex = 4;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"相关表格下载";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel1_LinkClicked);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(292, 284);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"校园物资管理系统";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Close();
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 form3^f3=gcnew form3();
				f3->StartPosition=FormStartPosition::WindowsDefaultLocation;
				f3->Show();
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 form2^f2=gcnew form2();
			 f2->StartPosition=FormStartPosition::WindowsDefaultLocation;
			 f2->Show();
		 }
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) 
		 {
			 form28^f28=gcnew form28();
			 f28->StartPosition=FormStartPosition::WindowsDefaultLocation;
			 f28->Show();
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->StartPosition=System::Windows::Forms::FormStartPosition::CenterScreen;
		 }
};
}


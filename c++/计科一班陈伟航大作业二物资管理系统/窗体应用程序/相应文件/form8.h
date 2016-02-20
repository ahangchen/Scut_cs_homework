#pragma once
#include"form9.h"
#include"form10.h"
namespace 物资管理 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Runtime::InteropServices;
	/// <summary>
	/// form8 摘要
	/// </summary>
	public ref class form8 : public System::Windows::Forms::Form
	{
	public:
		form8(void)
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
		~form8()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form8::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"输入日期";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"输入数据文件地址";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(89, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(39, 21);
			this->textBox1->TabIndex = 2;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form8::textBox1_KeyDown);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(151, 29);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(21, 21);
			this->textBox2->TabIndex = 3;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form8::textBox2_KeyDown);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(201, 29);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(19, 21);
			this->textBox3->TabIndex = 4;
			this->textBox3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form8::textBox3_KeyDown);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(32, 162);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(211, 93);
			this->textBox4->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(30, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 12);
			this->label3->TabIndex = 6;
			this->label3->Text = L"完整信息";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(32, 101);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(211, 21);
			this->textBox5->TabIndex = 7;
			this->textBox5->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form8::textBox5_KeyDown);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(270, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(61, 28);
			this->button1->TabIndex = 8;
			this->button1->Text = L"确定";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form8::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(270, 162);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(61, 35);
			this->button3->TabIndex = 10;
			this->button3->Text = L"修改日期";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &form8::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(134, 33);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(17, 12);
			this->label5->TabIndex = 12;
			this->label5->Text = L"年";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(178, 33);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(17, 12);
			this->label4->TabIndex = 13;
			this->label4->Text = L"月";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(226, 33);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(17, 12);
			this->label6->TabIndex = 14;
			this->label6->Text = L"日";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(270, 101);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(61, 28);
			this->button2->TabIndex = 15;
			this->button2->Text = L"确定";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &form8::button2_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(270, 220);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(61, 35);
			this->button4->TabIndex = 16;
			this->button4->Text = L"修改路径";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &form8::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(132, 272);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(62, 34);
			this->button5->TabIndex = 17;
			this->button5->Text = L"返回";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &form8::button5_Click);
			// 
			// form8
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(343, 316);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"form8";
			this->Text = L"查询";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
			 {
				  if(e->KeyCode==Keys::Enter)
				 textBox2->Select();
			 }
private: System::Void textBox2_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			  if(e->KeyCode==Keys::Enter)
				 textBox3->Select();
		 }
private: System::Void textBox3_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			  if(e->KeyCode==Keys::Enter)
				 button1->Select();
		 }
private: System::Void textBox5_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			  if(e->KeyCode==Keys::Enter)
				 button2->Select();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(textBox1->Text==""||textBox2->Text==""||textBox3->Text=="")
				 {
					 MessageBox::Show("请输入完整日期","日期错误",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
				 }
			  if(!(textBox1->Text==""||textBox2->Text==""||textBox3->Text==""))
				 {
					 int year,month,day;
					 char route[50],txt[50];
					 year=int::Parse(textBox1->Text);
					 month=int::Parse(textBox2->Text);
					 day=int::Parse(textBox3->Text);					 
					 managedate p;
					 p.search(2,year,month,day,route,txt);
					 String^s="日期"+"\t"+year.ToString()+"年"+month.ToString()+"月"+day.ToString()+"日\t\t"+"\t";
					 s+="数据文件地址："+"\t";
					 String^s1=gcnew String(route);
					 String^s2=gcnew String(txt);
					 s+=s1+"\t"+"\t文本文件地址："+"\t"+s2;
					 textBox4->Text=s;
				 }
			  button3->Select();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(textBox5->Text=="")
				 {
					 MessageBox::Show("请输入完整路径","路径错误",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
				 }
			  if(!(textBox5->Text==""))
				 {
					 int year,month,day;
					 char route[50],txt[50];
					 String^str=textBox5->Text;
					 char*str1=(char*)(Marshal::StringToHGlobalAnsi(str)).ToPointer();
					 strcpy_s(route,str1);				 
					 managedate p;
					 p.search(1,year,month,day,route,txt);
					 String^s="日期"+"\t"+year.ToString()+"年"+month.ToString()+"月"+day.ToString()+"日\t\t"+"\t";
					 s+="数据文件地址："+"\t";
					 String^s1=gcnew String(route);
					 String^s2=gcnew String(txt);
					 s+=s1+"\t"+"\t文本文件地址："+"\t"+s2;
					 textBox4->Text=s;
				 }
			  button4->Select();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 form9^f9=gcnew form9();
				f9->StartPosition=FormStartPosition::WindowsDefaultLocation;
				f9->Show();
				button5->Select();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			  form10^f10=gcnew form10();
				f10->StartPosition=FormStartPosition::WindowsDefaultLocation;
				f10->Show();
				button5->Select();
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Close();
		 }
};
}

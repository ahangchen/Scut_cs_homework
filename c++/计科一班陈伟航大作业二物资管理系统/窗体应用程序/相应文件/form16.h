#pragma once
#include"form17.h"
#include"form18.h"
#include"form14.h"
#include"form19.h"
#include"form20.h"
#include"form21.h"
#include"form22.h"
#include"form23.h"
#include"form24.h"
namespace 物资管理 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Runtime::InteropServices;

	/// <summary>
	/// form16 摘要
	/// </summary>
	public ref class form16 : public System::Windows::Forms::Form
	{
	public:
		form16(void)
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
		~form16()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form16::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(6, 28);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(291, 229);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 21);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(283, 204);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"基本信息";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(73, 158);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(134, 21);
			this->textBox5->TabIndex = 14;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(213, 155);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(51, 24);
			this->button5->TabIndex = 13;
			this->button5->Text = L"查询";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &form16::button5_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(73, 123);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(134, 21);
			this->textBox4->TabIndex = 12;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(213, 120);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(51, 24);
			this->button4->TabIndex = 11;
			this->button4->Text = L"查询";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &form16::button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(73, 86);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(134, 21);
			this->textBox3->TabIndex = 10;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(213, 83);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(51, 24);
			this->button3->TabIndex = 9;
			this->button3->Text = L"查询";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &form16::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(73, 54);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(134, 21);
			this->textBox2->TabIndex = 8;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(213, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(51, 24);
			this->button2->TabIndex = 7;
			this->button2->Text = L"查询";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &form16::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(73, 16);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(134, 21);
			this->textBox1->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(14, 161);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 12);
			this->label6->TabIndex = 5;
			this->label6->Text = L"联系方式";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(26, 126);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 12);
			this->label5->TabIndex = 4;
			this->label5->Text = L"负责人";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(14, 89);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 12);
			this->label4->TabIndex = 3;
			this->label4->Text = L"活动地点";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 12);
			this->label3->TabIndex = 2;
			this->label3->Text = L"活动名称";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"主办方";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(213, 51);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(51, 24);
			this->button1->TabIndex = 0;
			this->button1->Text = L"查询";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form16::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage2.BackgroundImage")));
			this->tabPage2->Controls->Add(this->button10);
			this->tabPage2->Controls->Add(this->button9);
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->button7);
			this->tabPage2->Location = System::Drawing::Point(4, 21);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(283, 204);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"物资信息";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(161, 113);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(78, 45);
			this->button10->TabIndex = 3;
			this->button10->Text = L"音响查询";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &form16::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(43, 113);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(78, 45);
			this->button9->TabIndex = 2;
			this->button9->Text = L"无线麦查询";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &form16::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(161, 24);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(78, 45);
			this->button8->TabIndex = 1;
			this->button8->Text = L"桌子查询";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &form16::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(43, 24);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(78, 45);
			this->button7->TabIndex = 0;
			this->button7->Text = L"胶凳查询";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &form16::button7_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 12);
			this->label1->TabIndex = 1;
			this->label1->Text = L"请选择查询方式";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(117, 268);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(64, 32);
			this->button6->TabIndex = 2;
			this->button6->Text = L"返回";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &form16::button6_Click);
			// 
			// form16
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(306, 313);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"form16";
			this->Text = L"按条件查询";
			this->Load += gcnew System::EventHandler(this, &form16::form16_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Close();
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(textBox2->Text=="")	MessageBox::Show("还没输入主办方","输入错误",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			 else
			 {
				 Clipboard::Clear();
				 textBox2->SelectAll();
				 textBox2->Copy();
				 form17^f17=gcnew form17();
				 f17->StartPosition=FormStartPosition::WindowsDefaultLocation;
				 f17->Show();
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(textBox1->Text=="")	MessageBox::Show("还没输入活动名称","输入错误",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			 else
			 {
				 Clipboard::Clear();
				 textBox1->SelectAll();
				 textBox1->Copy();
				 form14^f14=gcnew form14();
				 f14->StartPosition=FormStartPosition::WindowsDefaultLocation;
				 f14->Show();
			 }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(textBox3->Text=="")	MessageBox::Show("还没输入活动地点","输入错误",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			 else
			 {
				 Clipboard::Clear();
				 textBox3->SelectAll();
				 textBox3->Copy();
				 form18^f18=gcnew form18();
				 f18->StartPosition=FormStartPosition::WindowsDefaultLocation;
				 f18->Show();
			 }
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(textBox4->Text=="")	MessageBox::Show("还没输入负责人名","输入错误",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			 else
			 {
				 Clipboard::Clear();
				 textBox4->SelectAll();
				 textBox4->Copy();
				 form19^f19=gcnew form19();
				 f19->StartPosition=FormStartPosition::WindowsDefaultLocation;
				 f19->Show();
			 }
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(textBox5->Text=="")	MessageBox::Show("还没输入负责人名","输入错误",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			 else
			 {
				 Clipboard::Clear();
				 textBox5->SelectAll();
				 textBox5->Copy();
				 form20^f20=gcnew form20();
				 f20->StartPosition=FormStartPosition::WindowsDefaultLocation;
				 f20->Show();
			 }
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 form21^f21=gcnew form21();
			 f21->StartPosition=FormStartPosition::WindowsDefaultLocation;
			 f21->Show();
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 form22^f22=gcnew form22();
			 f22->StartPosition=FormStartPosition::WindowsDefaultLocation;
			 f22->Show();
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 form23^f23=gcnew form23();
			 f23->StartPosition=FormStartPosition::WindowsDefaultLocation;
			 f23->Show();
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 form24^f24=gcnew form24();
			 f24->StartPosition=FormStartPosition::WindowsDefaultLocation;
			 f24->Show();
		 }
private: System::Void form16_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
		 }
};
}

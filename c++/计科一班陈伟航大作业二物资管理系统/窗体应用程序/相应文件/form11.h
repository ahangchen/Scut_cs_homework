#pragma once
#include"form5.h"
namespace 物资管理 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// form11 摘要
	/// </summary>
	public ref class form11 : public System::Windows::Forms::Form
	{
	public:
		form11(void)
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
		~form11()
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

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form11::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(86, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"请输入工作表的起始日期";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(86, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"请输入工作表的结束日期";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(85, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(41, 21);
			this->textBox1->TabIndex = 2;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form11::textBox1_KeyDown);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(155, 51);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(25, 21);
			this->textBox2->TabIndex = 3;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form11::textBox2_KeyDown);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(85, 116);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(41, 21);
			this->textBox4->TabIndex = 5;
			this->textBox4->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form11::textBox4_KeyDown);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(155, 116);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(25, 21);
			this->textBox5->TabIndex = 6;
			this->textBox5->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form11::textBox5_KeyDown);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(132, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 12);
			this->label3->TabIndex = 8;
			this->label3->Text = L"年";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(186, 54);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(17, 12);
			this->label4->TabIndex = 9;
			this->label4->Text = L"月";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(132, 119);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(17, 12);
			this->label6->TabIndex = 11;
			this->label6->Text = L"年";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(186, 119);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(17, 12);
			this->label7->TabIndex = 12;
			this->label7->Text = L"月";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(46, 165);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(46, 31);
			this->button1->TabIndex = 14;
			this->button1->Text = L"确定";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form11::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(113, 165);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(79, 31);
			this->button2->TabIndex = 15;
			this->button2->Text = L"查看工作表";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &form11::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(213, 165);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(46, 31);
			this->button3->TabIndex = 16;
			this->button3->Text = L"返回";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &form11::button3_Click);
			// 
			// form11
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(300, 225);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"form11";
			this->Text = L"建立工作表";
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
				 textBox4->Select();
		 }
private: System::Void textBox4_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			 if(e->KeyCode==Keys::Enter)
				 textBox5->Select();
		 }
private: System::Void textBox5_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			 if(e->KeyCode==Keys::Enter)
				 button1->Select();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 int year1,month1,year2,month2;
			 if(textBox1->Text!=""&&textBox2->Text!=""&&textBox4->Text!=""&&textBox5->Text!="")
			 {
				 year1=int::Parse(textBox1->Text);
				 month1=int::Parse(textBox2->Text);
				 year2=int::Parse(textBox4->Text);
				 month2=int::Parse(textBox5->Text);
				 manage p;
				 p.createsheet(year1,month1,year2,month2);
			 }
			 else MessageBox::Show("亲！还没输入日期","输入错误",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 form5^f5=gcnew form5();
			 f5->StartPosition=FormStartPosition::WindowsDefaultLocation;
			 f5->Show();
			 button3->Select();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Close();
		 }
};
}

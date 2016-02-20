#pragma once

namespace 物资管理 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Runtime::InteropServices;
	/// <summary>
	/// form10 摘要
	/// </summary>
	public ref class form10 : public System::Windows::Forms::Form
	{
	public:
		form10(void)
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
		~form10()
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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form10::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"原数据文件地址";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(150, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"新数据文件地址";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(26, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(213, 21);
			this->textBox1->TabIndex = 2;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form10::textBox1_KeyDown);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(26, 67);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(213, 21);
			this->textBox2->TabIndex = 3;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form10::textBox2_KeyDown);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(54, 184);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(62, 39);
			this->button1->TabIndex = 4;
			this->button1->Text = L"修改";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form10::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(27, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 12);
			this->label3->TabIndex = 5;
			this->label3->Text = L"原文本文件地址";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(26, 106);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(213, 21);
			this->textBox3->TabIndex = 6;
			this->textBox3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form10::textBox3_KeyDown);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(150, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 12);
			this->label4->TabIndex = 7;
			this->label4->Text = L"新文本文件地址";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(26, 145);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(213, 21);
			this->textBox4->TabIndex = 8;
			this->textBox4->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form10::textBox4_KeyDown);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(290, 67);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(217, 114);
			this->textBox5->TabIndex = 9;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(152, 186);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 36);
			this->button2->TabIndex = 10;
			this->button2->Text = L"返回";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &form10::button2_Click);
			// 
			// form10
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(264, 252);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Location = System::Drawing::Point(300, 0);
			this->Name = L"form10";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"修改路径";
			this->Load += gcnew System::EventHandler(this, &form10::form10_Load);
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
				 textBox4->Select();
		 }
private: System::Void textBox4_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			 if(e->KeyCode==Keys::Enter)
				 button1->Select();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(textBox1->Text==""||textBox2->Text==""||textBox3->Text==""||textBox4->Text=="")
				 {
					 MessageBox::Show("请输入路径","路径错误",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
				 }
			 else
				 {
					 int year=0,month=0,day=0,year2=0,month2=0,day2=0;
					 char route[50],txt[50],route2[50],txt2[50];
					 String^STR1=textBox1->Text;
					 char*str1=(char*)(Marshal::StringToHGlobalAnsi(STR1)).ToPointer();
					 strcpy(route,str1);
					 String^STR2=textBox2->Text;
					 char*str2=(char*)(Marshal::StringToHGlobalAnsi(STR2)).ToPointer();
					 strcpy(route2,str2);
					 String^STR3=textBox3->Text;
					 char*str3=(char*)(Marshal::StringToHGlobalAnsi(STR3)).ToPointer();
					 strcpy(txt,str3);
					 String^STR4=textBox4->Text;
					 char*str4=(char*)(Marshal::StringToHGlobalAnsi(STR4)).ToPointer();
					 strcpy(txt2,str4);
					 managedate p;
					 p.change(1,route,route2,txt,txt2,year,month,day,year2,month2,day2);
					 String^s="日期"+"\t"+year.ToString()+"年"+month.ToString()+"月"+day.ToString()+"日\t\t"+"\t";
					 s+="数据文件地址："+"\t";
					 String^s1=gcnew String(route);
					 String^s2=gcnew String(txt);
					 s+=s1+"\t"+"\t文本文件地址："+"\t"+s2;
					 this->Width+=250;
					 textBox5->Text=s;
				 }
			 button2->Select();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Close();
		 }
private: System::Void form10_Load(System::Object^  sender, System::EventArgs^  e) 
		 {

		 }
};
}
